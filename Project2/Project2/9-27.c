#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <math.h>
int main()
{
	/*int a, b, c;
	for (a = 0; a < 2; a++);
	for (b = 0; b < 2; b++);
	for (c = 0; c < 2; c++);
	printf("%d%d%d",a,b,c);*/
	/*int x;
	scanf("%d",&x);
	if (x--<5)
	{
		printf("%d",x);
	}
	else
		printf("'%d",x++);*/
		/*int a, b, c, d, e;
			scanf_s("%d%d%d", &a,&b,&c);
			d = 100 * a + 10 * b + c;
			printf("%d\n", d);
			e = 100 * c + 10 * b + a;
			printf("%d", e);



		/*loat x, y, a;
		for (y = 1.5f; y > -1.5f; y -= 0.1f)
		{
			for (x = -1.5f; x < 1.5f; x += .05f)
			{
				a = x * x + y * y - 1;
		putchar(a * a * a - x * x * y * y * y <= 0.0f ? 'x' : '"
		);
			Sleep(100);
		putchar("\n");
	}
		getchar();*/
		/*	for (float y = 1.5f; y > -1.5f; y -= 0.1f) {
				for (float x = -1.5f; x < 1.5f; x += 0.05f) {
					float  a = x * x + y * y - 1;
					putchar(a * a * a - x * x * y * y * y < 0.0f ? '*' : ' ');
				}
				system("color 0c");
				putchar('\n');
			}
			printf("                                          ���¼��������ǰ�����Ȱ�\n\n\n\n");

			return 0;
		}*/
		//��������һ����Ҫ��������ĵ���
			/*int a, b, c, d;
			printf("������һ����λ��");//423

				scanf_s("%d", &a);
			b = a /100;
			c = (a % 100)/ 10;
			d = (a % 100) % 10;
			printf("%d", 100 * d + 10 * c + b);*/
			//�κ���ҵp81
			//��һ��
			/*float p, r;
			int n;
			n = 10;

			r = 0.07;
			p = pow((1 + r), 10);
			printf("������=%f", p);*/
			//�ڶ���
			//һ�δ�������
			/*int n1, m;
			n1= 5;
			m = 1000;
			float r1 = 0.03,P1;
			P1 = 1000 * (1 + 5 * 0.03);
			printf("һ�δ�����ı�Ϣ��=%f", P1);
			//�ȴ�2���ڣ����ں󽫱�Ϣ�ٴ�3��
			int n2 ,n3;
			n2 = 2, n3 = 3;
			float r2 = 0.021, r3 = 0.0275,P2;
			P2 = 1000 * (1 + 2 * 0.021);
			P2 = P2 + (1 + 3 * 0.0275);
			printf("�ȴ�2���ڣ����ں󽫱�Ϣ�ٴ�3��=%f", P2);*/
			//������
			//������ٸ��¿��Ի���
			/*float p = 6000, d = 300000;
			float r = 0.01, m;
				m = log10(p /( p - d * r))/ log10(1 + r);
				printf("��Լ��Ҫ=%.1lf", m
				//��1234������е�û���ظ����ֵ���λ��

/*int i, j, k;
	printf("\n");
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			for (k = 1; k < 5; k++)
			{
				if(i!=j&&j!=k&&k!=i)
				printf("%d%d%d\n", i ,j, k);

			}

		}
	}*/
	/*int i;
	i = 1;
	while (i < 11)
		printf("%d", i++);*/
		/*int i;
		*
		for (i = 1; i <= 10; i++)
		{

			printf("%d", i);
		}*/
		//����n�Ľ׳�
		/*scanf_s("%d", &n);
		for (i = 1; i <= n; i++)

		{
			S = i * S;
		}
			printf("%d ", S);
			*/
			//����1��+2!+3��.
int i=1,n=1,s=0,ret;
for (i = 1; i <3; i++)
{
	ret = 1;
	for (n = 1; n<= i; n++)
	{
		ret = ret*n;
		
}

	s = s + ret;
}
printf("%d", s);
			/*		printf("\n");
					for (j=1;j<=i;j++)
					{*/
			//			putcha/*int i, n, ret = 1, sum = 0;
			//for (n = 1; n < 11; n++)
			//{
			//	for (i = 1; i <= n; i++)
			//	{
			//		ret = ret * i;

			//	}
			//	sum = sum + ret;
			//}
			//	printf("%d", sum);*/
			//	/*int i, j;
			//	for (i = 1; i < 7; i++)
			//	{r('*');

				//	}

				//}*/
//���⣨�Լ�������)
/*	int i = 0;
	char c;
	while (1);
	{
		c = '\0';
		while (c != 13 && c != 27)
		{
			c = getch();
			printf("%c\n", c);

		}
		if (27 == c)

			break;
	
			i++;
			printf("The No.is%d\n", i);
		
	}
	printf("The end");

	*/
//�����100��200֮�䲻�ܱ�3��������
/*int i, r;
for (i = 100; i < 201; i++)
{
	r = i%3;

	if (0 == r)

		continue;

	else;
	printf("%d\n", i);
	
}
*/
//���ĳ���4=1-1/3+1/5�����Ĺ�ʽ����
//double PI=1,n,s,b;
//while (fabs(PI) < 1e-6)
//{
//	n =- 1.0;   s = 3.0;
//	s = s + 2;
//	n = -n;
//	b = n / s;
//	PI = PI+ b;
//
//}
//PI = PI * 4.0;
//printf("%10.6f", PI);
//��������
//int i, a[5] = { 3,4,5 }, b [5];
//printf("\n array a is :");
//for (i=0;i<5;i++)
//printf("%2d", a[i]);
//printf("\n array a is:");
//for (i=0;i<5;i++)
//printf("%2d", b[i]);
	return 0;
  
}