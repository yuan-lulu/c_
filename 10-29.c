#include<stdio.h>
int main()
{
	////��д��������һ���ַ�, ͳ�������ж��ٸ�����, ����֮���ÿո�ָ���
	//int i,count=0,f=1;//i am a stduent
	//char c;
	//	c=getchar();
	//while (c !='\n')
	//{
	//	if (c == ' ')
	//		f=1;//����ж���ո���һ���͸�������ȥ�ˣ���Ϊִ����if �Ͳ�����ִ��else if
	//	else if (f == 1)
	//	{
	//		count++;
	//		f = 0;
	//	}
	//		c = getchar();//���ⲻ��������Ҳ���ԣ�����Ϊgetchar������ǵ����ַ���
	//		                     //���԰�getchar����ѭ����
	//	
	//}
	//printf("%d", count);
	//��д��������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ���ַ��������ַ����ո��ַ��������ַ��ĸ�����
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
	printf(" ��ĸ�ĸ�����%d\n ���ֵĸ�����%d\n �ո�ĸ�����%d\n �����ĸ�����%d\n",letter, d, blank, other);
	*/
	//���ڲ��ң�����10��������������һ����x��
	//	����������x�Ƿ���ڣ�������ڣ������Ӧ����С�±꣬�������ڣ������no found
/*	int a[10], i, x;
	printf("������10������\n");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	printf("��������Ҫ���ҵ���:\n");
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
	//���ڲ��룺������������а������в���һ����      ��һ����Ҫ�ҵ���Ҫ������±�
	                                                                         //�ڶ����������±�����ÿһ��Ԫ��������λ��
	                                                                        //��x��ֵ��a[i]
//	int a[11], i, j, x;
//	printf("������10����:\n");
//	for(i=0;i<10;i++)
//	scanf_s("%d", &a[i]);
//	printf("������Ҫ���������:\n");   //1 2 3 4 5 7 8      x=6
//	scanf_s("%d", &x);
//printf("before:\n");
//	for (i = 0; i < 10; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	for(i=0;i<10;i++)
//		if (a[i] > x)//�ҵ�λ����
		//{
		//	for (j = 9; j >= i; j--)//�õڶ���for�����ƶ�λ��
		//		a[j + 1] = a[j];
		//		break;//break ��ʱûŪ���ף�break��if���棬��һ��for�����ֻ��ifһ����䣬���Ե��ڶ���
			//��������ִ��break�����Ե�һ��for������
	/*	}
	a[i] = x;
	printf("after:\n");
	for (i = 0; i < 11; i++)
		printf("%d ", a[i]);*/
	//����ɾ����
	/*int a[10], i, j,x;
	printf("����������:\n");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	printf("������Ҫɾ��������\n");
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
//�����������ð�ݷ�����
int a[10], i, j,t;
printf("����������:\n");
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