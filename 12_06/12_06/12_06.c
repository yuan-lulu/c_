#include<stdio.h>
//void MY_strcpy(char* arr1, char* arr2)//第一种
//{
//	while (*arr2!='\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;
//}

//void MY_strcpy(char* arr1, char* arr2)//第二种
//{
//	while (*arr2 != '\0')
//	{
//		*arr1 ++= *arr2++;
//		
//	}
//	*arr1 = *arr2;
//}

//void MY_strcpy(char* arr1, char* arr2)
//{
//	if (arr1 != NULL && arr2 != NULL)
//	{
//		while (*arr1++ = *arr2++)
//		{
//			;
//		}
//	}
//
//}
//#include<assert.h>
//void MY_strcpy(char* arr1, char* arr2)
//{
//	assert(arr1!= NULL);
//	assert(arr2 != NULL);
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}
#include<assert.h>
char* MY_strcpy(char* arr1, const char* arr2)
{
	char* ret = arr1;
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	while (*arr1++ = *arr2++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[] = "hello world";
	char arr2[] ="hello";
	MY_strcpy(arr1, arr2);
	printf("%s\n", MY_strcpy(arr1, arr2));
	return 0;
}