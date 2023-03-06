#define _CRT_SECURE_NO_WARNINGS 1
//程序清单4.1，talkback.c程序
// 非常奇怪，visual studio应该是不允许使用scanf函数，需要使用scanf_s函数，但是由于定义了一个no warning，就可以用
// 出现这种报错：0x00007FF7A59D30FD 处有未经处理的异常(在 2023-3-6.exe 中): 堆栈 Cookie 检测代码检测到基于堆栈的缓冲区溢出。
// 但是如果我去掉define，就不能用scanf_s，也不能用scanf，只有定义的同时用scanf才能运行
//#include<stdio.h>
//#include<string.h>
//#define DENSITY 62.4
//int main()
//{
//	float weight, volume;
//	int size, letters;
//	char name[40];
//	
//	printf("Hi! what's your first name?\n");
//	scanf("%s", name);
//	printf("%s, what's your weight in pounds?\n", name);
//	scanf_s("%f", &weight);
//	size = sizeof(name);
//	letters = strlen(name);
//	volume = weight / DENSITY;
//	printf("Well, %s, your volume is %2.2f cubic feet.\n",name, volume);
//	printf("Also, your first name has %d letters,\n",letters);
//	printf("and we have %d bytes to store it.\n", size);
//
//	return 0;
//}
// 程序清单4.2 和4.1一样
//#include<stdio.h>
//#define PRAISE "You are an extraordinary being."
//int main()
//{
//	char name[40];
//
//	printf("What's your name?");
//	scanf_s("%s", name,sizeof(name));
//	printf("Hello, %s. %s\n", name,PRAISE);
//	return 0;
//}
//学以致用
// 搜索csdn得到解决方案：应在地址参数后附加一个缓冲区边界值。即： scanf_s("%s",name,sizeof(name));
//#include<stdio.h>
//int main()
//{
//	char name[40];
//	double cash = 345.2323;
//	scanf_s("%s", name,sizeof(name));
//	printf("The %s family just mabe $%.2f dollars richer!", name,cash);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char a;
//	scanf("%c", &a);
//	printf("*%c*",a);
//	return 0;
//}
//第四章 复习题
//第二题
//#include<stdio.h>
//#include<string.h>
//#define Q "His Hamlet was funny without being vulgar."
//int main()
//{
//	printf("He sold the painting for $%2.2f.\n", 2.345e2);
//	printf("%c%c%c\n", 'H', 105, '\41');
//	printf("\"%s\"\nhas %zd characters.\n", Q, strlen(Q));
//	printf("Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0);
//	return 0;
//}
//第四题  令人无语的程序
//#include<stdio.h>
//#define B "booboo"
//#define X 10
//int main()
//{
//	int age;
//	char name[40];
//	int xp;
//	printf("Please enter your first name.");
//	scanf_s("%s", &name,sizeof(name));
//	printf("All right, %s, what's your age?\n", name);
//	scanf_s("%d", &age);
//	xp = age + X;
//	printf("That's a %s! You must be at least %d.\n",B, xp);
//	return 0;
//}
//第五题
//#include<stdio.h>
//#define BOOK "War and Peace"
//int main()
//{
//	float cost = 12.99;
//	float percent = 80.0;
//	printf("This copy of \"%s\" sells for $%.2f.\nThat is %.0f%% of list.",BOOK,cost,percent);
//	return 0;
//}