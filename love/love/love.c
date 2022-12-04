#include<stdio.h>
int main()
{
	char ch;
	int c=0 ,f=1;¡¢¡¢
	ch = getchar();
	while (ch != '\n')
	{
		if (ch==' ')
		f = 1;
		else if (f == 1)
		{
			c++;
			f = 0;
			
		}
		ch = getchar();
	}
	printf("%d\n", c);
	return 0;
}