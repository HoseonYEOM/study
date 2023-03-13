// Hello, World
#if(0)
#include <stdio.h>

int main()
{
	printf("Hello, World\n");
	return 0;
}
#endif

// 변수 사용 예
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

// 문자형의 사용 예
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

// 열거형의 사용 예
// 형식: enum 태그명 {열거자1, 열거자2,...}

#if(0)
#include <stdio.h>

void main()
{
	enum day1 { SUN, MON, TUE, WED, THU, FRI, SAT } d1;
	enum day2 { sun = 2, mon, tue, wed, thu, fri, sat } d2;
	d1 = WED;
	d2 = wed;
	printf("열거형 d1 저장된 값은 %d 입니다.\n", d1);
	printf("열거형 d2 저장된 값은 %d 입니다.\n", d2);

}
#endif

// 변수에 저장될 값의 크기(범위)
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

// 변수의 선언 위치 예
#if(0)
#include <stdio.h>
int a = 100;
void func() {
	int a = 200;
	printf("func()에서 a의 값 ==> %d\n", a);
}
void main()
{
	printf("main()에서 a의 값 ==> %d\n", a);
	func();

}
#endif

// 변수의 초기화
#if(0)
#include <stdio.h>

void main()
{
	int i, sum;
	for (i = 1; i <= 10; i++)
		sum = sum + i;  // sum 초기화 안함
	printf("1부터 10까지의 합 = %d\n", sum);
}
#endif

#if(0)
#include "stdio.h"

void main()
{
	int i, sum = 0;
	for (i = 1; i <= 10; i++)
		sum = sum + i;
	printf("1부터 10까지의 합 = %d\n", sum);
}
#endif

// #define
// #define 은 매크로를 정의할 때 사용
// 매크로(macro)
// 선행처리기 #define 을 사용하여 단순 치환되는 자료
// 프로그램 작성 싱에 명령이나 수식 또는 상수값이 자주 사용될 때 이들을 대표하는 이름을 붙여 사용하는 대상

// 매크로 상수 정의
// 형식: #define 매크로명 자료
//      #undef 매크로명
//    #define PI 3.141592

// 매크로 상수 정의의 사용 예
#if(0)
#include <stdio.h>
#define ADDR "서울시 종로구 대학로 86(동숭동)"
#define TEL "1577-999520"

void main()
{
	printf("한국방송통신대학교 주소 : %s\n", ADDR);
	printf("전화번호 : %s\n", TEL);
#undef ADDR
#define ADDR "test"
	printf("\n test 출력? %s\n", ADDR);
}
#endif

// 매크로 함수 정의
// 형식 : #define 매크로명(인수) (수식)
//       #define 매크로명(인수,인수) (수식)
// 예  : #define AREA(x) (3.141592*(x)*(x))
//       #define HAP(a,b) (a+b)
// 장점: 선행처리기에 의한 단순 치환 방식이므로, 전달 인자의 자료형을 명시할 필요가 없고, 또 어떠한 자료형 변수를 인자로
// 전달해도 잘 동작한다.
// 한 두 줄의 코드인 경우 함수로 정의하는 것보다 속도가 빠르다.

// 매크로 함수 정의의 사용 예
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

// 조건부 컴파일의 사용 예
#if(0)
#include <stdio.h>

#define CONDITION 1
void main()
{
#if CONDITION
	printf("\n A 프로그램을 컴파일\n");
#else
	printf("\n B 프로그램을 컴파일\n");
#endif
}
#endif

// printf() 함수의 사용 예
#if(0)
#include <stdio.h>
void main()
{
	char c = 'A';
	int i = 10, j = 20, k = 30;
	printf("간단한 출력 프로그램\n");
	printf("c = %c, c의 아스키 코드값은 %d\n", c, c);
	printf("i = %d, j = %d, k = %d\n", i, j, k);
}
#endif

// 양식 변환기호의 사용 예
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

// 출력 양식의 편집 예
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

// scanf() 함수
// 형식 : scanf("입력양식", &변수1, &변수2,...);
// 기능 : 주어진 양식으로 자료를 입력 받아 지정된 기억공간(변수)에 저장
//  예 : scanf("%d", &a);

