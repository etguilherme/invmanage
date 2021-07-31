#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

void menu(char*);
// char* loadDatabase(char*);

int main(int argc, char** argv) {
	if(argc < 2) {
		printf("%s", "Usage: ./invmanage {database.json}.\n");
		fprintf(stderr, "The database was not especified.\n", 1);
		return 1;
	} else if(argc == 2) {
		menu(argv[1]);
	} else {
		printf("%s","Usage: ./invmanage {database.json}.\n");
		fprintf(stderr, "Only one argument is required.\n", 1);
		return 1;
	}
	return 0;
}

void menu(char* database_path) {
	int option;
	puts("------- Invetory Management -------");
	puts("Options: 1 - Register, 2 - Remove, 3 - Logs, 4 - Exit");
	printf("Answer: ");
	scanf("%d", &option);
	switch(option) {
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		exit(0);
		break;
	}
  	// loadDatabase(database_path);
}

/*
char* loadDatabase(char* database_path) {
	FILE *filePointer;
	char dataReaded[MAX];
	filePointer = fopen(database_path, "r");

	if(filePointer == NULL) {
		puts("File failed to open.");
	} else {
		puts("File opened with success.");
		while(fgets(dataReaded, MAX, filePointer) != NULL) {
			printf("%s", dataReaded);
		}
		fclose(filePointer);
		puts("Data successfully read from file");
		puts("The file is now closed.");
	}
	return "None";
}
*/
