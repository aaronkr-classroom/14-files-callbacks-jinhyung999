//fprintf.c

#include <stdio.h>

#define MAX_LINE

int main() {
	char* string = "Hello";
	short int data = 0x0412;

	//������� �ؽ�Ʈ������ ������
	FILE* p_file = fopen("hello.txt", "wt");
	
	if (NULL != p_file) {//���� ���⿡ ������ ���
		fprintf(p_file, "%s\n", string);
		fprintf(p_file, "%x\n", data);

		printf("���ϳ���~");

	
		fclose(p_file);
	}
	return 0;
}