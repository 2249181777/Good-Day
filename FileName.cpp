#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
//int main()
//{
//	printf("%d\n", sizeof(int));/*�ֽ�   һ���ֽڵ��ڰ˸�����   bit-����λ byte-�ֽ�  kb mb gb tb pb */
//	printf("%d\n", sizeof(short));/*����������Ƕ�����  1byte=8bit*/
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}
//int main()
//{
//	int age=20;
//	double price = 66.6;
//	printf("%f",price);
//	return 0;
//int b = 20;/*ȫ�ֱ���*/
//int main()
//{
//	//short age = 20;
//	//int highth = 180;
//	//float weight = 205.5;
//	int a = 10;/*�ֲ�����*/
////	return 0;
//// }
//int a = 100;
//
//int main()
//{
//	int a = 123342342;
//	printf("%d\n", a);
//	return 0;
////}
//int main()
//{
//	int a = 12;
//	int b = 9;//��ʼ��
//	scanf("%d %d", &a, &b);
//	int sum = a + b;
//	printf("%d\n", sum);
//	return 0;
////}
//int a = 10, b = 20;
//void tess (int bin, int k)
//{
//	int te;
//	te = bin;
//	bin = k;
//	k = te;
//}
//int main()//���������������������
//{
//	tess(a, b);
//	printf("%d   %d\n", a, b);
//}

//void swap(int var1, int var2)
//{
//	int temp;
//	temp = var1;
//	var1 = var2;
//	var2 = temp;
//	printf("%d %d %d\n", temp,var1,var2);
//}
//int main()
//{
//	int num1 = 5,num2 = 10;
//	printf("Before sawp :%d  %d\n", num1, num2);
//	swap(num1, num2);
//	printf("After sawp :%d  %d\n", num1, num2);
//	return 0;
//}
//extern int a;
//void test()
//{
//	printf("test===%d\n", a);
//}
//int main()
////{
////	test(); {
////
////
////		printf("a=%d\n", a);
////	}
////	printf("a==%d\n", a);
//	return 0;
//}

//int main()
//{
//
//		char a[] = "abcde     fg";
//		char b[] = { 'a','b','c','d','e','f' ,'    ', 'g' ,'\0'};//��ȥ��\0)��7�ᶪʧ\0   \0��ת���ַ�,,,,,�ո�����
//	printf("%s\n",a);
//	printf("%s\n",b );
//	printf(" % d\n", 0);
//	return 0;
//}
	//	char a[] = "abcde     fg";
	//	char b[42] = { 'a','b','c','d','e','f' ,'g'};//��ȥ��\0)��7�ᶪʧ\0   \0��ת���ַ�
	//printf("%s\n",a);
	//printf("%s\n",b );
	//printf(" % d\n", 0);
	//return 0;
////}
//	   char a[] = "abcde     fg";
//	   char b[] = { 'a','b','c','d','e','f' , 'g' ,'\0' };//��ȥ��\0)��7�ᶪʧ\0   \0��ת���ַ�
//	printf("%s\n", a);
//	printf("%s\n", b);
//	printf(" % d\n", 0);
//	return 0;
//}


//��ת���ַ���

//int main()
//{
//	printf("asada\n\n\n");
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d\0 1314",a);
//	return 0;
//}
//int main()
//{
//	printf"\\%d",0);
//	return 0;
//}
//int main()
//{
//	//printf("%c%d\n", '\\',0);
//	//printf("312312\\\\SADASASD");
//	//printf("\a\a\a\a\a\a\a\a");//����
//	printf("a\tssadas\vk		d	j\n");
//	printf("\1307\54\60\n ");
//	printf("          \x000000000030");
//	return 0;
//}
//int main()
//{
//	int input ;
//	char b[3];
//	printf("����MHW\n");
//	printf("Ҫ��̫����");
//	scanf("%s", &b);
//	if (strcmp(b,"��")==0)
//	{
//		input = 1;
//
//	}
//	else
//	{
//		input = 0;
//	}
//	if (input == 1)
//	{
//		printf("��ͷ\n");
//	}
//	else
//	{
//		printf("�ã�\n");
//	}
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("��̫��\n");
//	while(line<=1000000)
//	{
//		printf("����������:%d\n", line);
//		line=line+1;
//	}
//	if (line >= 10000)
//	{
//		printf("ldx");
//	}
//	else
//	{
//		printf("xdx");
//	}
//
//
//	return 0;
//}
//void sum(int a, int b)
//{ 
//	int c = a + b;
//}
//int main()
//{
//	int a, b,c;
//	scanf("%d%d", &a, &b);
//	sum(a, b);
//	printf(c);
//	return 0;
//
//}
//int add(int x, int y)
//{
//	int z;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int x1;
//	int x2;
//	scanf("%d%d", &x1, &x2);
//	int sum = add(x1, x2);
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//int a[10] = { 1,2,3,4,5,6,7,8,9 };
//int i = 0;
//while (i < 10)
//{
//	printf("%d", a[i]);
//	i++;
//}
//return 0;
//}
//int main()
//{
//	int a = 0, b = 0;
//	printf("�������ȴ�С\n");
//	printf("������������:\n");
//	scanf("%d%d", &a,&b );
//	if (a > b)
//	{
//		printf("�������ǣ�%d\n", a);
//	}
//	else
//	{
//		printf("�������ǣ�%d\n", b);
//
//	}
//	return 0;
//}
//int MAX(int a1, int b2)
//{
//	if (a1 > b2)
//		return a1;
//	else
//		return b2;
//}
//int main()
//{
//	int a = 0, b = 0;
//
//	printf("��������������\n");
//
//	scanf("����ˮ����%d%d", &a, &b);
//	int r = MAX(a, b);
//	printf("���ֵΪ%d", r);
//	return 0;
////}
//void turn(int x)
//{
//	if (x < 0)
//		printf("%d", 1);
//	else if (x == 0)
//		printf("%d", 0);
//	else
//		printf("%d" ,-1);
//}
//int main()
//
//{
//	int x1;
//	printf("������һ������");
//	scanf("%d", &x1);
//	turn(x1);
//		return 0; 
//}
//
//int main()
//{
//	int a = 10;
//	float b = 4,c = a / b;
//	printf("%.1f", c);
//	return 0;
//}
/*int main()
{
	int a[10] = {1,2,3,4,5,6,7  },x=0;
	a[0] = 6;
	while (x <= 6)
	{
		printf("%d", a[x]);
		x++;
	}
	return 0;

}*/

