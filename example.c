// Hello, World
#if(0)
#include <stdio.h>

int main()
{
	printf("Hello, World\n");
	return 0;
}
#endif

// ���� ��� ��
#if(0)
#include <stdio.h>

void main()
{
	int a, b;
	a = 100;
	b = 50;
	printf("a=%d, b=%d\n", a, b);
}
#endif

// �������� ��� ��
#if(0)
#include <stdio.h>

void main()
{
	char ch;
	int in;
	ch = in = 'A';
	printf(" ch = %d\n", ch);
	printf(" in = %d\n", in);
	ch = in = 100;
	printf("\n ch = %c\n", ch);
	printf(" in = %c\n", in);

}
#endif

// �������� ��� ��
// ����: enum �±׸� {������1, ������2,...}

#if(0)
#include <stdio.h>

void main()
{
	enum day1 { SUN, MON, TUE, WED, THU, FRI, SAT } d1;
	enum day2 { sun = 2, mon, tue, wed, thu, fri, sat } d2;
	d1 = WED;
	d2 = wed;
	printf("������ d1 ����� ���� %d �Դϴ�.\n", d1);
	printf("������ d2 ����� ���� %d �Դϴ�.\n", d2);

}
#endif

// ������ ����� ���� ũ��(����)
#if(0)
#include <stdio.h>

void main()
{
	short int num1, num2;
	num1 = 32767 + 1;
	num2 = -32768 - 1;
	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
}
#endif

#if(0)
#include <stdio.h>

void main()
{
	int num1, num2;
	num1 = 32767 + 1;
	num2 = -32768 - 1;
	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
}
#endif

// ������ ���� ��ġ ��
#if(0)
#include <stdio.h>
int a = 100;
void func() {
	int a = 200;
	printf("func()���� a�� �� ==> %d\n", a);
}
void main()
{
	printf("main()���� a�� �� ==> %d\n", a);
	func();

}
#endif

// ������ �ʱ�ȭ
#if(0)
#include <stdio.h>

void main()
{
	int i, sum;
	for (i = 1; i <= 10; i++)
		sum = sum + i;  // sum �ʱ�ȭ ����
	printf("1���� 10������ �� = %d\n", sum);
}
#endif

#if(0)
#include "stdio.h"

void main()
{
	int i, sum = 0;
	for (i = 1; i <= 10; i++)
		sum = sum + i;
	printf("1���� 10������ �� = %d\n", sum);
}
#endif

// #define
// #define �� ��ũ�θ� ������ �� ���
// ��ũ��(macro)
// ����ó���� #define �� ����Ͽ� �ܼ� ġȯ�Ǵ� �ڷ�
// ���α׷� �ۼ� �̿� ����̳� ���� �Ǵ� ������� ���� ���� �� �̵��� ��ǥ�ϴ� �̸��� �ٿ� ����ϴ� ���

// ��ũ�� ��� ����
// ����: #define ��ũ�θ� �ڷ�
//      #undef ��ũ�θ�
//    #define PI 3.141592

// ��ũ�� ��� ������ ��� ��
#if(0)
#include <stdio.h>
#define ADDR "����� ���α� ���з� 86(������)"
#define TEL "1577-999520"

void main()
{
	printf("�ѱ������Ŵ��б� �ּ� : %s\n", ADDR);
	printf("��ȭ��ȣ : %s\n", TEL);
#undef ADDR
#define ADDR "test"
	printf("\n test ���? %s\n", ADDR);
}
#endif

// ��ũ�� �Լ� ����
// ���� : #define ��ũ�θ�(�μ�) (����)
//       #define ��ũ�θ�(�μ�,�μ�) (����)
// ��  : #define AREA(x) (3.141592*(x)*(x))
//       #define HAP(a,b) (a+b)
// ����: ����ó���⿡ ���� �ܼ� ġȯ ����̹Ƿ�, ���� ������ �ڷ����� ����� �ʿ䰡 ����, �� ��� �ڷ��� ������ ���ڷ�
// �����ص� �� �����Ѵ�.
// �� �� ���� �ڵ��� ��� �Լ��� �����ϴ� �ͺ��� �ӵ��� ������.

// ��ũ�� �Լ� ������ ��� ��
#if(0)
#include <stdio.h>
#define Hap1(x,y) x+y
#define Hap2(x,y) ((x)+(y))
#define Gop1(x,y) x*y
#define Gop2(x,y) ((x)*(y))

void main()
{
	int h1, h2, g1, g2;
	h1 = 10 * Hap1(3, 4);
	h2 = 10 * Hap2(3, 4);
	g1 = Gop1(1 + 2, 3 + 4);
	g2 = Gop2(1 + 2, 3 + 4);
	printf("h1 = %d, h2 = %d\n", h1, h2);
	printf("g1 = %d, g2 = %d\n", g1, g2);
}
#endif

// ���Ǻ� �������� ��� ��
#if(0)
#include <stdio.h>

#define CONDITION 1
void main()
{
#if CONDITION
	printf("\n A ���α׷��� ������\n");
#else
	printf("\n B ���α׷��� ������\n");
#endif
}
#endif

// printf() �Լ��� ��� ��
#if(0)
#include <stdio.h>
void main()
{
	char c = 'A';
	int i = 10, j = 20, k = 30;
	printf("������ ��� ���α׷�\n");
	printf("c = %c, c�� �ƽ�Ű �ڵ尪�� %d\n", c, c);
	printf("i = %d, j = %d, k = %d\n", i, j, k);
}
#endif

// ��� ��ȯ��ȣ�� ��� ��
#if(0)
#include <stdio.h>
void main()
{
	printf("%c\n", 'a');
	printf("%d\n", -123);
	printf("%o\n", 123);
	printf("%x\n", 123);
	printf("%X\n", 123);
	printf("%f\n", 123.456789);
	printf("%e\n", 123.456789);
	printf("%s\n", "abcdefg");
}
#endif