// scanf()함수의 사용 예
#if(0)
#include <stdio.h>
#pragma warning(disable:4996)
void main()
{
	int jsu1, jsu2;
	float ssu1, ssu2;
	printf("\n정수를 입력하시오  ");
	scanf("%d %d", &jsu1, &jsu2);
	printf("\n실수를 입력하시오  ");
	scanf("%f %f", &ssu1, &ssu2);
	printf("\n정수는 %d %d\n", jsu1, jsu2);
	printf("\n실수는 %f %f\n", ssu1, ssu2);
}
#endif

// getchar()함수의 사용 예
#if(0)
#include <stdio.h>
void main()
{
	char a;
	printf("문자 하나를 입력하세요 \n");
	a = getchar();
	printf("a = %c\n", a);
}
#endif

// putchar()함수의 사용 예
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
	putchar('\007'); // '\a' 와 동일(삑 소리가 남)
}
#endif

// gets()함수의 사용 예
#if(0)
#include <stdio.h>
#pragma warning(disable:4996)
void main()
{
	char s[50];
	printf("문자열 입력? ");
	gets(s);
	printf("gets()로 문자열 입력 = %s\n", s);
	printf("\n문자열 입력? ");
	scanf("%s", s);
	printf("scanf()로 문자열 입력 = %s\n", s);
}
#endif

// puts()함수의 사용 예
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

// 산술연산자의 사용 예
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

// ++ --연산자의 사용 예
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

// 관계연산자의 사용 예
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

// 논리 연산자의 사용 예
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

// 대입 연산자의 사용 예
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

// 조건 연산자의 사용 예
#if(0)
#include <stdio.h>
void main()
{
	int a = 10, b;
	b = (a > 15) ? (a + 1) : (a - 1);
	printf("b=%d\n", b);
}
#endif

// sizeof()의 사용 예
#if(0)
#include <stdio.h>
void main()
{
	float a = 3.14;
	printf("int형의 크기는 = %d 바이트\n", sizeof(int));
	printf("float형 변수 a의 크기는 = %d 바이트\n", sizeof(a));
}
#endif

// 강제 형변화의 예
#if(0)
#include <stdio.h>
void main()
{
	int a = 3, b = 4;
	double c;
	c = (double)a / b;
	printf("나눗셈 결과 : %f\n", c);
}
#endif

// 연산자 우선 순위
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

// 단순 if 문의 사용 예
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

// if ~ else 문의 사용 예
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

// 다중 if ~ else 문의 사용 예
#if(0)
#include <stdio.h>
void main()
{
	int a;
	scanf_s("%d", &a);
	if (a >= 0)
		if (a == 0)
			printf("입력된 값은 0\n");
		else
			printf("입력된 값은 양수\n");
	else
		printf("입력된 값은 음수\n");
}
#endif

// 다중 if ~ else if ~ else 문의 사용 예
#if(0)
#include <stdio.h>
#pragma warning(disable:4996)
void main()
{
	int score = 0;
	printf("성적 입력: ");
	scanf("%d", &score);
	if (score >= 90)
		printf("학점은 A\n");
	else if (score >= 80)
		printf("학점은 B\n");
	else if (score >= 70)
		printf("학점은 C\n");
	else if (score >= 60)
		printf("학점은 D\n");
	else
		printf("학점은 F\n");
}
#endif

// switch~case 문의 사용 예(break 문 미사용)
#if(0)
#include <stdio.h>

void main()
{
	int n;
	printf("n=? ");
	scanf_s("%d", &n);
	printf("\n n %% 5 = %d\n", n % 5);
	switch (n % 5) {
	case 0: printf("나머지는 0\n");
	case 1: printf("나머지는 1\n");
	case 2: printf("나머지는 2\n");
	default: printf("나머지는 3이나 4\n");
	}
}
#endif

// switch~case 문의 사용 예(break 문 사용)

#if(0)
#include <stdio.h>

void main()
{
	int n;
	printf("n=? ");
	scanf_s("%d", &n);
	printf("\n n %% 5 = %d\n", n % 5);
	switch (n % 5) {
	case 0: printf("나머지는 0\n");
		break;
	case 1: printf("나머지는 1\n");
		break;
	case 2: printf("나머지는 2\n");
		break;
	default: printf("나머지는 3이나 4\n");
		break;
	}
}
#endif

// goto 문의 사용 예
#if(0)
#include <stdio.h>
void main()
{
	int i, n, c = 'A';
	while (1) {
		printf("\n 횟수는 ?");
		scanf_s("%d", &n);
		for (i = 1; i <= n; i++) {
			printf("%c", c);
			if (c == 'Q')
				goto end;
			c++;
		}
	}
end:
	printf("\n\n 끝\n");
}
#endif

