//callback.c

#include <stdio.h>
#include "my_math.h"

void MyAbs(int* p) {
	//전달된 주소값이 음수이면 양수로 바꿈
	if (*p<0){
		*p = (*p) * (-1);
	}
}
int main() {
	int x = -3, y = -2;
	int sum = Sum(x, y, MyAbs, NULL);
	int sub = Sub(x, y, MyAbs, MyAbs);

	printf("%d+%d=%d\n", x, y, sum);

	printf("%d-%d=%d\n", x, y, sub);
}