// ��� ����� ���� ��
#if(0)
#include <stdio.h>
void main()
{
	printf("|%d|\n", 123);
	printf("|%5d|\n", 123);
	printf("|%-5d|\n", 123);
	printf("|%05d|\n", 123);
	printf("|%6.1f|\n", 123.45);
	printf("|%07.2f|\n", 123.45);
}
#endif

// scanf() �Լ�
// ���� : scanf("�Է¾��", &����1, &����2,...);
// ��� : �־��� ������� �ڷḦ �Է� �޾� ������ ������(����)�� ����
//  �� : scanf("%d", &a);

// scanf()�Լ��� ��� ��
#if(0)
#include <stdio.h>
#pragma warning(disable:4996)
void main()
{
	int jsu1, jsu2;
	float ssu1, ssu2;
	printf("\n������ �Է��Ͻÿ�  ");
	scanf("%d %d", &jsu1, &jsu2);
	printf("\n�Ǽ��� �Է��Ͻÿ�  ");
	scanf("%f %f", &ssu1, &ssu2);
	printf("\n������ %d %d\n", jsu1, jsu2);
	printf("\n�Ǽ��� %f %f\n", ssu1, ssu2);
}
#endif

// getchar()�Լ��� ��� ��
#if(0)
#include <stdio.h>
void main()
{
	char a;
	printf("���� �ϳ��� �Է��ϼ��� \n");
	a = getchar();
	printf("a = %c\n", a);
}
#endif

// putchar()�Լ��� ��� ��
#if(0)
#include <stdio.h>
void main()
{
	char var = 'A';
	putchar(var);
	putchar(var + 1);
	putchar('\n');
	putchar('K');
	putchar('K' + 2);
	putchar('\n');
	putchar('\007'); // '\a' �� ����(�� �Ҹ��� ��)
}
#endif

// gets()�Լ��� ��� ��
#if(0)
#include <stdio.h>
#pragma warning(disable:4996)
void main()
{
	char s[50];
	printf("���ڿ� �Է�? ");
	gets(s);
	printf("gets()�� ���ڿ� �Է� = %s\n", s);
	printf("\n���ڿ� �Է�? ");
	scanf("%s", s);
	printf("scanf()�� ���ڿ� �Է� = %s\n", s);
}
#endif

// puts()�Լ��� ��� ��
#if(0)
#include <stdio.h>
void main()
{
	char s1[] = "Computer";
	char s2[] = "Science";
	puts(s1);
	puts(s2);
	printf("%s ", s1);
	printf("%s", s2);
	printf("\n");
}
#endif

// ����������� ��� ��
#if(0)
#include <stdio.h>
void main()
{
	int x, y;
	x = 10;
	y = 3;
	printf("x+y= %d\n", x + y);
	printf("x/y= %d\n", x / y);
	printf("x%%y= %d\n", x % y);
	printf("y%%x=%d\n", y % x);
}
#endif

// ++ --�������� ��� ��
#if(0)
#include <stdio.h>
void main()
{
	int x = 5, a, b;
	a = ++x * x--;
	b = x * 10;
	printf("a=%d b=%d x=%d\n", a, b, x);
}
#endif

// ���迬������ ��� ��
#if(0)
#include <stdio.h>
void main()
{
	int a = 4, b, c, d;
	b = a > 2;
	printf("b=%d\n", b);
	c = a < 2;
	printf("c=%d\n", c);
	d = a == 4;
	printf("d=%d\n", d);
}
#endif

// �� �������� ��� ��
#if(0)
#include <stdio.h>
void main()
{
	int a = 4, b = 7, c, d, e;
	c = a > 2 && b <= 7;
	printf("c=%d\n", c);
	d = a < 2 || b <= 7;
	printf("d=%d\n", d);
	e = !a;
	printf("e=%d\n", e);
}
#endif

// ���� �������� ��� ��
#if(0)
#include <stdio.h>
void main()
{
	int a = 10, b = 3, c = 1;
	a *= (b - 1);
	b /= 2 + 3;
	c += 2;
	printf("a=%d b=%d c=%d\n", a, b, c);
}
#endif

// ���� �������� ��� ��
#if(0)
#include <stdio.h>
void main()
{
	int a = 10, b;
	b = (a > 15) ? (a + 1) : (a - 1);
	printf("b=%d\n", b);
}
#endif

// sizeof()�� ��� ��
#if(0)
#include <stdio.h>
void main()
{
	float a = 3.14;
	printf("int���� ũ��� = %d ����Ʈ\n", sizeof(int));
	printf("float�� ���� a�� ũ��� = %d ����Ʈ\n", sizeof(a));
}
#endif

// ���� ����ȭ�� ��
#if(0)
#include <stdio.h>
void main()
{
	int a = 3, b = 4;
	double c;
	c = (double)a / b;
	printf("������ ��� : %f\n", c);
}
#endif

// ������ �켱 ����
#if(0)
#include <stdio.h>

void main()
{
	int a, b, c;
	a = 10; b = 20; c = 30;
	printf("a+b*c=%d\n", a + b * c);
	printf("a=b+=2*c->a=%d\n", a = b += 2 * c);
	printf("a=(b>c)?b:c->a=%d\n", a = (b > c) ? b : c);
	printf("a/b*c=%d\n", a / b * c);
	printf("a*=b=c+5->a=%d\n", a *= b = c + 5);
}
#endif

// �ܼ� if ���� ��� ��
#if(0)
#include <stdio.h>
void main()
{
	int a = 10, b = 20;
	if (a > b) {
		a = a + 20;
		printf("a=%d\n", a);
	}
	b = b + 20;
	printf("b=%d\n", b);
}
#endif

