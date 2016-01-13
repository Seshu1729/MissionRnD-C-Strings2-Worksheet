/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

void swap(char *variable1, char *variable2)
{
	char temparary;
	temparary = *variable1;
	*variable1 = *variable2;
	*variable2 = temparary;
}

void stringReverse(char input[], int length)
{
	int start = 0, end = length - 1;
	while (start<end)
		swap(&input[start++], &input[end--]);
}

int length(char input[])
{
	int length = -1;
	while (input[++length] != '\0');
	return length;
}

char * get_last_word(char * str)
{
	char *res;
	int ind1 = length(str) - 1, ind2 = 0;
	res = (char *)malloc(0);
	while (str[ind1] == ' '&&ind1 != -1)
		ind1--;
	while (str[ind1] != ' '&&ind1 != -1)
	{
		ind2++;
		res = (char *)realloc(res, ind2);
		res[ind2 - 1] = str[ind1];
		ind1--;
	}
	res[ind2] = '\0';
	stringReverse(res, ind2);
	return res;
}
