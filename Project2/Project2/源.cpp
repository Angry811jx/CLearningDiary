#include <stdio.h>

int main() {
	int a, b,d;
	char c;
	printf( "������Ҫ���������������ʽΪ��\n10+20\n" );
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
		printf("�����ʽ����");
		return 0;
	}
	printf("%d%c%d=%d", a, c, b, d);
	return 0;
}