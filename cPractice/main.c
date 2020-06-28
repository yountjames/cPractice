#define _CRT_SECURE_NO_DEPRECATE

//git test from desktop

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void basics(char name[]);
void ifExample();
void switchExample();
void structExample();
void whileExample();
void forExample();
void twoDimensionalArray();
void accessmemoryaddressExample();
void pointerExample();
void filewriteExample();
void filereadExample();

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
	//whileExample();
	//forExample();
	//twoDimensionalArray();
	//accessmemoryaddressExample();
	//pointerExample();
	//filewriteExample();
	filereadExample();





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

void forExample()
{
	for(int i = 0;i<20;i++)
	{
		printf("%d ", i);
	}

}

void twoDimensionalArray()
{

	int nums[3][2] = {
					{1,2},
					{3,4},
					{5,6}
					};

	//printf("%d", nums[1][1]);

	for(int i=0; i<3; i++)
	{ 
		for(int j=0; j<2; j++)
		{
			printf("%d, ", nums[i][j]);
		}
		printf("\n");
	}
}

void accessmemoryaddressExample()
{
	int age = 30;
	double gpa = 3.03;
	char grade = 'A';

	printf("age: %p\ngpa: %p\ngrade: %p\n", &age, &gpa, &grade);
}

void pointerExample()
{
	int age = 30;
	int *pAge = &age;  //pointer variable storing the age address
	double gpa = 3.4;
	int *pGpa = &gpa;
	char grade = 'A';
	char *pGrade = &grade;

	printf("%p", pAge);  //will display address of age
	printf("\n");
	printf("%d", *pAge); //dereferenced pointer, meaning *pAge is the value at age
	

}

void filewriteExample()
{
	FILE * fpointer = fopen("E:\\Desktop\\employees.txt", "w"); //create folder at that directory, use w to create and override, a if you want to append with fprintf

	fprintf(fpointer, "Write some stuff\nWrite some more stuff"); //if existing text in file, completely overrites with this

	fclose(fpointer); //close it

	FILE * fpointer2 = fopen("E:\\Desktop\\employees.txt", "a"); //append

	fprintf(fpointer2, "\nThird line of stuff"); //will append data now

	fclose(fpointer2); //close it

}

void filereadExample()
{
	char line[255];
	FILE * fpointer = fopen("E:\\Desktop\\employees.txt", "r");  //read information from file

	fgets(line, 255, fpointer); //read first line into line

	printf("%s", line);

	fgets(line, 255, fpointer); //read second line into line

	printf("\n%s", line);  

	fclose(fpointer);

}