// if ~ else ���� ��� ��
#if(0)
#include <stdio.h>
#pragma warning(disable:4996)
void main()
{
	int a, b, max;
	scanf("%d %d", &a, &b);
	if (a >= b)
		max = a;
	else
		max = b;
	printf("max=%d\n", max);
}
#endif

// ���� if ~ else ���� ��� ��
#if(0)
#include <stdio.h>
void main()
{
	int a;
	scanf_s("%d", &a);
	if (a >= 0)
		if (a == 0)
			printf("�Էµ� ���� 0\n");
		else
			printf("�Էµ� ���� ���\n");
	else
		printf("�Էµ� ���� ����\n");
}
#endif

// ���� if ~ else if ~ else ���� ��� ��
#if(0)
#include <stdio.h>
#pragma warning(disable:4996)
void main()
{
	int score = 0;
	printf("���� �Է�: ");
	scanf("%d", &score);
	if (score >= 90)
		printf("������ A\n");
	else if (score >= 80)
		printf("������ B\n");
	else if (score >= 70)
		printf("������ C\n");
	else if (score >= 60)
		printf("������ D\n");
	else
		printf("������ F\n");
}
#endif

// switch~case ���� ��� ��(break �� �̻��)
#if(0)
#include <stdio.h>

void main()
{
	int n;
	printf("n=? ");
	scanf_s("%d", &n);
	printf("\n n %% 5 = %d\n", n % 5);
	switch (n % 5) {
	case 0: printf("�������� 0\n");
	case 1: printf("�������� 1\n");
	case 2: printf("�������� 2\n");
	default: printf("�������� 3�̳� 4\n");
	}
}
#endif

// switch~case ���� ��� ��(break �� ���)

#if(0)
#include <stdio.h>

void main()
{
	int n;
	printf("n=? ");
	scanf_s("%d", &n);
	printf("\n n %% 5 = %d\n", n % 5);
	switch (n % 5) {
	case 0: printf("�������� 0\n");
		break;
	case 1: printf("�������� 1\n");
		break;
	case 2: printf("�������� 2\n");
		break;
	default: printf("�������� 3�̳� 4\n");
		break;
	}
}
#endif

// goto ���� ��� ��
#if(0)
#include <stdio.h>
void main()
{
	int i, n, c = 'A';
	while (1) {
		printf("\n Ƚ���� ?");
		scanf_s("%d", &n);
		for (i = 1; i <= n; i++) {
			printf("%c", c);
			if (c == 'Q')
				goto end;
			c++;
		}
	}
end:
	printf("\n\n ��\n");
}
#endif

// for ���� ��� ��
#if(0)
#include <stdio.h>
void main()
{
	int i, sum = 0;
	for (i = 0; i <= 10; ++i)
		sum = sum + i;
	printf("1���� %d������ �� = %d\n", i - 1, sum);
}
#endif

// ���� for ���� ��� ��
#if(0)
#include <stdio.h>
void main()
{
	int a, b;
	for (a = 1; a <= 3; ++a) {
		printf("a=%d\n", a);
		for (b = 0; b <= 4; b++)
			printf("b=%d ", b);
		putchar('\n');
	}
}
#endif

// while ���� ��� ��
#if(0)
#include <stdio.h>
void main()
{
	int i = 0;
	int sum = 0;
	while (i <= 100) {
		sum = sum + i;
		i++;
	}
	printf("1���� 100������ �� = %d\n", sum);
}
#endif

// ���� while ���� ��� ��
#if(0)
#include <stdio.h>
void main()
{
	int i = 2, j = 0;
	while (i < 10) {
		j = 1;
		while (j < 10) {
			printf("%dx%d=%d\n", i, j, i * j);
			j++;
		}
		printf("\n");
		i++;
	}
}
#endif

// do ~ while ���� ��� ��
#if(0)
#include <stdio.h>
#pragma warning(disable:4996)
void main()
{
	int i = 0, n;
	int sum = 0;
	printf("n=? ");
	scanf("%d", &n);
	do {
		sum = sum + i;
		i++;
	} while (i <= n); //�����ݷ�(;)�� ���� ������ ���� �߻�
	printf("i=%d\n", i);
	printf("i~%d������ �� = %d\n", n, sum);
}
#endif

// break ���� ��� ��
#if(0)
#include <stdio.h>
#pragma warning(disable:4996)
void main()
{
	int num, sum = 0;
	while (1) {
		printf("num(��:0)...?");
		scanf("%d", &num);
		if (num == 0)
			break;
		sum = sum + num;
	}
	printf("\n sum = %d\n", sum);
}
#endif

// continue ���� ��� ��
#if(0)
#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
void main()
{
	int num = 1;
	while (num != 0) {
		printf("\n num=? ");
		scanf("%d", &num);
		if (num < 0) {
			printf("0 : Negative number !\n");
			continue;
		}
		printf("Square root of %d = %f\n", num, sqrt(num));
	}
	printf("\n\n The end\n");
}
#endif

// ǥ���Լ��� ��� �� 1
#if(0)
#include <stdio.h>
#include <math.h>
void main()
{
	double x = 12.34;
	int i = -5, j = 2;
	int a, b, c;
	a = ceil(x);
	b = floor(x);
	c = pow(4, j);
	printf("abs(-5)=%d\n", abs(i));
	printf("ceil(12.34)=%d\n", a);
	printf("cos(10)=%f\n", cos(10));
	printf("exp(2)=%.f\n", exp(j));
	printf("floor(12.34)=%d\n", b);
	printf("sqrt(2)=%5f\n", sqrt(j));
	printf("pow(4,2)=%d\n", c);
}
#endif

// ǥ���Լ��� ��� �� 2
#if(0)
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#pragma warning(disable:4996)
void main()
{
	int i, alp = 0, no = 0, et = 0;
	char s[20];
	printf("���� ");
	scanf("%s", &s);
	for (i = 0; (unsigned char)i < strlen(s); i++) {
		if (isalpha(s[i]))
			alp++;
		else if (isdigit(s[i]))
			no++;
		else
			et++;
	}
	printf("���ĺ� = %d\n", alp);
	printf("���� = %d\n", no);
	printf("��Ÿ = %d\n", et);
}
#endif

