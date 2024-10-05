/*
Assignment name  : swap_cases
Expected files   : swap_cases.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that takes a string and reverses the case of all its letters.
Other characters remain unchanged.

Your function should be declared as follows
char *swap_cases(char *str);

*/

char *swap_cases(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return str;
}