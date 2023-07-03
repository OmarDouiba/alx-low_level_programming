#include "main.h"
/**
* _strspn - Function that gets the length of a prefix substring.
* @s: A pointer to the string to be analyzed.
* @accept: A pointer to the string containing the characters to be matched.
*
* Auth: DOUIBA Omar.
* Return: Number of bytes in the initial segment of s which consist only
*						of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i = 0, j, n = 0;
    unsigned int len2 = 0;
    
    while (s[len2] != '\0')
    {
        len2++;
    }
    
        while (*s)
        {
            j = 0;
            for (; j < len2; j++)
            {
                if (s[i] == accept[j])
                {
                    n++;
                    break;
                    
                }
            }
            
            if (j == len2)
            {
                break;
            }

            i++;
        }
        return n;
}