// ����� ���� �Լ��� ��
// �Լ� ������ ����
// ��ȯ�ڷ��� �Լ���(�ڷ��� �Ű�����1, �ڷ��� �Ű�����2,...) -> �Լ� ���
// {                                                     -> �Լ� ����
//    �Լ� ��ü
// }                                                     -> �Լ� ��


#if(0)
#include <stdio.h>
#pragma warning(disable:4996)
int sum(int a, int b);
void main()
{
	int x, y, c;
	scanf("%d %d", &x, &y);

	c = sum(10, 20);
	printf("%d\n", c);
}

int sum(int a, int b) {
	int d;
	d = a + b;
	return(d);
}
#endif

// �Լ��� ����ϱ� ���ؼ���
// 1. �Լ��� ���� ����
// 2. �Լ��� ȣ��
// 3. �Լ��� ����

// �Լ� �������� �� 1(���� ������ �ʿ��� ���)
#if(0)
#include <stdio.h>
int sum(int a, int b); //�Լ��� ��������(��ȣ���Լ��� main()�ڿ� �ִ� ���)

void main()
{
	printf("sum=%d", sum(10, 20));
}

int sum(int a, int b) {
	return(a + b);
}
#endif

// �Լ� �������� �� 1(���� ������ �ʿ� ���� ���)
#if(0)
#include <stdio.h>
int sum(int a, int b) {
	return(a + b);
}
void main()
{
	printf("sum=%d", sum(10, 20));
}
#endif

// return ���� ��� ��
#if(0)
#include <stdio.h>
int max(int x, int y);
int min(int x, int y);
void main()
{
	int i = 10, j = 20;
	printf("max(%d, %d) = %d\n", i, j, max(i, j));
	printf("min(%d, %d) = %d\n", i, j, min(i, j));
}
int max(int x, int y) {
	return (x > y ? x : y);
}
int min(int x, int y) {
	if (x > y)
		return y;
	else
		return x;
}
#endif

// �Լ��� ���� ���� ��� ��
#if(0)
#include <stdio.h>
int sum(int, int);
test();
void main()
{
	int s;
	test();
	sum(10, 20);
	s = sum(30, 40);
	printf("sum from 30 to 40 = %d\n", s);
	printf("sum from 100 to 200 = %d\n", sum(100, 200));
}
test() {
	printf("�Լ��� ���� ���� ��� ���\n");
}
int sum(int a, int b) {
	int i, s = 0;
	for (i = a; i <= b; i++)
		s = s + i;
	return s;
}
#endif

// ���� ���� �ڷ����� ��� ��
#if(0)
#include <stdio.h>
void swap(int x, int y);
void main()
{
	int a = 3, b = 5;
	printf("ȣ���� a = %d, b = %d\n", a, b);
	swap(a, b);
	printf("ȣ���� a = %d, b = %d\n", a, b);
}
void swap(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("�Լ��� x = %d, y = %d\n", x, y);
}
#endif

// ������ ���� �ڷ����� ��� ��
#if(0)
#include <stdio.h>
void swap(int x, int y);
void main()
{
	int a = 3, b = 5;
	printf("ȣ���� a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("ȣ���� a = %d, b = %d\n", a, b);
}
void swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	printf("�Լ��� x = %d, y = %d\n,", *x, *y);
}
#endif

// ���������� ��� �� 1
#if(0)
#include <stdio.h>
void fcn1();
void main()
{
	int i = 10;
	printf("\n main i = %d", i);
	fcn1();
	printf("\n main i = %d\n", i);
}
void fcn1() {
	int i;
	i = 20;
	printf("\n fcn1 i = %d", i);
}
#endif

// ���������� ��� �� 2
#if(0)
#include <stdio.h>
void main()
{
	//��� A
	int x = 2, y = 4;
	printf("A: x = %d, y = %d\n", x, y);
	//��� B
	{
		int x;
		x = 5;
		y++;
		printf("B: x = %d, y = %d\n", x, y);
	}
	printf("A: x = %d, y = %d\n", x, y);
}
#endif

// ���������� ��� ��
#if(0)
#include <stdio.h>
void fcn1();
int x;
void main()
{
	printf("\n 1) x = %d", x);
	fcn1();
	printf("\n 2) x = %d\n", x);
}
void fcn1() {
	x++;
}
#endif

// �ڵ������� ��� ��
#if(0)
#include <stdio.h>
void main()
{
	int i = 1;
	auto int j = 2;
	{ //��� 1
		int i = 3;
		{ //���2
			int i = 4;
			printf("��� 2�� i = %d\n", i);
			printf("��� 2�� j = %d\n", j);
		}
		printf("��� 1�� i = %d\n", i);
	}
	printf("void main() �Լ����� i = %d\n", i);
}
#endif

// ���������� ��� �� 1
#if(0)
#include <stdio.h>
void main()
{
	int a = 10;
	static int b = 20;
	{
		int a = 5;
		printf("a = %d b = %d\n", a, b);
	}
	printf("a = %d b = %d\n", a, b);
}
#endif

// ���������� ��� �� 2
#if(0)
#include <stdio.h>
test();
void main()
{
	int i;
	i = 0;
	while (i < 3) {
		test();
		i++;
	}
}
test() {
	auto int a = 0;
	static int s = 0;
	printf("auto = %d, static = %d\n", a, s);
	++a;
	++s;
}
#endif

// �ܺκ����� ��� �� 1
#if(0)
#include <stdio.h>
int i = 10;
int j = 20;
void main()
{
	extern int i;
	extern int k;
	int j = 100;
	printf("i = %d j = %d k = %d\n", i, j, k);
}
int k = 50;
#endif

