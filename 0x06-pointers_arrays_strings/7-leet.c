#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *leet(char *str)
{
    char *encoded_str = strdup(str);

    for (int i = 0; i < strlen(encoded_str); i++)
    {
        switch (encoded_str[i])
        {
            case 'a':
            case 'A':
                encoded_str[i] = '4';
                break;
            case 'e':
            case 'E':
                encoded_str[i] = '3';
                break;
            case 'o':
            case 'O':
                encoded_str[i] = '0';
                break;
            case 't':
            case 'T':
                encoded_str[i] = '7';
                break;
            case 'l':
            case 'L':
                encoded_str[i] = '1';
                break;
        }
    }

    return encoded_str;
}
