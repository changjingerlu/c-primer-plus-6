#define _CRT_SECURE_NO_WARNINGS 1
第四章复习题
第六题
#include <stdio.h>
#define FORMAT "%s! C is cool!\n"
int main(void)
{
	int num = 10;

	printf(FORMAT, FORMAT);
	printf("%d\n", ++num);
	printf("%d\n", num++);
	printf("%d\n", num--);
	printf("%d\n", num);

	return 0;
}
第七题
#include <stdio.h>
int main(void)
{
	char c1, c2;
	int diff;
	float num;

	c1 = 'S';
	c2 = 'O';
	diff = c1 - c2;
	num = diff;
	printf("%c%c%c: %d %3.2f \n", c1, c2, c1, diff, num);

	return 0;
}
第八题
#include <stdio.h>
#define TEN 10
int main(void)
{
	int n = 0;

	while (n++ < TEN)
		printf("%5d", n);
	printf("\n");

	return 0;
}
第九题
#include<stdio.h>
#define ONE_HUNDRED_AND_FOUR 104

int main()
{
	int n = 96;
	while (n++ < ONE_HUNDRED_AND_FOUR)
	 printf("%5c", n);
	printf("\n");

	return 0;
}
#include<stdio.h>
int main()
{
	int x = 0;

	while (x++ < 3)
		printf("%4d", x);

	int y = 100;
	while (y++ < 103)
		printf("%4d\n", y);
	printf("%4d\n",y);

	char ch = 's';

	while (ch < 'w')
	{
		printf("%c", ch);
		ch++;
	}
	printf("%c\n", ch);
	return 0;
}
第11题
#define MESG "COMPUTER BYTES DOG"
#include<stdio.h>
int main()
{
	int n = 0;

	while (n < 5)
	{
		printf("%s\n", MESG);
		n++;
	}
	printf("That's all.\n");

	return 0;
}
编程练习
第一题
#include<stdio.h>
#define CONVERSION 60

int main()
{
	int time;
	int hour;
	int minutes;
	printf("Enter any time of minute(<0 to quit):");
	scanf_s("%d", &time);
	while (time >0)
	{
		hour = time / CONVERSION;
		minutes = time % CONVERSION;
		printf("minute = %d hour and %d minutes\n", hour, minutes);
		scanf_s("%d", &time);
	}
	
	return 0;
}
第二题
#include<stdio.h>
int main()
{
	int n, a;
	printf("Please enter intege:");
	scanf_s("%d", &n);
	a = n + 10;

	while (n <= a)
	{
		printf("%d\n", n);
		n++;
	}

	return 0;
}
第三题
#include<stdio.h>
int main()
{
	int day;
	const int conversion = 7;
	int weeks;
	int days;
	printf("Please enter the number of days(<=0 to quit):");
	scanf_s("%d", &day);
	while (day > 0)
	{
		weeks = day / conversion;
		days = day % conversion;
		printf("%d days are %d weeks,% days.\n", day, weeks, days);
		printf("Please enter again:");
		scanf_s("%d", &day);
	}
	printf("Thank you!");
	return 0;
}
第四题
#include<stdio.h>
#define CM_PER_INCH 0.39370079
#define CM_PER_FOOT 0.0328084
int main()
{
	float c;
	int f;
	float i;
	printf("Enter a height in centimeters:");
	scanf_s("%f", &c);
	while (c > 0)
	{
		i = c * CM_PER_INCH;
		f = c * CM_PER_FOOT;
		printf("%.1f cm =%d feet, %.1f inches\n", c, f, i);
		printf("Enter a height in centimeters(<=0 to quit):");
		scanf_s("%f", &c);
	}
	return 0;
}
第五题
#include<stdio.h>
int main()
{
	int count, sum, money;

	count = 0;
	sum = 0;
	printf("Please enter how much money you make today:");
	scanf_s("%d", &money);
	while (++count < 20)
	{
		printf("You made $%d in day%d\n", money, count);
		sum = sum + money;
		printf("Please enter how much money you make today:");
		scanf_s("%d", &money);
	}
  printf("You made $%d in day%d\n", money, count);
	printf("You made $%d in 20 days\n", sum);
	
	return 0;
}
第六题
#include<stdio.h>
int main()
{
	int count, sum, money;
	
	count = 0;
	sum = 0;
	printf("Please enter how much money you make today:");
	scanf_s("%d", &money);
	while (++count < 20)
	{
		money = money * money;
		printf("You made $%d in day%d\n", money, count);
		sum = sum + money;
		printf("Please enter how much money you make today:");
		scanf_s("%d", &money);
	}
	printf("You made $%d in day%d\n", money, count);
	printf("You made $%d in 20 days\n", sum);
		
	return 0;
}
第七题
#include<stdio.h>
void cube(double x)
{
	x = x * x * x;
	printf("%f", x);
}
int main()
{
	double x;
	printf("Please enter a number of type double:");
	scanf_s("%lf", &x);
	cube(x);
	return 0;
}
第八题
#include<stdio.h>
int main()
{
	int a=0;
	int b,c;

	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand:");
	scanf_s("%d", &a);

	printf("Now enter the first operand:");
	scanf_s("%d", &b);

	while (b > 0)
	{
		c = b % a;
		printf("%d %% %d is %d\n", b, a, c);
		printf("Enter next number for first operand(<=0 to quit):");
		scanf_s("%d", &b);
	}

	printf("Done");
	return 0;
}
第九题
#include<stdio.h>
void Temperatures(double x)
{
	double Celsius;
	double Kelvin;
	const double F_PER_C1 = 5.0 / 9.0;
	const double F_PER_C2 = 32.0;
	const double C_PER_K = 273.16;

	Celsius = F_PER_C1 * (x - F_PER_C2);
	Kelvin = Celsius + C_PER_K;
	printf("%.2f°F=%.2f°C=%.2fK\n",x,Celsius,Kelvin);
}
int main()
{
	double t;
	int a;
	printf("Please enter a Fahrenheit temperature:");
	a = scanf_s("%lf", &t);

	while (a)
	{
		Temperatures(t);
		printf("Please enter Fahrenheit temperature again(q to quit):");
		scanf_s("%lf", &t);
	}

	return 0;
}