// �ܺκ����� ��� �� 2
#if(0)
#include <stdio.h>
//#pragma warning(disable:4996)
void extern_ex();
char s[100];
void main()
{
	printf("���ڿ��� �Է��ϼ��� :");
	scanf("%s", s);
	printf("�Է� ���ڿ��� %s�� �������� s�� ����\n", s);
	extern_ex();
}
#endif

// �������� ������ ��� ��
#if(0)
#include <stdio.h>
void main()
{
	register int i;
	int sum = 0;
	for (i = 0; i <= 10; ++i)
		sum += i;
	i -= 1;
	printf("i = %d sum = %d\n", i, sum);
}
#endif

// 1���� �迭�� ��� �� 1
#if(0)
#include <stdio.h>
void main()
{
	int array1[4] = { 10,20,30,40 };
	int array2[] = { 10,20,30,40 };
	int array3[4] = { 10,20 };
	int array4[4] = { 0 };
	int i;
	for (i = 0; i <= 3; i++)
		printf("array1[%d] = %d \t", i, array1[1]);
	printf("\n");
	for (i = 0; i <= 3; i++)
		printf("array2[%d] = %d \t", i, array2[i]);
	printf("\n");
	for (i = 0; i <= 3; i++)
		printf("array3[%d] = %d \t", i, array3[i]);
	printf("\n");
	for (i = 0; i <= 3; i++)
		printf("array4[%d] = %d \t", i, array4[i]);
	printf("\n");
}
#endif

// 1���� �迭�� ��� �� 2
#if(0)
#include <stdio.h>
void main()
{
	static int x[] = { 1,2,3,4 };
	static int y[] = { 10,20,30,40 };
	int i, z[4];
	for (i = 0; i < 4; ++i)
		z[i] = x[i] + y[3 - i];
	printf("�ݴ� ��ġ�� �迭��� �� \n");
	for (i = 0; i < 4; ++i)
		printf("%d + %d = %d\n", x[i], y[3 - i], z[i]);
}
#endif

// 2���� �迭�� ��� ��
#if(0)
#include <stdio.h>
void main()
{
	static int score[4][3] = { {90,90,90},{80,80,80},{70,70,70},{60,60,60} };
	int sum, i, j;
	printf("��ȣ\t����\t����\t����\t�հ�\n");
	for (i = 0; i < 4; ++i) {
		sum = 0;
		printf("%3d", i + 1);
		for (j = 0; j < 3; j++) {
			printf("\t%3d", score[i][j]);
			sum += score[i][j];
		}
		printf("\t%3d\n", sum);
	}
}
#endif

// char�� �迭�� ��� �� 1
#if(0)
#include <stdio.h>
void main()
{
	char name[] = "HONG GIL DONG";
	char adrs1[6] = { 'S','E','O','U','L','\0' };
	char adrs2[6] = { 'S','E','O','U','L' }; // �������� �����Ⱚ�� ���� �� ����
	printf("\n name : %s", name);
	printf("\n adrs1 : %s", adrs1);
	printf("\n adrs2 : %s\n", adrs2);
}
#endif

// char�� �迭�� ��� �� 2(scanf()�Լ� �̿�)
#if(0)

#include <stdio.h>
#pragma warning(disable:4996)
void main()
{
	char string[50];
	int i = 0;
	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s", string);
	printf("�Է� ���� ���ڿ� : %s\n", string);
	printf("���� ���� ��� : ");
	while (string[i] != '\0') {
		printf("%c", string[i]);
		i++;
	}
	printf("\n");
}

#endif

// 2���� �迭�� �Լ��� �Ű������� ���� ��
#if(0)

#include <stdio.h>
void score_sum(int gr[][5], int, int);
void main()
{
	int score[2][5] = { {10,20,30,40,50},{10,10,10,10,10} };
	score_sum(score, 2, 5);
}
void score_sum(int gr[][5], int row, int column) {
	int sum[2] = { 0 };
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < column; j++)
			sum[i] += gr[i][j];
		printf("sum[%d] = %d\n", i, sum[i]);
	}
}

#endif

// ������ �ּ� ��
#if(0)

#include <stdio.h>

void main() {
	int days = 265;
	int month = 12;
	int Table[5] = { 1,2,3,4,5 };
	printf("days�� �ּҴ� %x\n", &days);
	printf("month�� �ּҴ� %x\n", &month);
	printf("�迭�� Table�� �ּҴ� %x\n", Table);
	printf("�迭�� Table ù��° ����� �ּҴ� %x\n", &Table[0]);
	printf("�迭�� Table �ι�° ����� �ּҴ� %x\n", &Table[1]);
}
#endif

// ������ ������ ���� ��

#if(0)

#include <stdio.h>

void main() {
	int* p, i = 3, j;
	p = &i;
	j = *p;
	i++;
	printf("*p = %d\n", *p);
	printf(" p = %x\n", p);
	printf(" j = %d\n", j);
}
#endif;

// void�� �������� ��� ��

#if(0)

#include <stdio.h>

void main() {
	int a = 100;
	char b = 'b';
	void* p = NULL;
	p = (int*)&a;
	printf("*p = %d\n", *(int*)p);
	p = (char*)&b;
	printf("*p = %c\n", *(char*)p);
}
#endif

// ������ ������ �� 1
#if(0)
#include <stdio.h>

void main() {
	int* p, a[] = { 10,20,30,40,50 };
	p = &a[0];
	printf("*p   == %d\n", *p);
	printf("*p++ == %d\n", *p++);
	printf("*++p == %d\n", *++p);
	p = p + 2;
	printf("*p   == %d\n", *p);
	printf("a[2] == %d\n", a[2]);
	printf("*p+2 == %d\n", *p + 2);
}
#endif