// for 문의 사용 예
#if(0)
#include <stdio.h>
void main()
{
	int i, sum = 0;
	for (i = 0; i <= 10; ++i)
		sum = sum + i;
	printf("1부터 %d까지의 합 = %d\n", i - 1, sum);
}
#endif

// 다중 for 문의 사용 예
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

// while 문의 사용 예
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
	printf("1부터 100까지의 합 = %d\n", sum);
}
#endif

// 다중 while 문의 사용 예
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

// do ~ while 문의 사용 예
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
	} while (i <= n); //세미콜론(;)을 쓰지 않으면 에러 발생
	printf("i=%d\n", i);
	printf("i~%d까지의 합 = %d\n", n, sum);
}
#endif

// break 문의 사용 예
#if(0)
#include <stdio.h>
#pragma warning(disable:4996)
void main()
{
	int num, sum = 0;
	while (1) {
		printf("num(끝:0)...?");
		scanf("%d", &num);
		if (num == 0)
			break;
		sum = sum + num;
	}
	printf("\n sum = %d\n", sum);
}
#endif

// continue 문의 사용 예
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

// 표준함수의 사용 예 1
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

// 표준함수의 사용 예 2
#if(0)
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#pragma warning(disable:4996)
void main()
{
	int i, alp = 0, no = 0, et = 0;
	char s[20];
	printf("문자 ");
	scanf("%s", &s);
	for (i = 0; (unsigned char)i < strlen(s); i++) {
		if (isalpha(s[i]))
			alp++;
		else if (isdigit(s[i]))
			no++;
		else
			et++;
	}
	printf("알파벳 = %d\n", alp);
	printf("숫자 = %d\n", no);
	printf("기타 = %d\n", et);
}
#endif

// 사용자 정의 함수의 예
// 함수 정의의 구조
// 반환자료형 함수명(자료형 매개변수1, 자료형 매개변수2,...) -> 함수 헤더
// {                                                     -> 함수 시작
//    함수 몸체
// }                                                     -> 함수 끝


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

// 함수를 사용하기 위해서는
// 1. 함수의 원형 선언
// 2. 함수의 호출
// 3. 함수의 정의

// 함수 원형선언 예 1(원형 선언이 필요한 경우)
#if(0)
#include <stdio.h>
int sum(int a, int b); //함수의 원형선언(피호출함수가 main()뒤에 있는 경우)

void main()
{
	printf("sum=%d", sum(10, 20));
}

int sum(int a, int b) {
	return(a + b);
}
#endif

// 함수 원형선언 예 1(원형 선언이 필요 없는 경우)
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

// return 문의 사용 예
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

// 함수의 여러 가지 사용 예
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
	printf("함수의 여러 가지 사용 방법\n");
}
int sum(int a, int b) {
	int i, s = 0;
	for (i = a; i <= b; i++)
		s = s + i;
	return s;
}
#endif

// 값에 의한 자료전달 방법 예
#if(0)
#include <stdio.h>
void swap(int x, int y);
void main()
{
	int a = 3, b = 5;
	printf("호출전 a = %d, b = %d\n", a, b);
	swap(a, b);
	printf("호출후 a = %d, b = %d\n", a, b);
}
void swap(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("함수내 x = %d, y = %d\n", x, y);
}
#endif

// 참조에 의한 자료전달 방법 예
#if(0)
#include <stdio.h>
void swap(int x, int y);
void main()
{
	int a = 3, b = 5;
	printf("호출전 a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("호출후 a = %d, b = %d\n", a, b);
}
void swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	printf("함수내 x = %d, y = %d\n,", *x, *y);
}
#endif

// 지역변수의 사용 예 1
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

// 지역변수의 사용 예 2
#if(0)
#include <stdio.h>
void main()
{
	//블록 A
	int x = 2, y = 4;
	printf("A: x = %d, y = %d\n", x, y);
	//블록 B
	{
		int x;
		x = 5;
		y++;
		printf("B: x = %d, y = %d\n", x, y);
	}
	printf("A: x = %d, y = %d\n", x, y);
}
#endif

// 전역변수의 사용 예
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

