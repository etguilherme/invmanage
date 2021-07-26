#include <stdio.h>

void menu(char*);

int main(int argc, char** argv) {
	if(argc < 2) {
		printf("Usage: ./invmanage {database.json}.\n");
		fprintf(stderr, "The database was not especified.\n", 1);
		return 1;
	} else if(argc == 2) {
		menu(argv[1]);
	} else {
		printf("Usage: ./invmanage {database.json}.\n");
		fprintf(stderr, "Only one argument is required.\n", 1);
		return 1;
	}
	return 0;
}

void menu(char* database) {
	printf("%s\n", database);
}
