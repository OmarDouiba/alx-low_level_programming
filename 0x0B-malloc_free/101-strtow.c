#include "main.h"
/**
 *extractWords - Extracts individual words from a string and stores them in an array.
 *@str: The input string containing the words.
 *@words: The array of pointers to store the extracted words.
 */
void extractWords(char *str, char **words)
{
	int i = 0;
	int word_index = 0;

	while (str[i] != '\0')
	{
		while (str[i] == ' ')
		{
			i++;
		}

		if (str[i] != '\0')
		{
			int start = i;

			while (str[i] != ' ' && str[i] != '\0')
			{
				i++;
			}

			int word_len = i - start;

			words[word_index] = (char*) malloc((word_len + 1) *sizeof(char));
			if (words[word_index] == NULL)
			{
				for (int j = 0; j < word_index; j++)
				{
					free(words[j]);
				}

				free(words);
				return;
			}

			strncpy(words[word_index], str + start, word_len);
			words[word_index][word_len] = '\0';

			word_index++;
		}
	}

	words[word_index] = NULL;
}

/**
 *word_counts - Locates the index marking the end of the
 *           first word contained within a string.
 *@str: The string to be searched.
 *
 *Return: The number of words.
 */
int word_counts(char *str)
{
	int i = 0, count = 0;
	int in_word = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			if (!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		else
		{
			in_word = 0;
		}

		i++;
	}

	return (count);
}

char **strtow(char *str)
{
	char **words;
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	int word_count = word_counts(str);

	words = malloc((word_count + 1) *sizeof(char*));

	if (words == NULL)
	{
		return (NULL);
	}

	extractWords(str, words);

	return (words);
}
