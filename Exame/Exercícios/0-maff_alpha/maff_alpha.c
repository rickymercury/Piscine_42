/*
Assignment name  : maff_alpha
Expected files   : maff_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreve um programa que exiba o alfabeto, com as letras pares em maisculas, e
as letras ímpares em minusculas, seguidas por uma newline.


Example:

$> ./maff_alpha | cat -e
aBcDeFgHiJkLmNoPqRsTuVwXyZ$
*/

#include <unistd.h>

int   main(void)
{
  char lowercase;
  char uppercase;
  
  lowercase = 'a';
  uppercase = 'B';
  while (lowercase <= 'z' && uppercase <= 'Z')
  { 
    write (1, &lowercase, 1);
    write (1, &uppercase, 1);
    lowercase += 2;
    uppercase += 2;
  }
  write (1, "\n", 1);
  return (0);
}  