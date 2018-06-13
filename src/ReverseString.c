#include "ReverseString.h"
#include <stdio.h>
#include <string.h>

int getStringLength(char *str)
{
	int i = 0;
	int lenNUM = 1;
	char temp[256];
	if ((str == '\0') || (str == NULL))
	{
		return 0;
	}
	else
	{
		strcpy(temp, str);
		while (i < lenNUM)
		{
		
			if ((temp[i]) != '\0')
			{
				lenNUM++;
				i++;
			}
			else 
			{
				i = 0;
				return --lenNUM;
			}
		}
	}
}
/*
char trygetStringLength(char *str)
{
	char result;
	str[1] = result;
	return result;
}
*/

char* tryPiontSomething(char *str)
{
	char *ptr = str;
	
	return ptr;
}