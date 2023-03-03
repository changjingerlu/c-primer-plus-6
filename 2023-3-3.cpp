#define _CRT_SECURE_NO_WARNINGS 1
第三题
#include<stdio.h>
int main()
{
	printf("\a\nstartled by the sudden sound, Sally shouted,\n");
  printf("\"By the Great Pumpkin, what was that!\"");
	return 0;
}
第四题
#include<stdio.h>
int main()
{
	double a ;
	
	printf("Enter a floating-point value: ");
	scanf_s("%lf", &a);//这里题目没看懂，还有%lf
	printf("fixed-point notation: %f\n", a);
	printf("exponential notation:%e\n", a);
	printf("p notation:%a", a);
	return 0;
}

第五题
我的答案： 需要输入中文才能运行成功，非常奇怪,现在懂了，原因是我在scanf_s函数里%d后面放了\n
原理：想象输入设备（键盘）连接着一个叫“缓冲”的东西，把缓冲认为是一个字符数组。
当你的程序执行到scanf时，会从你的缓冲区读东西，如果缓冲区是空的，就阻塞住，等待你从键盘输入。
 而scanf函数有一个特性就是忽略前导空白符（空白符：指空格符、制表符、回车符），所以当scanf_s(%d\n)时
在缓冲区内部是%d\n，scanf会读取%d再自动跳过\n，此时缓冲区是空的，并没遇到空白符，所以不会停止，进入阻塞阶段
 此时必须要从缓冲区读取东西，再回车，而如果是%c，就不会忽略前导空白符号，必须要把\n放在%c前面
#include<stdio.h>
int main()
{
	int  age;
	double second;
	printf("Enter your age:");
	scanf_s("%d\n", &age);
	second = age * (3.156e7);
	printf("%d year=%le second", age,second);
	return 0;
}

 参考答案：
#include <stdio.h>
#define SECONDS_PER_YEAR 3.156e7

int main(void)
{
    double age;

    printf("Please enter your age: ");
    scanf("%lf", &age);
    printf("%g years old includes %g seconds.\n", age, age * SECONDS_PER_YEAR);

    return 0;
}
第六题
 这题又可以，太奇怪了，现在不奇怪了
#include<stdio.h>
int main()
{
	int quart;
	long double  water ;
	printf("Please enter quart:");
	scanf_s("%d",&quart);
	water = quart * 950 / (3.0e-23);
	printf("%d quarts=%le of water molecules", quart, water);
	return 0;
}
printf中，% f通杀单精度和双精度
在scanf中，% f和% lf才有区别
#include <stdio.h>

int main(int argc, char const* argv[])
{
	char get;
	while (1) {
		scanf_s("\n%c", &get);
		printf("*%c*\n", get);
	}
	return 0;
}
第七题
#include<stdio.h>
int main()
{
	double inch, centimeter;
	printf("Please enter your height:");
	scanf_s("%lf", &inch);
	centimeter = 2.54 * inch;
	printf("Your height is %f", centimeter);
	return 0;
}
 
第八题
#include<stdio.h>
int main()
{ 
	int pint;
	int cup;
	int ounce;
	int Largespoon;
	int Teaspoon;
	scanf_s("%d", &pint);
	cup = 2 * pint;
	ounce = 8 * cup;
	Largespoon = 2 * ounce;
	Teaspoon = 3 * Largespoon;
	printf("%dpint=%dcup\n", pint, cup);
	printf("%dpint=%dounce\n", pint, ounce);
	printf("%dpint=%dLargespoon\n", pint, Largespoon);
	printf("%dpint=%dTeaspoon\n", pint, Teaspoon);
	return 0;
}


