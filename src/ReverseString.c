#include "ReverseString.h"
#include <stdio.h>

int getStringLength(char *str)
{
	///*
	int i = 0;
	int lenNUM = 1;
	//char *strptr = str;
	while (i < lenNUM){
		
		if ((str[i]) != '\n')
		{
			lenNUM++;
			i++;
		}
		else {
			return --lenNUM;
			
		}
	}
	//*/
	//return 011122;
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