// 자동변수의 사용 예
#if(0)
#include <stdio.h>
void main()
{
	int i = 1;
	auto int j = 2;
	{ //블록 1
		int i = 3;
		{ //블록2
			int i = 4;
			printf("블록 2의 i = %d\n", i);
			printf("블록 2의 j = %d\n", j);
		}
		printf("블록 1의 i = %d\n", i);
	}
	printf("void main() 함수내의 i = %d\n", i);
}
#endif

// 정적변수의 사용 예 1
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

// 정적변수의 사용 예 2
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

// 외부변수의 사용 예 1
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

// 외부변수의 사용 예 2
#if(0)
#include <stdio.h>
//#pragma warning(disable:4996)
void extern_ex();
char s[100];
void main()
{
	printf("문자열을 입력하세요 :");
	scanf("%s", s);
	printf("입력 문자열은 %s는 전역변수 s에 저장\n", s);
	extern_ex();
}
#endif

// 레지스터 변수의 사용 예
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

// 1차원 배열의 사용 예 1
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

// 1차원 배열의 사용 예 2
#if(0)
#include <stdio.h>
void main()
{
	static int x[] = { 1,2,3,4 };
	static int y[] = { 10,20,30,40 };
	int i, z[4];
	for (i = 0; i < 4; ++i)
		z[i] = x[i] + y[3 - i];
	printf("반대 위치의 배열요소 합 \n");
	for (i = 0; i < 4; ++i)
		printf("%d + %d = %d\n", x[i], y[3 - i], z[i]);
}
#endif

// 2차원 배열의 사용 예
#if(0)
#include <stdio.h>
void main()
{
	static int score[4][3] = { {90,90,90},{80,80,80},{70,70,70},{60,60,60} };
	int sum, i, j;
	printf("번호\t국어\t수학\t영어\t합계\n");
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

// char형 배열의 사용 예 1
#if(0)
#include <stdio.h>
void main()
{
	char name[] = "HONG GIL DONG";
	char adrs1[6] = { 'S','E','O','U','L','\0' };
	char adrs2[6] = { 'S','E','O','U','L' }; // 마지막에 쓰레기값이 붙을 수 있음
	printf("\n name : %s", name);
	printf("\n adrs1 : %s", adrs1);
	printf("\n adrs2 : %s\n", adrs2);
}
#endif

// char형 배열의 사용 예 2(scanf()함수 이용)
#if(0)

#include <stdio.h>
#pragma warning(disable:4996)
void main()
{
	char string[50];
	int i = 0;
	printf("문자열을 입력하세요: ");
	scanf("%s", string);
	printf("입력 받은 문자열 : %s\n", string);
	printf("문자 단위 출력 : ");
	while (string[i] != '\0') {
		printf("%c", string[i]);
		i++;
	}
	printf("\n");
}

#endif

// 2차원 배열이 함수의 매개변수로 사용된 예
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

// 변수의 주소 예
#if(0)

#include <stdio.h>

void main() {
	int days = 265;
	int month = 12;
	int Table[5] = { 1,2,3,4,5 };
	printf("days의 주소는 %x\n", &days);
	printf("month의 주소는 %x\n", &month);
	printf("배열명 Table의 주소는 %x\n", Table);
	printf("배열명 Table 첫번째 요소의 주소는 %x\n", &Table[0]);
	printf("배열명 Table 두번째 요소의 주소는 %x\n", &Table[1]);
}
#endif

// 포인터 변수의 참조 예

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

// void형 포인터의 사용 예

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

// 포인터 연산의 예 1
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

// 포인터 연산의 예2

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

// char 포인터의 사용 예
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

// 포인터를 이용한 1차원 배열의 참조 예
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

// 포인터를 이용한 2차원 배열의 참조 예

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

// 포인터와 배열의 호환 예
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

// 포인터 배열의 사용 예
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

// 이중 포인터의 사용 예
#if(0)
#include <stdio.h>
void main() {
	char a = 'A', * p, ** pp;
	p = &a;
	pp = &p;
	printf("**pp = %c\n", **pp);
}
#endif

// 구조체 멤버의 참조 예 1

#if(0)
#include <stdio.h>
#include <string.h>
struct person {
	char name[8];
	int age;
	char sex;
};

void main() {
	struct person X = { "홍길동", 30,'M' };
	struct person Y;
	strcpy(Y.name, "임꺽정");
	Y.age = 35;
	Y.sex = 'M';
	printf("X의 정보: %s, %d, %c\n", X.name, X.age, X.sex);
	printf("Y의 정보: %s, %d, %c\n", Y.name, Y.age, Y.sex);
}
#endif

// 구조체 멤버의 참조 예 2

#if(0)
#include <stdio.h>
#include <string.h>
struct person {
	char name[8];
	int age;
	char sex;
};
void main() {
	struct person X = { "홍길동", 30,'M' };
	printf("sizeof(person.name) : %d byte \n", sizeof(X.name));
	printf("sizeof(person.age) : %d byte \n", sizeof(X.age));
	printf("sizeof(person.sex) : %d byte \n", sizeof(X.sex));
	printf("sizeof(person) : %d byte \n", sizeof(X));
}
#endif

// 구조체 배열의 사용 예

#if(0)
#include <stdio.h>

void main() {
	struct person {
		char* name;
		int age;
		char sex;
	};
	struct person X[3] = { {"홍길동", 20, 'M'},
						   {"황진이", 22, 'F'},
						   {"임꺽정", 30, 'M'} };
	int i, sum = 0;
	for (i = 0; i < 3; i++) {
		printf("이름 : %s 나이 : %d 성별 : %c\n", X[i].name, X[i].age, X[i].sex);
		sum = sum + X[i].age;
	}
	printf("나이합 : %d", sum);
}
#endif

// 구조체 포인터의 사용 예
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

// 구조체를 함수의 매개변수로 사용 예

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

// 구조체 포인터를 함수의 매개변수로 사용 예
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

// typedef의 사용 예 1

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

// typedef의 사용 예 2

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
	strcpy(member.name, "홍길동");
	member.sex = 'M';
	member.age = 30;
	data = 100;
	pt = &(member.age);
	printf("*pt= %d\n", *pt);
}
#endif

