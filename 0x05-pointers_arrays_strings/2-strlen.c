/**
 *_strlen - retuns the legnth of the string.
 *@s: tested string
 * Return: the length of the string.
 */

int _strlen(char *s)

{

int i;

i = 0;
while (*(s + i) != '\0')

{

i++;

}

return (i);

}
