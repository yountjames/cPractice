#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void basics(char name[]);
void ifExample();
void switchExample();
void structExample();
void whileExample();

struct Student
{
	char name[50];
	char major[50];
	int age;
	double gpa;
};

int main()
{
	//basics("James");
	//ifExample();
	//switchExample();
	//structExample();  //notice struct definition above
	whileExample();




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

void ifExample()
{
	int age;
	printf("Enter your age: ");
	scanf_s("%d", &age);
	
	if (age > 29) { printf("\nWow, you're old!\n"); }
	else { printf("Still young...\n"); }
}

void switchExample()
{
	char grade;
	printf("What was your grade on the test? ");
	scanf_s(" %c", &grade);

	switch (grade)
	{
	case 'A':
		printf("\nGreat!\n");
		break;
	case 'B':
		printf("\nNice\n");
		break;
	case 'C':
		printf("\nC's get degrees...\n");
		break;
	case 'D':
		printf("\nWell, you passed...\n");
		break;
	case 'F':
		printf("\nOoof, bad news bro\n");
		break;
	default:
		printf("\nInvalid Entry\n");
		break;
	}

}

void structExample()
{
	struct Student student1;
	student1.age = 22;
	student1.gpa = 3.2;
	strcpy(student1.name, "Jim");
	strcpy(student1.major, "Business");

	struct Student student2;
	student2.age = 23;
	student2.gpa = 3.4;
	strcpy(student2.name, "Pam");
	strcpy(student2.major, "Art");

	printf("%s's major is %s", student1.name, student1.major);
	printf("\n%s's major is %s", student2.name, student2.major);


}

void whileExample()
{
	int i = 0;
	printf("\n");
	while (i < 5)
	{
		printf("%d ", i);
		i++;
	}

}