// ������ ������ ��2

#if(0)

#include <stdio.h>

void main() {
	int* p, * q;
	int a[] = { 10,20,30,40,50,60,70,80,90,100 };
	p = &a[3];
	printf("*p     == %d\n", *p);
	printf("*(p+3) == %d\n", *(p + 3));
	q = p + 3;
	printf("*q   == %d\n", *q);
	printf("p-q  == %d\n", p - q);
	printf("q-p  == %d\n", q - p);
	// printf("q+p  == %d\n", q+p);
}
#endif

// char �������� ��� ��
#if(0)
#include <stdio.h>

void main() {
	char* cp = "COMPUTER";
	int i = 0;
	do
		printf("*(cp+%d) : %C\n", i, *(cp + i));
	while (*(cp + i++) != 0);
}
#endif

// �����͸� �̿��� 1���� �迭�� ���� ��
#if(0)
#include <stdio.h>

void main() {
	static int a[] = { 10, 20, 30,40,50 };
	int* pt, b, c, d;
	pt = a;
	b = *pt + *(pt + 3);
	pt++;
	c = *pt + *(pt + 3);
	d = *pt + 3;
	printf("b = %d, c = %d, d = %d\n", b, c, d);
}
#endif

// �����͸� �̿��� 2���� �迭�� ���� ��

#if(0)
#include <stdio.h>

void main() {
	static a[3][3] = { {1,2,3},{4,5,6},{7,8,-9} };
	int* pt;
	pt = a[0];
	while (*pt != -9) {
		printf("%d\n", *pt);
		pt++;
	}
}
#endif

// �����Ϳ� �迭�� ȣȯ ��
#if(0)
#include <stdio.h>

void main() {
	char A[] = "ARRAY";
	char* p = "POINTER";
	int i;
	for (i = 0; i < 5; i++)
		printf("*(A+%d) : %c\n", i, *(A + i));
	for (i = 0; i < 7; i++)
		printf("p[%d] : %c\n", i, p[i]);
}
#endif

// ������ �迭�� ��� ��
#if(0)
#include <stdio.h>

void main() {
	int a[] = { 1,2,3,4 };
	int b[] = { 5,6,7,8 };
	int* PA[2];
	PA[0] = a;
	PA[1] = b;
	printf("*(PA[0] = %d\n", *(PA[0]));
	printf("*(PA[0]+1) = %d\n", *(PA[0] + 1));
	printf("*PA[1] = %d\n", *PA[1]);
	printf("*PA[1]+15 = %d\n", *PA[1] + 15);
}
#endif

// ���� �������� ��� ��
#if(0)
#include <stdio.h>
void main() {
	char a = 'A', * p, ** pp;
	p = &a;
	pp = &p;
	printf("**pp = %c\n", **pp);
}
#endif

// ����ü ����� ���� �� 1

#if(0)
#include <stdio.h>
#include <string.h>
struct person {
	char name[8];
	int age;
	char sex;
};

void main() {
	struct person X = { "ȫ�浿", 30,'M' };
	struct person Y;
	strcpy(Y.name, "�Ӳ���");
	Y.age = 35;
	Y.sex = 'M';
	printf("X�� ����: %s, %d, %c\n", X.name, X.age, X.sex);
	printf("Y�� ����: %s, %d, %c\n", Y.name, Y.age, Y.sex);
}
#endif

// ����ü ����� ���� �� 2

#if(0)
#include <stdio.h>
#include <string.h>
struct person {
	char name[8];
	int age;
	char sex;
};
void main() {
	struct person X = { "ȫ�浿", 30,'M' };
	printf("sizeof(person.name) : %d byte \n", sizeof(X.name));
	printf("sizeof(person.age) : %d byte \n", sizeof(X.age));
	printf("sizeof(person.sex) : %d byte \n", sizeof(X.sex));
	printf("sizeof(person) : %d byte \n", sizeof(X));
}
#endif

// ����ü �迭�� ��� ��

#if(0)
#include <stdio.h>

void main() {
	struct person {
		char* name;
		int age;
		char sex;
	};
	struct person X[3] = { {"ȫ�浿", 20, 'M'},
						   {"Ȳ����", 22, 'F'},
						   {"�Ӳ���", 30, 'M'} };
	int i, sum = 0;
	for (i = 0; i < 3; i++) {
		printf("�̸� : %s ���� : %d ���� : %c\n", X[i].name, X[i].age, X[i].sex);
		sum = sum + X[i].age;
	}
	printf("������ : %d", sum);
}
#endif

// ����ü �������� ��� ��
#if(0)
#include <stdio.h>
struct student {
	char name[10];
	int kor;
	int math;
};
void main() {
	struct student hs[4] = { {"KIM HG",90,95},{"LEE SY",85,90},{"PARK GS",70,85},{"CHOI HJ",95,75} };
	struct student* p;
	p = hs;
	printf("%s %d %d\n", p->name, p->kor, p->math);
	p += 3;
	printf("%s %d %d\n", p->name, p->kor, p->math);
	p--;
	printf("%s %d %d\n", p->name, p->kor, p->math);
}
#endif

// ����ü�� �Լ��� �Ű������� ��� ��

#if(0)
#include <stdio.h>
struct num calc(struct num);
struct num {
	int x;
	int y;
	int sum;
	int mul;
};
void main() {
	struct num number1;
	number1.x = 10;
	number1.y = 20;
	number1 = calc(number1);
	printf("x: %d, y: %d, sum: %d, mul: %d\n", number1.x, number1.y, number1.sum, number1.mul);
}
struct num calc(struct num number2) {
	number2.sum = number2.x + number2.y;
	number2.mul = number2.x * number2.y;
	return(number2);
}
#endif

