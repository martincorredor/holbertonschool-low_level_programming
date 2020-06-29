#include "holberton.h"

/**
   *_strstr - locates a substring
   *@haystack: string
   *@needle: string to searches in haystrack
   *Return: characters wich coincided
   */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystck[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] != needle[i] || haystack[i] == '\0')
				breack;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return ('\0')
}
