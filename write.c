#include <stdio.h>
int main() {
	FILE * file;
	if (file = fopen("helo.txt", "w")) {
		printf("File opened successfully in write mode or a new file is created");
	}
	else
		printf("Error!");
	fclose(file);
	return 0;
}