// ����ü �����͸� �Լ��� �Ű������� ��� ��
#if(0)
#include <stdio.h>
struct num calc(struct num*);
struct num {
	int x;
	int y;
	int sum;
	int mul;
};
void main() {
	struct num number1;
	number1.x = 10;
	number1.y = 20;
	calc(&number1);
	printf("x: %d, y: %d, sum: %d, mul: %d\n", number1.x, number1.y, number1.sum, number1.mul);
}
struct num calc(struct num* number2) {
	number2->sum = number2->x + number2->y;
	number2->mul = number2->x * number2->y;
}
#endif

// typedef�� ��� �� 1

#if(0)
#include <stdio.h>
struct data {
	int x;
	int y;
};
typedef struct data DATA;
void main() {
	DATA d = { 1,2 };
	printf("d.x = %d, d.y = %d\n", d.x, d.y);
}
#endif

// typedef�� ��� �� 2

#if(0)
#include <stdio.h>
#include <string.h>
struct person {
	char name[20];
	char sex;
	int age;
};
typedef struct person MAN;
typedef unsigned char CHAR;
typedef int* PTR;
void main() {
	MAN member;
	CHAR data;
	PTR pt;
	strcpy(member.name, "ȫ�浿");
	member.sex = 'M';
	member.age = 30;
	data = 100;
	pt = &(member.age);
	printf("*pt= %d\n", *pt);
}
#endif

// ����ü ��Ʈ�ʵ��� ��� ��

#if(0)
#include <stdio.h>
void main() {
	struct test {
		unsigned a : 5;
		unsigned b : 6;
		unsigned c : 6;
		unsigned d : 4;
	};
	struct test v = { 1,2,3,4 };
	printf("v.a = %d v.b = %d v.c = %d v.d = %d\n", v.a, v.b, v.c, v.d);
	printf("v�� %d byte�� ����Ѵ�.\n", sizeof(v));
}
#endif

// ����ü ������ ��� ��

#if(0)
#include <stdio.h>
void main() {
	union test {
		short int i;
		float f;
		double d;
	};
	union test u;
	u.i = u.f = u.d = 0;
	printf("%d byte\n", sizeof(u));
	u.i = 100;
	printf("%d %f %f\n", u.i, u.f, u.d);
	u.f = 0.5;
	printf("%d %f %f\n", u.i, u.f, u.d);
	u.d = 0.016667;
	printf("%f\n", u.d);
}
#endif

// ���� ����� ���α׷��� ���� ��

#if(0)
#include <stdio.h>
void main() {
	char ch;
	FILE* fp;
	fp = fopen("sample.txt", "w");
	for (ch = 'A'; ch <= 'Z'; ch++)
		fputc(ch, fp);
	fclose(fp);
}
#endif

// putc() �Լ��� ��� ��

#if(0)
#include <stdio.h>
#include <stdlib.h>
void main() {
	FILE* fp;
	char c;
	fp = fopen("sample1.dat", "w");
	if (fp == NULL) {
		printf("������ ������ �� �����ϴ�.!");
		exit(1);
	}
	while ((c = getchar()) != EOF)
		putc(c, fp);
	fclose(fp);
}
#endif

// fputs() �Լ��� ��� ��

#if(0)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main() {
	char name[64] = { 0 };
	FILE* fp;
	if ((fp = fopen("sample2.dat", "w")) == NULL) {
		puts("������ ������ �� �����ϴ�.!");
		exit(1);
	}
	gets(name);
	while (strcmp(name, "end")) {
		strcat(name, "\n");
		fputs(name, fp);
		gets(name);
	}
	fclose(fp);
}
#endif

// fprintf() �Լ��� ��� ��

#if(0)
#include <stdio.h>
#include <stdlib.h>
void main() {
	FILE* fp;
	char no[10], name[10];
	int mid, term, rep, att, i;
	fp = fopen("sample3.dat", "w");
	if (fp == NULL) {
		printf("������ ������ �� �����ϴ�!");
		exit(1);
	}
	fprintf(stdout, "�й� �̸� �߰� �⸻ ����Ʈ �⼮ ������ �Է�\n");
	for (i = 0; i < 5; ++i) {
		scanf("%s %s %d %d %d %d", no, name, &mid, &term, &rep, &att);
		fprintf(fp, "%10s %8s %3d %3d %3d %3d\n", no, name, mid, term, rep, att);
	}
	fclose(fp);
}
#endif

// getc() �Լ��� ��� ��

#if(0)
#include <stdio.h>
#include <stdlib.h>
void main() {
	FILE* fp;
	char c;
	fp = fopen("sample1.dat", "r");
	if (fp == NULL) {
		printf("������ ������ �� �����ϴ�!");
		exit(1);
	}
	while ((c = getc(fp)) != EOF)
		putchar(c);
	fclose(fp);
}
#endif

// fgets() �Լ��� ��� ��

#if(0)
#include <stdio.h>
#include <stdlib.h>
void main() {
	char name[20];
	FILE* fp;
	if ((fp = fopen("sample2.dat", "r")) == NULL) {
		puts("������ ������ �� �����ϴ�!");
		exit(1);
	}
	while ((fgets(name, 20, fp) != NULL))
		printf("%s", name);
	fclose(fp);
}
#endif

// fscanf() �Լ��� ��� ��

#if(0)
#include <stdio.h>
#include <stdlib.h>
void main() {
	FILE* fp;
	char no[10], name[10];
	int mid, term, rep, att;
	fp = fopen("sample3.dat", "r");
	if (fp == NULL) {
		printf("������ ������ �� �����ϴ�!");
		exit(1);
	}
	printf("�й�       �̸�      �߰� �⸻ ����Ʈ �⼮ \n");
	while (!feof(fp)) {
		fscanf(fp, "%10s %8s %3d %3d %3d %3d\n", no, name, &mid, &term, &rep, &att);
		printf("%-10s %-8s %4d %4d %5d %5d\n", no, name, mid, term, rep, att);
	}
	fclose(fp);
}
#endif

