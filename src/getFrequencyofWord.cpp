/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int myCompare(char *str1, char *str2)
{
	while (*str1&&*str2)
	{
		if (*str1 != *str2)
			return 0;
		str1++;
		str2++;
	}
	if (!(*str2))
		return 1;
	else
		return 0;
}

int count_word_in_str_way_1(char *str, char *word)
{
	int result = 0;
	while (*str)
	{
		if (myCompare(str, word))
			result++;
		str++;
	}
	return result;
}

int count_word_int_str_way_2_recursion(char *str, char *word)
{
	return 0;
}

