#define _CRT_SECURE_NO_WARNINGS 1
//�����嵥4.1��talkback.c����
// �ǳ���֣�visual studioӦ���ǲ�����ʹ��scanf��������Ҫʹ��scanf_s�������������ڶ�����һ��no warning���Ϳ�����
// �������ֱ���0x00007FF7A59D30FD ����δ��������쳣(�� 2023-3-6.exe ��): ��ջ Cookie �������⵽���ڶ�ջ�Ļ����������
// ���������ȥ��define���Ͳ�����scanf_s��Ҳ������scanf��ֻ�ж����ͬʱ��scanf��������
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
// �����嵥4.2 ��4.1һ��
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
//ѧ������
// ����csdn�õ����������Ӧ�ڵ�ַ�����󸽼�һ���������߽�ֵ������ scanf_s("%s",name,sizeof(name));
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
//������ ��ϰ��
//�ڶ���
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
//������  ��������ĳ���
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
//������
//#include<stdio.h>
//#define BOOK "War and Peace"
//int main()
//{
//	float cost = 12.99;
//	float percent = 80.0;
//	printf("This copy of \"%s\" sells for $%.2f.\nThat is %.0f%% of list.",BOOK,cost,percent);
//	return 0;
//}