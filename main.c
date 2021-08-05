#include <stdio.h>
#include <stdlib.h>

#define MAX 50

typedef struct name {
	char name[MAX];
} name;

void menu();
void registervalue();
void logvalue();

name registeredValues[MAX];
int lastIndex;

int main(int argc, char** argv) {
	menu();
	return 0;
}

void menu() {
	int option;
	puts("----- Inventory Management -----");
	printf("%sAnswer: ", "1: Register\n2: Log\n0: Exit\n");
	scanf("%d", &option);
	while(option != 0) {
		switch(option) {
		case 1:
			registervalue();
			break;
		case 2:
			logvalue();
			break;
		case 0:
			exit(0);
			break;
		}
		puts("---------------------------------------------");
		printf("%sAnswer: ", "1: Register\n2: Log\n0: Exit\n");
		scanf("%d", &option);
	}
}

void registervalue() {
	char value[MAX];
	printf("%s: ", "Value to register");
	scanf("%s", registeredValues[lastIndex].name);
	lastIndex++;
}

void logvalue() {
	puts("------------------- Values --------------------");
	for(int i = 0; i < lastIndex; i++) {
		printf("%d: %s\n", i, registeredValues[i].name);
	}
}
