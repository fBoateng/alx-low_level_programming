/**
 * _strstr - finds the first occurrence of the substring needle in
 * the string haystack
 *
 * @haystack: string to check
 * @needle: substring to find
 * Return: pointer to beginning of located substring
 * NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			}
		}
		haystack++;
	}
	return ('\0');
}
