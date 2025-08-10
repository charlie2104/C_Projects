#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE* fptr;
	fptr = fopen("test_file.txt", "rb");
	if(fptr == NULL) {
		printf("Error opening file\n");
	} else {
		printf("File opened\n");
		fclose(fptr);
		printf("File closed\n");
	}
}
