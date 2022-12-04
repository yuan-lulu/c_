#include<stdio.h>
#include<math.h>
int fum(int n)
{
	int s=0;
	while (n != 0)
	{
		s= 2 * pow(10, (n - 1))+s ;
	n--;
}
		return s;
}
int main()
{
	int n,sum=0,i;
	printf("ÇëÊäÈënµÄÖµ£º\n");
	scanf_s("%d", &n);
	for(i=n;i>0;i--)
	sum = sum+fum(i);
	printf("%d", sum);
	return 0;
}