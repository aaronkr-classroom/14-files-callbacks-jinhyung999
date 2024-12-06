//fprintf.c

#include <stdio.h>

#define MAX_LINE

int main() {
	char* string = "Hello";
	short int data = 0x0412;

	//쓰기모드로 텍스트파일을 오픈함
	FILE* p_file = fopen("hello.txt", "wt");
	
	if (NULL != p_file) {//파일 열기에 성공한 경우
		fprintf(p_file, "%s\n", string);
		fprintf(p_file, "%x\n", data);

		printf("파일내용~");

	
		fclose(p_file);
	}
	return 0;
}