#include "holberton.h"
/**
 * _strspn -  function that gets the length of a prefix substring
 *
 * @s: pointer
 * @accept: pointer
 *
 * Return: result
 */
unsigned int _strspn(char *s, char *accept)
{

unsigned int i;
unsigned int j;
unsigned int result;
  
i = 0;
result = 0;

while (s[i] != 0 && s[i] != ' ')
{

j = 0;
    
while (accept[j] != 0)
{

if (accept[j] == s[i])
{

result += 1;
break;
}

j++;

}

i++;

}

return (result);

}
