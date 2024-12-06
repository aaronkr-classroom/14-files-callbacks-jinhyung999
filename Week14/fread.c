//fread.c
#include <stdio.h>

int main(void) {
	int data;
	int data2 = 100,
		data_list[5];
	FILE* p_file = fopen("jin.dat", "r");

	if (NULL != p_file) {
		fread(&data, sizeof(int), 1, p_file);
		fread(&data2, sizeof(int), 1, p_file);
		fread(&data_list, sizeof(int)*5, 1, p_file);
		//int data1=0x00000412;
		printf("file data: %d(0x%04x)\n", data, data);
		printf("file data: %d(0x%04x)\n", data2);
		for (int i = 0; i < 5; i++) {
			printf("file data: %d(0x%04x)\n", data_list[i]);
		}

	}
	return 0;
}