// TODO: Make registervalue know what is the last registered value in the index
// to avoid, wiping registered values. Maybe use a global variable to count
// how many values was registered
#include <stdio.h>
#include <stdlib.h>

char* valuearray[50][10];

void menu();
void registervalue();

int main(int argc, char** argv) {
	menu();
	return 0;
}

void menu() {
	int option;
	puts("----- Inventory Management -----");
	printf("%sAnswer: ", "1: Register\n0: Exit\n");
	scanf("%d", &option);
	while(option != 0) {
		switch(option) {
		case 1:
			registervalue();
			break;
		case 0:
			exit(0);
			break;
		}
		printf("%sAnswer: ", "1: Register\n0: Exit\n");
		scanf("%d", &option);		
	}
}

void registervalue() {
	char* value;
	printf("%s: ", "Value to register");
	scanf("%s", &value);
	valuearray[0][0] = value;
	printf("%s\n", valuearray[0]);
}
