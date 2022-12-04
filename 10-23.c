#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int a[10], i, j,t;
	printf("«Î ‰»Î ˝◊È:\n");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	printf("before:\n");
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j <9 - i; j++)
		{
			if (a[j] > a[j+ 1])
			{
				t = a[j+ 1];
				a[j + 1] = a[j];
				a[j] = t;

			}
		}
	}
	printf("aftetr:\n");

	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);


	return 0;
}