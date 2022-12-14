#include<stdio.h>
#include<string.h>
//int main()
//20元买饮料
	/*int i = 0, empty=0,total=0;
	for (i = 1; i <= 20; i++)
	{
		total++;
		empty++;
		if (empty % 2 == 0)
		{
			empty = empty / 2;
			total++;
		}
		
	}
	printf("%d", total);
	*/
	//打印菱形
	/*int i, j;
	for (i = 1; i <= 7; i++)
	{
		for (j = 0; j < 7-i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i - 1; j++)
		{
			printf("*");
		}

		for (j = 0; j < 7 - i; j++)
		{
			printf(" ");
		}
		putchar('\n');
	}
	for (i = 1; i <= 6; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
	}
		for (j = 0; j < 13 - 2 * i; j++)
		{
			printf("*");
		}
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		putchar('\n');
	}*/
//	void reverse_ch(char ch[],int sz)
//	{
//		int i,t;
//		while (ch != '\0')
//		{
//			if (sz % 2 == 0)
//			{
//				for (i = 0; i < sz / 2; i++)
//				{
//					t = ch[i];
//					ch[i] = ch[sz - 1];
//					ch[sz - 1] = t;
//				}
//				break;
//			}
//			
//	  	    if(sz%2!=0)
//			{
//				for (i = 0; i < (sz - 1) / 2; i++)
//				{
//					t = ch[i];
//					ch[i] = ch[sz-i - 1];
//					ch[sz -i- 1] = t;
//				}
//			}
//			break;
//		
//		}
//
//	}
//	int main()
//	{
//	//写一个函数，可以逆序一个字符串的内容。
//	char ch[10];
//	int sz;
//	gets(ch);
//	sz = strlen(ch);
//	reverse_ch(ch,sz);
//	puts(ch);
//	return 0;
//}
//用指针的方法解决本题
//void reverse_ch(char* ch[], int sz)
//{
//	char t;
//	char* left = ch;
//	char* right = ch+ sz - 1;
//
//	while (left<right)
//	{
//		t = *left;
//		*left= *right;
//		*right = t;
//			left++;
//			right--;
//	}
//
//
//}
//
//int main()
//{
//	char ch[10];
//	gets(ch);
//	int sz = strlen(ch);
//	reverse_ch(ch, sz);
//	puts(ch);
//	return 0;
//}