// 구조체 비트필드의 사용 예

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
	printf("v는 %d byte를 사용한다.\n", sizeof(v));
}
#endif

// 공용체 변수의 사용 예

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

// 파일 입출력 프로그램의 구조 예

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

// putc() 함수의 사용 예

#if(0)
#include <stdio.h>
#include <stdlib.h>
void main() {
	FILE* fp;
	char c;
	fp = fopen("sample1.dat", "w");
	if (fp == NULL) {
		printf("파일을 개방할 수 없습니다.!");
		exit(1);
	}
	while ((c = getchar()) != EOF)
		putc(c, fp);
	fclose(fp);
}
#endif

// fputs() 함수의 사용 예

#if(0)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main() {
	char name[64] = { 0 };
	FILE* fp;
	if ((fp = fopen("sample2.dat", "w")) == NULL) {
		puts("파일을 개방할 수 없습니다.!");
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

// fprintf() 함수의 사용 예

#if(0)
#include <stdio.h>
#include <stdlib.h>
void main() {
	FILE* fp;
	char no[10], name[10];
	int mid, term, rep, att, i;
	fp = fopen("sample3.dat", "w");
	if (fp == NULL) {
		printf("파일을 개방할 수 없습니다!");
		exit(1);
	}
	fprintf(stdout, "학번 이름 중간 기말 레포트 출석 점수를 입력\n");
	for (i = 0; i < 5; ++i) {
		scanf("%s %s %d %d %d %d", no, name, &mid, &term, &rep, &att);
		fprintf(fp, "%10s %8s %3d %3d %3d %3d\n", no, name, mid, term, rep, att);
	}
	fclose(fp);
}
#endif

// getc() 함수의 사용 예

#if(0)
#include <stdio.h>
#include <stdlib.h>
void main() {
	FILE* fp;
	char c;
	fp = fopen("sample1.dat", "r");
	if (fp == NULL) {
		printf("파일을 개방할 수 없습니다!");
		exit(1);
	}
	while ((c = getc(fp)) != EOF)
		putchar(c);
	fclose(fp);
}
#endif

// fgets() 함수의 사용 예

#if(0)
#include <stdio.h>
#include <stdlib.h>
void main() {
	char name[20];
	FILE* fp;
	if ((fp = fopen("sample2.dat", "r")) == NULL) {
		puts("파일을 개방할 수 없습니다!");
		exit(1);
	}
	while ((fgets(name, 20, fp) != NULL))
		printf("%s", name);
	fclose(fp);
}
#endif

// fscanf() 함수의 사용 예

#if(0)
#include <stdio.h>
#include <stdlib.h>
void main() {
	FILE* fp;
	char no[10], name[10];
	int mid, term, rep, att;
	fp = fopen("sample3.dat", "r");
	if (fp == NULL) {
		printf("파일을 개방할 수 없습니다!");
		exit(1);
	}
	printf("학번       이름      중간 기말 리포트 출석 \n");
	while (!feof(fp)) {
		fscanf(fp, "%10s %8s %3d %3d %3d %3d\n", no, name, &mid, &term, &rep, &att);
		printf("%-10s %-8s %4d %4d %5d %5d\n", no, name, mid, term, rep, att);
	}
	fclose(fp);
}
#endif

// 레코드 추가의 사용 예

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

// fwrite() 함수의 사용 예

#if(0)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main() {
	FILE* fp;
	char name[10];
	if ((fp = fopen("sample5.dat", "wb")) == NULL) {
		puts("파일을 개방할 수 없습니다!");
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

// fread() 함수의 사용 예

#if(0)
#include <stdio.h>
#include <stdlib.h>
void main() {
	FILE* fp;
	char name[10];
	if ((fp = fopen("sample5.dat", "rb")) == NULL) {
		puts("파일을 개방할 수 없습니다!");
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

// fseek() 함수의 사용 예

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
	printf("7번째부터 3글자 출력 : %s\n", str);
	fseek(fp, -2, SEEK_CUR);
	fgets(str, 3, fp);
	printf("현재 위치에서 앞에 2글자부터 2글자 출력 : %s\n", str);
	fseek(fp, -9, SEEK_END);
	fgets(str, 6, fp);
	printf("맨 뒤에서 9번째 앞부터 5글자 출력 : %s\n", str);
	fclose(fp);
}
#endif

// 메모리 정적 할당의 예

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

// 메모리 정적 할당의 문제점 예

#if(0)
#include <stdio.h>
void main(void) {
	int size;
	// char a[size];
	printf("입력할 주소의 문자열 크기는 ?");
	scanf("%d", &size);
	printf("주소 입력 :");
	scanf("%s", a);
	printf("입력된 주소는 %s 입니다.\n", a);
}
#endif

#if(0)
#include <stdio.h>
#include <stdlib.h>
void main(void) {
	int size;
	char* a;
	printf("입력할 주소의 문자열 크기는 ?");
	scanf("%d", &size);
	a = (char*)malloc(sizeof(char) * size);
	printf("주소 입력 : ");
	scanf("%s", a);
	printf("입력된 주소는 %s 입니다.\n", a);
	free(a);
}
#endif

// 메모리 동적할당의 예 1

#if(0)
#include <stdio.h>
#include <stdlib.h>
void main() {
	int* a;
	a = (int*)malloc(sizeof(int));
	if (a == NULL) {
		puts("기억 공간 할당 실패!");
		exit(1);
	}
	*a = 20;
	printf("힙에 저장된 변수 a : %d\n", *a);
	free(a);
}
#endif

// 메모리 동적 할당의 예 2

#if(0)
#include <stdio.h>
#include <stdlib.h>
void main() {
	int size;
	char* str;
	printf("문자열의 크기를 입력하세요: ");
	scanf("%d", &size);
	str = (char*)malloc(size + 1);
	if (str == NULL) {
		puts("기억 공간 할당 실패");
		exit(1);
	}
	printf("문자열을 입력하세요: ");
	scanf("%s", str);
	printf("동적 할당된 메모리에 저장된 문자열 : %s\n", str);
	free(str);
}
#endif

// calloc() 함수의 사용 예

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

// memcmp() 함수의 사용 예

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

// memcpy() 함수의 사용 예

#if(0)
#include <stdio.h>
#include <string.h>
void main() {
	char src[] = "1234567890";
	char dest[] = "abcdefghijklmnopqrstuvwxyz";
	char* stat;
	printf("memcpy() 실행 전 dest의 데이터 : %s\n", dest);
	stat = (char*)memcpy(dest, src, strlen(src));
	if (stat)
		printf("memcpy() 실행 후 dest의 데이터 : %s\n", dest);
	else
		printf("복사 실패\n");
}
#endif

// memset() 함수의 사용 예

#if(0)
#include <stdio.h>
#include <string.h>
void main() {
	char s[] = "1234567890";
	printf("memset() 실행 전의 s의 데이터 : %s\n", s);
	memset(s, '*', strlen(s));
	printf("memset() 실행 후의 s의 데이터 : %s\n", s);
}
#endif