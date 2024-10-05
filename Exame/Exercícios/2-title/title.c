/*
Assignment name  : title
Expected files   : title.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or more strings and, for each argument, puts 
the first character of each word (if it's a letter) in uppercase followed by a \n.

A word is a section of string delimited by spaces/tabs or the start/end of the
string. If a word has a single letter, it must be capitalized.

If there are no parameters, display \n.

Examples:

$> ./title | cat -e
$
$> ./rstr_capitalizer "no NO no no no!" | cat -e
No NO No No No!$
$> ./title pjldfjslogjlsj | cat -e
$> Pjldfjslogjlsj
*/

#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    i = 0;
    if(ac == 2)
    {
        if(av[1][0] >= 'a' && av[1][0] <= 'z')
        {
            av[1][0] -= 32;
        }
        while (av[1][i])
        {
            if((av[1][i - 1] == ' ' || av[1][i - 1] == '\t') && av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                av[1][i] -= 32;
            }
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}