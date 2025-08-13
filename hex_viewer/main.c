#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
			//Print offset of data in hex with leading 0s
			printf("%08zx ", offset);

			//print hex values of data 
			for(size_t i =0; i < bytesRead; i++) {
				printf("%02X ", data[i]);
			}
			
				
			//adding padding if a line doesn't have 16 bytes
			for(int i = 0; i < (16-bytesRead); i++) {
				printf("   ");
			}

			//Print ascii values
			for(size_t i = 0; i < bytesRead; i++) {
				if(isprint(data[i])) {
					printf("%c", data[i]);		
				} else {
				 	printf(".");
				}
			}

			printf("\n");
		
			offset += bytesRead;
		}
		fclose(fptr);
		printf("File closed\n");
	}
}
