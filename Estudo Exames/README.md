## Exams

Para estudar e preparar para os exames da 42.

| Website                                  | Description                                           | Source  |
|------------------------------------------|-------------------------------------------------------|---------|
| [GradeMe](https://grademe.fr/)           | Simulate piscine and common core exams.               | Website |




📝 Fazer Login no Exame

1️⃣ Faz login (na tela principal) com:

    Login: exam
    Password: exam

2️⃣ Assim que entrares, abre o terminal e escreve:

     examshell

     Nota: Só podes iniciar o examshell quando começar o exame!

3️⃣ Coloca, agora, o teu login do Intra 42:

    Login: o teu username do intra 42
    Password: a tua password

4️⃣ A tua foto do Intra:

    Valida a tua foto

5️⃣ Acessa o Rendu:

    Pressiona Y ou Yes

6️⃣ Abre um novo Terminal ou o VSCode:

    Encontras os enunciados do teu exame na pasta 'subject'.

    Nota: No primeiro exercicio, só te vai aparecer um enunciado. Assim que terminares o primeiro exercicio, aparece te o segundo enunciado, e assim sucessivamente.

    Na pasta Rendu, é onde vais guardar as pastas com os ficheiros .c, dos exercicios.

    Tens de criar uma pasta com o nome do exercicio, e dentro desta pasta, cria o ficheiro.c e começa a resolver o exericio, utilizando o Vim ou o VSCode.

7️⃣ No Exam Shell, tens apenas 3 comandos:

    status - para verificar o tempo e outras coisas

    grademe - para submeter o exercicio para ser corrigido pela moulinette

    finish - para dar o exame como terminado

📤 Submeter 

Assim que tiveres terminado o teu exercicio, entra na pasta Rendu e dá push na pasta que tu criaste:

1️⃣ git add <nome da pasta/ficheiro.c>

2️⃣ git status

3️⃣ git commit -m "qualquer mensagem"

4️⃣ git push

5️⃣ Depois de dares git push, escreve grademe no examshell para que o teu exercicio seja avaliado.