//int main()
//{
//	typedef int i;
//	i a = 12;
//	printf("%d", a);
//	return 0;
//}
//
//void test()
//{
//	static int a = 0;    /*staticӰ���˱������������ڣ����������ڱ䳤�ˣ��������򣬰ѱ�����ջ���ĵ��˾�̬��*/
//	a++;
//	printf("%d ", a);     static���ξֲ�����
//}
//int main()
//{
//	int b = 0;
//	while (b <= 20090)
//	{
//		test();
//		b++;
//	}
//	return 0;
//}


//int main()
//{
//	int b = 0;
//	int a = 0;
//	while (b <= 9)
//	{
//		b++;
//		a++;
//		printf("%d  ", a);
//	}
//	return 0;
//}

////extern int good;
////int main()
////{
////	printf("%d", good);
////	return 0;
////}

//extern int Add(int b, int c);
//int main()
//{
//	int x1,x2,x3;
//	scanf("%d%d", &x1, &x2);
//	x3=Add(x1, x2);
//	printf("%d", x3);
//	return 0;
//}

//#define numq 100
//int main()
//{
//	printf("%d\n", numq);
//	int b = numq;
//	printf("%d\n", b);
//	int arr[numq] = { 0 };
//
//	return 0;
//}

//int main()
//{
//	int x = 1;
//	float y = 1;
//	while (x <= 32)
//	{
//		y = y * 2;
//		x++;
//	}
//	printf("%.0f\n", y);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	return 0;
//}
//int main()
//{
//	printf("%zu\n", sizeof(char*));
//	return 0;
//}

//int main()
//{
//	int x = 3, y = 3, z = 1;
//	printf("%d,%d,%d", (++x, y++), z+x + y  + 2);
//	return 0;
//}

//typedef struct weapontype sw;
//struct weapontype
//{
//	char a[5];
//	char b[5];
//	char c[5];
//	char d[5];
//	char e[5];
//
//};
//void print(sw* s)
//{
//	printf("%s,%s,%s,%s,%s", s->a, s->c, s->a, s->b, s->d);
//}
//int main()
//{
//	sw MHW = { "̫��","���","��","˫��" };
//	/*printf("%s,%s,%s,%s", MHW.a, MHW.b, MHW.c, MHW.d);*/
//	print(&MHW);
//	return 0;
//}

//B 
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d %d",a/b,a%b);
//	return 0;
//}
//int main()
//{
//	int age;
//	printf("������������䣺");
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("δ����");
//	}
//	else if (age >= 18 && age <= 28)
//	{
//		printf("����");
//	}
//	return 0;
//}
//int main()
//{
//	int a, b;
//	scanf("%d", &a);
//	if (0 == a % 2)
//	{
//		printf("�����������ż��");
//	}
//	else
//		printf("���������������");
//	return 0;
//}

//int main()
//{
//	int a=1;
//	while (a <= 100)
//	{
//		if (1 == a % 2)
//		{
//			printf("%d ", a);
//		}
//		a++;
//	}
//	return 0;
//}

int main()
{
	int a, b, c=1, d, e,g;
	printf("������һ����������λ��������\n");
	scanf("%d", &a);
	if (a <= 100000)
	{
		b = a;
		e = a;
		while (a != 0)
		{
			a = a / 10;
			if (0 == a)
			{
				printf("����%dλ��\n", c);
			}
			else if (0 != a)
				c++;
		}
		double f = pow(10, c-1);
		while (c!=0)
		{
			g=e / f;
			e = e - (g * f);
			printf("%d", g);
			f = f / 10;
			c--;
	
		}
		while (b != 0)
		{
			d = b % 10;
			b = b / 10;
			printf("%d", d);
		}
	}

	else
		printf("�������ֵ����");
	return 0;
}