// ���ڵ� �߰��� ��� ��

#if(0)
#include <stdio.h>
void main() {
	FILE* fp;
	fp = fopen("sample4.dat", "a");
	fputs("Cho DS\n", fp);
	fputs("Han JK\n", fp);
	fputs("Kang MH\n", fp);
	fclose(fp);
}
#endif

// fwrite() �Լ��� ��� ��

#if(0)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main() {
	FILE* fp;
	char name[10];
	if ((fp = fopen("sample5.dat", "wb")) == NULL) {
		puts("������ ������ �� �����ϴ�!");
		exit(1);
	}
	gets(name);
	while (strcmp(name, "END")) {
		fwrite(name, 10, 1, fp);
		gets(name);
	}
	fclose(fp);
}
#endif

// fread() �Լ��� ��� ��

#if(0)
#include <stdio.h>
#include <stdlib.h>
void main() {
	FILE* fp;
	char name[10];
	if ((fp = fopen("sample5.dat", "rb")) == NULL) {
		puts("������ ������ �� �����ϴ�!");
		exit(1);
	}
	while (1) {
		if (fread(name, 10, 1, fp) != 1)
			break;
		puts(name);
	}
	fclose(fp);
}
#endif

// fseek() �Լ��� ��� ��

#if(0)
#include <stdio.h>
#include <string.h>
void main() {
	char str[10];
	FILE* fp = fopen("sample6.txt", "wt");
	fputs("1234567890", fp);
	fclose(fp);
	fp = fopen("sample6.txt", "rt");
	fseek(fp, 7, SEEK_SET);
	fgets(str, 4, fp);
	printf("7��°���� 3���� ��� : %s\n", str);
	fseek(fp, -2, SEEK_CUR);
	fgets(str, 3, fp);
	printf("���� ��ġ���� �տ� 2���ں��� 2���� ��� : %s\n", str);
	fseek(fp, -9, SEEK_END);
	fgets(str, 6, fp);
	printf("�� �ڿ��� 9��° �պ��� 5���� ��� : %s\n", str);
	fclose(fp);
}
#endif

// �޸� ���� �Ҵ��� ��

#if(0)
#include <stdio.h>
void test1(int);
void test2(int);
int a = 100;

void main() {
	int b = a;
	test1(b);
	test2(b);
}

void test1(int c) {
	int d;
	d = c + 10;
	printf("%d\n", d);
}
void test2(int e) {
	int f;
	f = e + 20;
	printf("%d\n", f);
}
#endif

// �޸� ���� �Ҵ��� ������ ��

#if(0)
#include <stdio.h>
void main(void) {
	int size;
	// char a[size];
	printf("�Է��� �ּ��� ���ڿ� ũ��� ?");
	scanf("%d", &size);
	printf("�ּ� �Է� :");
	scanf("%s", a);
	printf("�Էµ� �ּҴ� %s �Դϴ�.\n", a);
}
#endif

#if(0)
#include <stdio.h>
#include <stdlib.h>
void main(void) {
	int size;
	char* a;
	printf("�Է��� �ּ��� ���ڿ� ũ��� ?");
	scanf("%d", &size);
	a = (char*)malloc(sizeof(char) * size);
	printf("�ּ� �Է� : ");
	scanf("%s", a);
	printf("�Էµ� �ּҴ� %s �Դϴ�.\n", a);
	free(a);
}
#endif

// �޸� �����Ҵ��� �� 1

#if(0)
#include <stdio.h>
#include <stdlib.h>
void main() {
	int* a;
	a = (int*)malloc(sizeof(int));
	if (a == NULL) {
		puts("��� ���� �Ҵ� ����!");
		exit(1);
	}
	*a = 20;
	printf("���� ����� ���� a : %d\n", *a);
	free(a);
}
#endif

// �޸� ���� �Ҵ��� �� 2

#if(0)
#include <stdio.h>
#include <stdlib.h>
void main() {
	int size;
	char* str;
	printf("���ڿ��� ũ�⸦ �Է��ϼ���: ");
	scanf("%d", &size);
	str = (char*)malloc(size + 1);
	if (str == NULL) {
		puts("��� ���� �Ҵ� ����");
		exit(1);
	}
	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s", str);
	printf("���� �Ҵ�� �޸𸮿� ����� ���ڿ� : %s\n", str);
	free(str);
}
#endif

// calloc() �Լ��� ��� ��

#if(0)
#include <stdio.h>
#include <stdlib.h>
void main() {
	int i;
	int* a;
	a = (int*)calloc(5, sizeof(int));
	for (i = 0; i < 5; i++) {
		printf("%d\n", a[i]);
	}
	free(a);
}
#endif

// memcmp() �Լ��� ��� ��

#if(0)
#include <stdio.h>
//#include <mem.h>
void main() {
	char* s1 = "aaa";
	char* s2 = "bbb";
	int stat;
	stat = memcmp(s1, s2, 3);
	printf("%d", stat);
}
#endif

// memcpy() �Լ��� ��� ��

#if(0)
#include <stdio.h>
#include <string.h>
void main() {
	char src[] = "1234567890";
	char dest[] = "abcdefghijklmnopqrstuvwxyz";
	char* stat;
	printf("memcpy() ���� �� dest�� ������ : %s\n", dest);
	stat = (char*)memcpy(dest, src, strlen(src));
	if (stat)
		printf("memcpy() ���� �� dest�� ������ : %s\n", dest);
	else
		printf("���� ����\n");
}
#endif

// memset() �Լ��� ��� ��

#if(0)
#include <stdio.h>
#include <string.h>
void main() {
	char s[] = "1234567890";
	printf("memset() ���� ���� s�� ������ : %s\n", s);
	memset(s, '*', strlen(s));
	printf("memset() ���� ���� s�� ������ : %s\n", s);
}
#endif