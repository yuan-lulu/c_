#include<stdio.h>
int main()
{
	////编写程序，输入一行字符, 统计其中有多少个单词, 单词之间用空格分隔。
	//int i,count=0,f=1;//i am a stduent
	//char c;
	//	c=getchar();
	//while (c !='\n')
	//{
	//	if (c == ' ')
	//		f=1;//如果有多个空格，这一步就给他跳过去了，因为执行了if 就不会再执行else if
	//	else if (f == 1)
	//	{
	//		count++;
	//		f = 0;
	//	}
	//		c = getchar();//这题不利用数组也可以，但因为getchar输入的是单个字符，
	//		                     //所以把getchar放在循环里
	//	
	//}
	//printf("%d", count);
	//编写程序，输入一行字符，分别统计出其中英文字符、数字字符、空格字符及其他字符的个数。
	/*int i, letter = 0, d = 0, blank = 0, other = 0;
	char c;
	c = getchar();
	while (c != '\n')
	{
		if (c > 'A' && c < 'Z' || c>'a' && c < 'z')
			letter++;
		else if (c >= '0' && c <= '9')
			d++;*/
		/*else if (c == ' ')
			blank++;
		else
			other++;
		c = getchar();
	}
	printf(" 字母的个数：%d\n 数字的个数：%d\n 空格的个数：%d\n 其他的个数：%d\n",letter, d, blank, other);
	*/
	//关于查找：输入10个整数，再输入一个数x，
	//	在数组中找x是否存在，如果存在，输出相应的最小下标，若不存在，输出”no found
/*	int a[10], i, x;
	printf("请输入10个数：\n");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	printf("请输入需要查找的数:\n");
	scanf_s("%d", &x);
	for (i = 0; i < 10; i++)
	{
		if (a[i] == x)
		{
			printf("%d", i);
			break;
		}
	}
	if (i == 10*//*)*/
		/*printf("no found");*/
	//关于插入：在有序的数组中按照排列插入一个数      第一步：要找到需要插入的下标
	                                                                         //第二步：将该下标后面的每一个元素往后移位置
	                                                                        //将x赋值给a[i]
//	int a[11], i, j, x;
//	printf("请输入10个数:\n");
//	for(i=0;i<10;i++)
//	scanf_s("%d", &a[i]);
//	printf("请输入要插入的数字:\n");   //1 2 3 4 5 7 8      x=6
//	scanf_s("%d", &x);
//printf("before:\n");
//	for (i = 0; i < 10; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	for(i=0;i<10;i++)
//		if (a[i] > x)//找到位置了
		//{
		//	for (j = 9; j >= i; j--)//用第二个for倒叙移动位置
		//		a[j + 1] = a[j];
		//		break;//break 当时没弄明白：break在if里面，第一个for语句中只有if一条语句，所以当第二个
			//语句结束，执行break，所以第一个for被结束
	/*	}
	a[i] = x;
	printf("after:\n");
	for (i = 0; i < 11; i++)
		printf("%d ", a[i]);*/
	//关于删除：
	/*int a[10], i, j,x;
	printf("请输入数组:\n");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	printf("请输入要删除的数字\n");
	scanf_s("%d", &x);
	printf("before:\n");
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	for(i=i;i<10;i++)
		if (a[i] == x)
		{*/
			/*for (j = i; j <= 10 - i; j++)
				a[j] = a[j + 1];
			break;
		}
	printf("after:\n");
	for (i = 0; i < 9; i++)
		printf("%d ", a[i]);*/
//对无序数组的冒泡法排列
int a[10], i, j,t;
printf("请输入数组:\n");
for (i = 0; i < 10; i++)
	scanf_s("%d", &a[i]);
printf("before:\n");
for (i = 0; i < 10; i++)
	printf("%d  ", a[i]);
printf("\n");
for (i = 0; i <= 9; i++)
{
	for (j = 0; j < 10 - i; j++)
	{
		if (a[j] > a[j + 1])
		{
			t = a[j + 1];
			a[j + 1] = a[i];
			a[i] = t;

		}
	}
}
	printf("after:\n");
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);

	return 0;
}