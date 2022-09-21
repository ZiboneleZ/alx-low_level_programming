#include "main.h"

/**
 * _strchr - locate character in a string
 * @s: char array string
 * @c: char to look for
 * Return: NULL if char not found, or pointer to first occurrence of char `c`
 */

char *_strcat(char *dest, char *src)

{
  
  int lengthD, lengthS;
  

  
  lengthD = 0;
  
  lengthS = 0;
  

  
  while (*(dest + lengthD) != '\0')
    
    lengthD++;
  

  
  while (*(src + lengthS) != '\0' && lengthD < 97)
    
    {
      
      *(dest + lengthD) = *(src + lengthS);
      
      lengthD++;
      
      lengthS++;
      
    }
  
  *(dest + lengthD) = '\0';
  
  return (dest);
  
}
