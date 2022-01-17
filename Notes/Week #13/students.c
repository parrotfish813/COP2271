#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define NAME_SIZE 30
#define ID_SIZE 13
#define CLASS_SIZE 24

struct Student {

	char id[ID_SIZE];
	char firstName[NAME_SIZE];
	int age;

};

//Class structure which consists of an array of Student structures
typedef struct {
	struct Student classList[CLASS_SIZE];
	unsigned nStudents;
} Class;

void printStudentsInfoPointer(struct Student* stPtr);
struct Student createStudent();

void addStudent(Class* cls);
void printClassList(Class* cls);

int main() {

	//Create the Class object
	Class COP2271 = { .nStudents = 0 };
	int classSize = 0;

	//Getting the size of the class
	puts("How many students are in the class?");
	scanf_s("%d", &classSize);

	//Adding stidents to the class
	for (int i = 0; i < classSize; i++) {
		addStudent(&COP2271);
	}

	//Print the list of students
	printClassList(&COP2271);

	return 0;
}

void printStudentsInfoPointer(struct Student* stPtr) {

	puts("-------------------------");
	printf("ID: %21s\n", stPtr->id);
	printf("Name: %19s\n", stPtr->firstName);
	printf("AGE: %19d\n", stPtr->age);
	puts("-------------------------");

}

struct Student createStudent() {

	struct Student st;
	puts("Enter the student ID");
	scanf_s("%s", &st.id, ID_SIZE - 1);

	puts("Enter the students name");
	scanf_s("%s", &st.firstName, NAME_SIZE - 1);

	puts("Enter the students age");
	scanf_s("%d", &st.age);

	return st;

}

void addStudent(Class* cls) {

	int studentNumber = cls->nStudents;
	cls->classList[studentNumber] = createStudent();
	cls->nStudents++;

}

	void printClassList(Class* cls) {
		for (int i = 0; i < cls->nStudents; i++) {
			printf("The student number is %d\n", i + 1);
			printStudentsInfoPointer(&cls->classList[i]);
			//printStudentsInfoPointer(cls->classList + i); Alternative way
		}
	}
