/**
 * _strchr - locates a character in a string
 * @s: string to analyse
 * @c: char to check
 * Return: first occurence of char or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
