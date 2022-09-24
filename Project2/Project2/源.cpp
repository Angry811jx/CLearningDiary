#include <stdio.h>

int main() {
	int a, b,d;
	char c;
	printf( "请输入要计算的两个数，格式为：\n10+20\n" );
	scanf("%d%c%d", &a, &c,&b);
	if (c == '+') {
		d = a + b;
	}
	else if (c == '*') {
		d = a * b;
	}
	else if (c == '-') {
		d = a - b;
	}
	else if(c=='/'){
		d = a / b;
	}
	else {
		printf("输入格式有误");
		return 0;
	}
	printf("%d%c%d=%d", a, c, b, d);
	return 0;
}