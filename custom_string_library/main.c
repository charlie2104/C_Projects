#include <stddef.h>
#include <stdio.h>

size_t my_strlen(const char* s) {

}

int my_strcmp(const char* s1, const char* s2) {
	int dif = 0;
	printf("%d", (s1 - s2));
	return dif;
}

char* my_strcpy(const char* src, const char* dest) {

}

int main() {
	my_strcmp("s", "S");
}
