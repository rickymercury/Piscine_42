#!/bin/bash

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    42 EVALUATE SYSTEM                                  :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+      #
#    By: Ricardo Medeiros                             +#+  +:+       +#+       #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 1904/02/28 19:04:00 by Ricardo Medeiros  #+#    #+#              #
#    Updated: 1904/02/28 19:04:00 by Ricardo Medeiros ###   ########           #
#                                                                              #
# **************************************************************************** #

# Cores
YELLOW='\033[1;33m'
WHITE='\033[1;37m'
BLUE='\033[1;34m'
GREEN='\033[1;32m'
RED='\033[1;31m'
NC='\033[0m' # Sem cor

# Função da barra de progresso
progress_bar() {
    local duration=$1
    local bar="██████████████████████████████████████████████████"
    local bar_length=${#bar}
    local increment=$((duration * 10 / bar_length))
    echo -ne "${YELLOW}Aguarda:${NC} "
    
    for ((i=0; i<bar_length; i++)); do
        echo -ne "${WHITE}${bar:i:1}${NC}"
        sleep 0.$increment
    done
    echo
}

# Variáveis para a contagem
total_exercicios=0
exercicios_corretos=0
exercicios_errados=0

# 1: Mostrar a estrutura da pasta ao utilizar o comando "tree"
echo -e "${YELLOW}Exibir a estrutura da pasta...${NC}"
tree

# Barra de progresso antes da verificação da norminette
progress_bar 5

# 2: Verificar todos os arquivos ao utilizar a nossa querida norminette
echo -e "${YELLOW}A executar a norminette em todos os arquivos! Aviso: ela é esquisita...${NC}"
for dir in $(find . -type d -name "ex*" | sort); do
    echo -e "${BLUE}Verificar a pasta: $dir${NC}"
    for file in "$dir"/*.c; do
        if [ -f "$file" ]; then
            ((total_exercicios++))
            resultado=$(norminette "$file")
            if echo "$resultado" | grep -q "Error"; then
                echo -e "${RED}Incorreto: $file${NC}"
                echo -e "${RED}$resultado${NC}" # Mostra o resultado da norminette
                ((exercicios_errados++))
            else
                echo -e "${GREEN}Correto: $file${NC}"
                ((exercicios_corretos++))
            fi
        fi
    done
done

# 2.1: Mostrar o resultado final
echo -e "\n${YELLOW}Resumo da norminette:${NC}"
echo -e "${GREEN}Corretos: $exercicios_corretos${NC}"
echo -e "${RED}Incorretos: $exercicios_errados${NC}"
echo -e "${WHITE}Total de exercícios verificados: $total_exercicios${NC}"

# Variáveis para a contagem da compilação
total_compilados=0
total_falhas_compilacao=0

# 3: Perguntar se quer continuar para a compilação
read -p "Queres continuar para a compilação? (y para continuar, ou n para corrigir): " escolha

if [[ $escolha =~ ^([yY])$ ]]; then
    # Barra de progresso antes da compilação
    progress_bar 5

    # 3.1: Compilar e executar os ficheiros .c em cada pasta
    echo -e "${YELLOW}A compilar e a executar todos os arquivos .c...${NC}"
    for dir in $(find . -type d -name "ex*" | sort); do
        echo -e "${YELLOW}A processar a pasta: $dir${NC}"
        for file in "$dir"/*.c; do
            if [ -f "$file" ]; then
                # Tenta compilar o arquivo e captura a saída de erro
                output=$(cc -Wall -Wextra -Werror -o "$dir/a.out" "$file" 2>&1)
                if [ $? -eq 0 ]; then
                    echo -e "${GREEN}Compilado com sucesso: $file${NC}"
                    ((total_compilados++))
                else
                    echo -e "${RED}Erro de compilação: $file${NC}"
                    echo -e "${RED}$output${NC}" # Exibe o erro e a linha onde ocorreu
                    ((total_falhas_compilacao++))
                fi
            fi
        done

        # Executar o arquivo compilado, se existir
        if [ -f "$dir/a.out" ]; then
            echo -e "${YELLOW}A executar $dir/a.out${NC}"
            (cd "$dir" && ./a.out)
            echo
        fi
    done

    # Mostrar o resultado final da compilação
    echo -e "\n${YELLOW}Resumo da compilação:${NC}"
    echo -e "${GREEN}Compilados com sucesso: $total_compilados${NC}"
    echo -e "${RED}Erros de compilação: $total_falhas_compilacao${NC}"
    echo -e "${WHITE}Total de exercícios verificados: $total_exercicios${NC}"

elif [[ $escolha =~ ^([nN])$ ]]; then
    echo -e "${YELLOW}${NC}"
else
    echo -e "${YELLOW}Escolha inválida. A encerrar...${NC}"
    exit 1
fi


# 4: Seleciona o exercício que queres corrigir
while true; do
    echo -e "${YELLOW}Queres corrigir algum exercício?${NC}"
    read -p "Escolhe c -> para corrigir ou n -> para sair do evaluator: " corrigir

    if [[ $corrigir =~ ^([cC])$ ]]; then
        echo -e "${YELLOW}Seleciona um arquivo para abrir no Vim (ya, tem de ser mesmo no Vim) das seguintes pastas:${NC}"
        dirs=($(find . -type d -name "ex*" | sort))
        options=()
        for dir in "${dirs[@]}"; do
            files=($(find "$dir" -name "*.c"))
            for file in "${files[@]}"; do
                options+=("$dir/$(basename "$file")")
            done
        done

        for i in "${!options[@]}"; do
            echo "$i) ${options[$i]}"
        done

        read -p "Escreve o número do ficheiro que queres abrir: " choice

        if [[ $choice =~ ^[0-9]+$ ]] && [ $choice -ge 0 ] && [ $choice -lt ${#options[@]} ]; then
            selected_file=${options[$choice]}
            echo -e "${YELLOW}A abrir $selected_file no Vim numa nova janela...${NC}"

            # Abrir o arquivo no Vim numa nova janela do terminal (gnome-terminal ou xterm)
            if command -v gnome-terminal &> /dev/null; then
                gnome-terminal -- bash -c "vim '$selected_file'; exec bash"
            elif command -v xterm &> /dev/null; then
                xterm -e "vim '$selected_file'"
            else
                echo -e "${RED}Erro: Nenhum terminal compatível encontrado (gnome-terminal ou xterm).${NC}"
                exit 1
            fi

            # 4.1: Após corrigir o arquivo, executar a norminette novamente
            progress_bar 5
            echo -e "${YELLOW}Shit, here we go again... A executar a norminette novamente em $selected_file...${NC}"
            norminette "$selected_file"

            # 4.2: Perguntar se quer compilar, corrigir outro ou sair
            while true; do
                read -p "Queres compilar (c), corrigir outro arquivo (r) ou sair (s)?: " continuar
                if [[ $continuar =~ ^([cC])$ ]]; then
                    # Barra de progresso antes da compilação
                    progress_bar 5
                    
                    # Remove os comment signs /* e */ de cada ficheiro .c
                    echo -e "${BLUE}A remover os comment signs...${NC}"
                    for dir in $(find . -type d -name "ex*" | sort); do
                        for file in "$dir"/*.c; do
                            if [ -f "$file" ]; then
                                echo -e "${YELLOW}Processing file: $file${NC}"
                                # Remove comment signs after line 13
                                sed -i '14,$ { s/\/\*\(.*\)\*\//\1/g; s/\/\*\(.*\)/\1/g; s/\*\///g; }' "$file"
                             fi
                        done
                   done

                    # 4.2.1: A compilar e a executar os ficheiros .c em cada pasta
                    echo -e "${YELLOW}A compilar e a executar todos os arquivos .c...${NC}"
                    for dir in $(find . -type d -name "ex*" | sort); do
                        echo -e "${YELLOW}A processar a pasta: $dir${NC}"
                        for file in "$dir"/*.c; do
                            if [ -f "$file" ]; then
                                # Tenta compilar o arquivo e captura a saída de erro
                                output=$(cc -Wall -Wextra -Werror -o "$dir/a.out" "$file" 2>&1)
                                if [ $? -eq 0 ]; then
                                    echo -e "${GREEN}Compilado com sucesso: $file${NC}"
                                    ((total_compilados++))
                                else
                                    echo -e "${RED}Erro de compilação: $file${NC}"
                                    echo -e "${RED}$output${NC}" # Exibe o erro e a linha onde ocorreu
                                    ((total_falhas_compilacao++))
                                fi
                            fi
                        done

                        # 4.2.1.1: Executar o arquivo compilado, se existir
                        if [ -f "$dir/a.out" ]; then
                            echo -e "${YELLOW}A executar $dir/a.out${NC}"
                            (cd "$dir" && ./a.out)
                            echo
                        fi
                    done

                    # 4.2.2: Mostrar o resultado final da compilação
                    echo -e "\n${YELLOW}Resumo da compilação:${NC}"
                    echo -e "${GREEN}Compilados com sucesso: $total_compilados${NC}"
                    echo -e "${RED}Erros de compilação: $total_falhas_compilacao${NC}"
                    echo -e "${WHITE}Total de exercícios verificados: $total_exercicios${NC}"

                    break # Sai do loop após compilar
                elif [[ $continuar =~ ^([rR])$ ]]; then
                    break # Volta ao loop principal para corrigir outro arquivo
                elif [[ $continuar =~ ^([sS])$ ]]; then
                    echo -e "${YELLOW}A encerrar...${NC}"
                    exit 0
                else
                    echo -e "${YELLOW}Escolha inválida. Escreve c, r ou s.${NC}"
                fi
            done

        else
            echo -e "${YELLOW}Escolha inválida. Escreve ao olhar para o teclado, bro${NC}"
        fi

    elif [[ $corrigir =~ ^([nN])$ ]]; then
        echo -e "${YELLOW}Nenhuma correção será realizada. A encerrar...${NC}"
        break
    else
        echo -e "${YELLOW}Escolha inválida. Escreve y ou n.${NC}"
    fi
done

echo -e "${YELLOW}Agora os teus códigos devem estar corretos (ou não). Se pensas que a norminette é chata, espera pela fucking MOULINETTE. Cheers :D${NC}"



















