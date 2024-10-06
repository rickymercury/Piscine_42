## Configurar a SSH KEY do GiT

Configuração da Chave SSH do GIT

Passo 1 - Primeiro, abrimos o terminal. <br>
Passo 2 - Executamos este comando: ssh-keygen -t rsa -b 4096 <br>
Passo 3 - Damos Enter. <br>
Passo 4 - Damos Enter até que apareça isto na tela:

<img width="458" alt="Screen Shot 2022-02-11 at 12 26 01 PM" src="https://user-images.githubusercontent.com/58959408/153526481-819cb9e6-c02a-4fe1-b452-cfca07d1f2d3.png">

Passo 5 - Executamos este comando: ssh key cat .ssh/id_rsa.pub <br>
Passo 6 - Copiamos a chave pública. <br>
Passo 7 - Colamos no perfil do Intra 42.


# Submeter um Projeto em C

A maneira mais rápida de submeter um projeto em C.

1 - Vai para a página do projeto em C no intra (link para a intra - intra.42.fr) </br>
2 - Copia o link do repositório git do projeto C na página da intra. </br>
3 - Com esse link, abre o Terminal e navega até a área de trabalho usando o comando cd. </br>
4 - Uma vez que estiveres na área de trabalho, digita o seguinte comando - git clone <cola o link da URL da intra aqui> (espaço) digita o nome do projeto aqui. </br>
5 - Pressiona Enter e o repositório da intra aparecerá na área de trabalho. </br>
6 - Copia os projetos da outra pasta de C que estás a submeter para esta pasta que clonaste do intra. </br>
7 - Depois de copiar os arquivos .c para esta pasta clonada, faz o seguinte:

Digita no shell os seguintes comandos para submeter o projeto em C:

1 - git status </br>
2 - git add * (* - o asterisco adiciona todos os arquivos .c de uma vez, em vez de um por um). </br>
3 - git status (mostra que todos os arquivos .c foram adicionados - certifica-te de que apenas os arquivos .c apareçam e remove outros arquivos como a.out, etc.). </br>
4 - git commit -m "meu commit" "deixa a mensagem de commit aqui" </br>
5 - git push

O projeto foi enviado!

Antes de clicar em 'Set Project as Finished' na página do projeto C da intra, certifica-te de clonar novamente esse projeto C da intra para garantir que todas as pastas e arquivos .c estejam lá.

Se todas as pastas e arquivos .c estiverem lá, vá em frente e clique em 'Set Project as Finished', inscreva-se em 2 avaliações e boa sorte!