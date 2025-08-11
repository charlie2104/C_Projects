#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE* fptr;
	size_t offset = 0;
	size_t bytesRead;
	unsigned char data[16];
	fptr = fopen("test_file.txt", "rb");
	if(fptr == NULL) {
		printf("Error opening file\n");
	} else {
		printf("File opened\n");
		while((bytesRead = fread(data, 1, sizeof(data), fptr)) > 0) {
			printf("%08zx ", offset);

			for(size_t i =0; i < bytesRead; i++) {
				printf("%02X ", data[i]);
			}
			printf("\n");
		offset += bytesRead;
		}
		fclose(fptr);
		printf("File closed\n");
	}
}
