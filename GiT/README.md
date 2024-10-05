## Configurar a SSH KEY do GiT

Configuração da Chave SSH do GIT

Passo 1 - Primeiro, abrimos o terminal.
Passo 2 - Executamos este comando: ssh-keygen -t rsa -b 4096
Passo 3 - Damos Enter.
Passo 4 - Damos Enter até que apareça isto na tela:

<img width="458" alt="Screen Shot 2022-02-11 at 12 26 01 PM" src="https://user-images.githubusercontent.com/58959408/153526481-819cb9e6-c02a-4fe1-b452-cfca07d1f2d3.png">

Passo 5 - Executamos este comando: ssh key cat .ssh/id_rsa.pub
Passo 6 - Copiamos a chave pública.
Passo 7 - Colamos no perfil do Intra 42.