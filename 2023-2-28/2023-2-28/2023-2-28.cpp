C primer plus 编程练习
第一章
#include<stdio.h>
int main()
{
	int a=0 ;
	int b = 0;
	printf("请输入英寸:");
	scanf_s("%d",&a);
	b = 2.54 * a;
	printf("%d英寸=%d厘米",a,b);

	return 0;
}
//第二章
 
第一题
#include<stdio.h>
int main()
{
	printf("钟元煌\n");
	printf("钟\n元煌\n");
	printf("钟");
	printf("元煌");
	return 0;
}
 
第二题
#include<stdio.h>
int main()
{
	printf("我的姓名：钟元煌\n我的地址：福建农林大学旗山校区2#424\n");
	return 0;
}

第三题
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("你的年龄：");
	scanf_s("%d", &a);
	b = 365 * a;
	printf("你的年龄：%d年=%d天", a, b);
	return 0;
}

第四题   会一半
#include<stdio.h>
void jolly()
{
	printf("For he's a jolly good fellow!\nFor he's a jolly good fellow!\nFor he's a jolly good fellow!\n");
    
}
void deny()
{
	printf("Which nobody can deny!");
}
int main()
{
	jolly();
	deny();
	return 0;
}

第五题
#include<stdio.h>
void br()
{
	printf("Brazil，Russia");
}
void ic()
{
	printf("India，China\n");
}
int main()
{
	br();
	printf("，");
	ic();
	ic();
	br();
	return 0;
}

第六题
#include<stdio.h>
int main()
{
	int toes = 10;
	int toes² = 0;
	int toes³ = 0;
	toes² = toes*toes;
	toes³ = toes² * toes;
	printf("toes=%d\ntoes平方=%d\ntoes立方=%d", toes, toes², toes³);

	return 0;
}

第七题
#include<stdio.h>
void a()
{
	printf("Smile!");
}
int main()
{
	a();
	a();
	a();
	printf("\n");
	a();
	a();
	printf("\n");
	a();
	return 0;
}

第八题
#include<stdio.h>

void two()
{
	printf("two\n");
}
void one_three()
{
	printf("one\n");
	two();
	printf("three\n");
}
int main()
{
	printf("starting now:\n");
	one_three();
	printf("done!");
	return 0;
}
第三章
第一题
#include<stdio.h>
int main()
{
	int a = 1000000000000000000;
	float b = 10000000000000000000000000000;
	float c = -10000000000000000000000;
	return 0;
直接出现错误不运行

第二题
#include<stdio.h>
int main()
{
	int a = 0;
	printf("请输入一个ASCII码值：");
	scanf_s("%d", &a);
	printf("%c", a);
	return 0;
}