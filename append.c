#include <stdio.h>
int main() {
	FILE * file;
	if (file = fopen("hello.txt", "a")) {
		printf("File opened successfully in append mode or a new file is created");
	}
	else
		printf("Error!");
	fclose(file);
	return 0;
}