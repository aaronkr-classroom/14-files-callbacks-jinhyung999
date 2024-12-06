//func_ptr.c
#include <stdio.h>
int Sum(int a, int b) {
    return a + b;
}

int Sub(int a, int b) {
    return a - b;
}

int Mul(int a, int b) {
    return a * b;
}

int Div(int a, int b) {
    // 0���� ���� �� ���� ó��
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0; // ���Ƿ� 0�� ��ȯ
    }
    return a / b;
}
int main() {

	int(*p[4])(int, int) = {
		&Sum,&Sub,&Mul,&Div
	};
	int x = 8, y = 12;
	char op_table[4] = { '+','-','*','/' };
	for (int i = 0; i < 4; i++) {
		printf("%d %c %d = %d\n", x, op_table[i], y, (*p[i])(x, y));
	}
}