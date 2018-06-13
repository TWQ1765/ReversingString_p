#include "ReverseString.h"
#include <stdio.h>
#include <string.h>
/*Challenge: 
*	1.)	testing input with NULL is a problem:
*		a.) 	use if else statement to filter it. 
*	2.) Find the end of the string:
*		a.) 	compare with '\0'.
*		b.)		compare with '\n'.
*	3.)	Pointer problem:
*		a.)		key word: str++		
*/
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

/*functing required:
*	1.)		int getStringLength(char *str);
*/
char *ReverseString(char* str){
	
	int stringLen = getStringLength(str);
	 char temp[256];
	char *readString = str;
	 char *reverse = temp;
	for (int i=0 ; i < stringLen ; i++)
	{
		temp[(stringLen - i)-1] = readString[i];
	}
	return reverse;
}


/*just trying something
char trygetStringLength(char *str)
{
	char result;
	str[1] = result;
	return result;
}


char* tryPiontSomething(char *str)
{
	char *ptr = str;
	
	return ptr;
}
*/