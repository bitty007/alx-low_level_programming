#include "main.h"

/**
*_isdigit - checks whether a character is a digit or not
*@C: tested character
*Return: 1 if it is, 0 otherwise
*/

int_isdigit(int c)
{
       if ((c >= 48) && (c <= 57))
       {
               return (1);
       }

       return (0);
}
