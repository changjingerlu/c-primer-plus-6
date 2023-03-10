#define _CRT_SECURE_NO_WARNINGS 1
第9题
#include<stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	printf("%d\n", a);
	float b, c;
	scanf_s("%f %e", &b, &c);
	printf("%.2f %.2e\n", b, c);
	char name[20];
	scanf_s("%s", &name,sizeof(name));
	printf("%s\n", name);
	char name1[20];
	int name2;
	scanf_s("%s %d", name1, sizeof(name1) ,&name2);
	printf("%s %d\n", name1,name2);
	char name3[20];
	int name4;
	scanf_s("%*s %d", &name4);
	printf("%s %d\n", name3,name4);
	return 0;
}
编程练习
 
 
 第一题
#include<stdio.h>
int main()
{
	char name[40];
	char surname[40];

	printf("Please enter your name and surname:");
	scanf_s("%s %s", name, sizeof(name),surname,sizeof(surname));
	printf("%s,%s",name,surname);

	return 0;
}
 
 
第二题
#include<stdio.h>
#include<string.h>
int main()
{
	char name[40];
	printf("Please enter your name:");
	scanf_s("%s", name,sizeof(name));
	//a
	printf("\"%s\"\n", name);
	//b
	printf("\"%20s\"\n", name);
	//c
	printf("\"%-20s\"\n", name);
	//d,不会
	int a;
	a = strlen(name) + 3;
	printf("%*s",a,name);
	return 0;
}
 
 
第三题
#include<stdio.h>
int main()
{
	float a;
	a = 21.29;
	printf("The input is %.1f or %.1e.\n", a,a);
	printf("The input is %+.3f or %.3e.", a,a);
	return 0;
}
 
 
 第四题 （1）
#include<stdio.h>
int main()
{
	char name[40];
	float inch;
	printf("Please enter your height and name.");
	scanf_s("%s %f", name, sizeof(name), &inch);
	printf("%s, you are %.3f feet tall", name, inch);
	return 0;
}
（2）
#include<stdio.h>
int main()
{
	char name[40];
	int centimeter;
	float meterinteger;
	int metersdecimal;
	printf("Please enter your height and name.\n");
	scanf_s("%s %d", name, sizeof(name), &centimeter);
	meterinteger = centimeter / 100;
	metersdecimal = centimeter % 100;
	printf("%s, you are %.0f.%d meter tall", name, meterinteger, metersdecimal);
	return 0;
}
 目前还不知道/100和/100.0的差别，应该是这里meter用了float所以我要用100.0来除而不是100
#include<stdio.h>
int main()
{
	char name[40];
	int centimeter;
	float meter;
	printf("Please enter your name and height.\n");
	scanf_s("%s %d", name, sizeof(name), &centimeter);
	meter = centimeter / 100.0;
	printf("%s, you are %.2f meter tall", name, meter);
	return 0;
}
 
 
第五题
#include<stdio.h>
int main()
{
	float Dspeed;
	float Fsize;
	float Time;
	printf("Please enter Download speed and File size.\n");
	scanf_s("%f %f", &Dspeed, &Fsize);
	Time = Fsize / Dspeed;
	printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds.",Dspeed,Fsize,Time);
	return 0;
}
 
 
第六题
#include<stdio.h>
#include<string.h>
int main()
{
	char name[40];
	char surname[40];
	printf("Please enter your name:");
	scanf_s("%s", name, sizeof(name));
	printf("Please enter your surname:");
	scanf_s("%s", surname, sizeof(surname));
	printf("%s %s\n%*d %*d\n", name, surname, strlen(name), strlen(name), strlen(surname), strlen(surname));
	printf("%s %s\n%-*d %-*d\n", name, surname, strlen(name), strlen(name), strlen(surname), strlen(surname));
	return 0;
}
 
第七题
 我的答案：
#include<stdio.h>
#include<float.h>
int main()
{
	float a = 1.0 / 3.0;
	double b = 1.0 / 3.0;
	printf("a:%.6f\n  %.12f\n  %.16f\n", a,a,a);
	printf("b:%.6lf\n  %.12lf\n  %.16lf", b, b, b);
	return 0;
}
 参考答案：
#include <stdio.h>
#include <float.h>
int main(void)
{
    float f_value = 1.0 / 3.0;
    double d_value = 1.0 / 3.0;

    printf("1.0 / 3.0 display 6 decimal places：\n");
    printf("f_value = %.6f\nd_value = %.6lf\n", f_value, d_value);
    printf("\n1.0 / 3.0 display 12 decimal places：\n");
    printf("f_value = %.12f\nd_value = %.12lf\n", f_value, d_value);
    printf("\n1.0 / 3.0 display 16 decimal places：\n");
    printf("f_value = %.16f\nd_value = %.16lf\n", f_value, d_value);
    printf("\nfloat and double maximum precious digits:\n");
    printf("FLT_DIG = %d, DBL_DIG = %d\n", FLT_DIG, DBL_DIG);
    //4.8-7书上问答：不一致，因为float精确度是6位，而double是15位，所以在超过精确度位数后会有差异 

    return 0;
}
第八题
#include<stdio.h>
#define Conversionfactor 1.607/3.785
int main()
{
	float mileage, consumed,a,b;
	printf("Please enter the mileage traveled and the amount of gas consumed:");
	scanf_s("%f %f",&mileage, &consumed);
	a = mileage / consumed;
	printf("Consume %.1f miles per gallon of gasoline.\n", a);
	b = Conversionfactor * a;
	printf("Consume %.1f km per liter of gasoline", b);
	return 0;
}
参考答案：
#include <stdio.h>
#define GALLON_TO_LITRE 3.785
#define MILE_TO_KM 1.609

int main(void)
{
    double range, oil;

    printf("Please input the range you traveled(in mile): ");
    scanf("%lf", &range);
    printf("Please input the oil you spend(in gallon): ");
    scanf("%lf", &oil);

    printf("Fuel consumptions:\n");
    printf("In USA, your oil wear is %.1f mile / gallon.\n", range / oil);
    printf("In Europe, your oil wear is ");
    printf("%.1f litre / 100km.\n", 100.0 * (oil * GALLON_TO_LITRE) / (range * MILE_TO_KM));

    return 0;
}
