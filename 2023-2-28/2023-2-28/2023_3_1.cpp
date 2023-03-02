#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void test()
{
	int i = 0;
	i++;
	printf("%d", i);
}

int main()
{
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		test();
	}
	return 0;
}
#include<stdio.h>
void test()
{
	static int i = 0;
	i++;
	printf("%d", i);
}

int main()
{
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		test();
	}
	return 0;
}static修饰局部变量的意义
 
#define MAX 1000
#define ADD(x, y)((x)+(y))
#include<stdio.h>

int main()
{
	int sum = 0;
	sum = ADD(2, 3);
	printf("sum=%d\n", sum);

	sum = 10 * ADD(2, 3);
	printf("sum=%d\n", sum);

	return 0;
}#define定义常量和宏

