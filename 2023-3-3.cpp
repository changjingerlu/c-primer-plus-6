#define _CRT_SECURE_NO_WARNINGS 1
������
#include<stdio.h>
int main()
{
	printf("\a\nstartled by the sudden sound, Sally shouted,\n");
  printf("\"By the Great Pumpkin, what was that!\"");
	return 0;
}
������
#include<stdio.h>
int main()
{
	double a ;
	
	printf("Enter a floating-point value: ");
	scanf_s("%lf", &a);//������Ŀû����������%lf
	printf("fixed-point notation: %f\n", a);
	printf("exponential notation:%e\n", a);
	printf("p notation:%a", a);
	return 0;
}

������
�ҵĴ𰸣� ��Ҫ�������Ĳ������гɹ����ǳ����,���ڶ��ˣ�ԭ��������scanf_s������%d�������\n
ԭ�����������豸�����̣�������һ���С����塱�Ķ������ѻ�����Ϊ��һ���ַ����顣
����ĳ���ִ�е�scanfʱ�������Ļ�����������������������ǿյģ�������ס���ȴ���Ӽ������롣
 ��scanf������һ�����Ծ��Ǻ���ǰ���հ׷����հ׷���ָ�ո�����Ʊ�����س����������Ե�scanf_s(%d\n)ʱ
�ڻ������ڲ���%d\n��scanf���ȡ%d���Զ�����\n����ʱ�������ǿյģ���û�����հ׷������Բ���ֹͣ�����������׶�
 ��ʱ����Ҫ�ӻ�������ȡ�������ٻس����������%c���Ͳ������ǰ���հ׷��ţ�����Ҫ��\n����%cǰ��
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

 �ο��𰸣�
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
������
 �����ֿ��ԣ�̫����ˣ����ڲ������
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
printf�У�% fͨɱ�����Ⱥ�˫����
��scanf�У�% f��% lf��������
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
������
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
 
�ڰ���
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


