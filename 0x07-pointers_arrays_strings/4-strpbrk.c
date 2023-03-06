/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to check
 * @accept: sets of bytes to be searched for
 * Return: pointer to matched byte if matched
 * NULL otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
