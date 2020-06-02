#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void basics(char name[]);

int main()
{
	basics("James");



	return 0;

}

void basics(char name[])
{
	const int8_t age = 35;  //usage of constant
	float floatnum;
	floatnum = 4.3f; //have to put f after number otherwise it thinks it's a double
	int myage;
	printf("Your name is %s \n", name);
	printf("You are %d years old \n", age);
	printf("Here is a floating number: %f\n", floatnum);

	printf("Enter your age: ");
	scanf_s("%d", &myage);
	printf("You are %d", myage);

	int numbers[] = { 2, 4, 6, 8 };
	printf("\nArray index 2 is %d", numbers[2]);


	//char str2[30];
	//scanf_s("%s", str2);

}