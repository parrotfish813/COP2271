#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define NAME_SIZE 30
#define ID_SIZE 13

struct Student {

  char id[ID_SIZE];
  char firstName[NAME_SIZE];
  int age;

};

void printStudentInfo(struct Student st);
void printStudentsInfoPointer(struct Student *stPtr);

struct Student createStudent();

int main() {

  // int a;  // a is the object of the data type int
  // struct Student stud1; // stud1 is the object of the struct (data type) Student

  //Access and initulize the member of the structer
  //strcpy_s(stud1.firstName, NAME_SIZE - 1, "John");
  //stud1.age = 20;

  //Second way to access and initulize the member of the structer
  struct Student stud1 = {"John", 20};
  struct Student stud2 = {"Tom", 18};

  //Third way to access and initulize the member of the structer
  struct Student stud3 = { .age = 30, .firstName = "Jacob"};

  //Printing the info about the Student
  printf("The name of the student is %s\n", stud2.firstName);
  printf("The age of the student is %d\n", stud2.age);

  //Printing info about the student using a function
  printStudentInfo(stud1);
  printStudentInfo(stud2);

  //Printing info about the student using a function with pointers
  //printStudentsInfoPointer(&stud3);

  //Pointer to int
  int a;
  int *aPtr = &a;

  //create a pointer to the structure
  struct Student *stud1Ptr = &stud1;

  //Access the members of the structure through the pointer
  //(*stud1Ptr).firstName;
  //stud1Ptr.>firstName;

  //Create the 4th student with the function
  struct Student stud4 = createStudent();

  printStudentInfo(stud4);


  return 0;
}

///    PRINT STUDENT INFO    ///
void printStudentInfo(struct Student st) {

  puts("-------------------------------------------");
  printf("The student's ID is %15s\n", st.id);
  printf("The name of the student is %15s\n", st.firstName);
  printf("The age of the student is %15d\n", st.age);
  puts("-------------------------------------------");

}

/*
///    PRINT STUDENT INFO POINTERS   ///
void printStudentsInfoPointer(struct Student *stPtr){

  puts("-------------------------------------------");
  printf("The name of the student is %15s\n", stPtr>firstName);
  printf("The age of the student is %15d\n", stPtr>age);
  puts("-------------------------------------------");

}
*/

struct Student createStudent() {

  struct Student st;
  puts("Enter the student ID");
  scanf_s("%s", st.id, ID_SIZE - 1);

  puts("Enter the students name");
  fgets(st.firstName, NAME_SIZE - 1, stdin);
  //Get rid of the line in the end of the name
  st.firstName[strlen(st.firstName) - 1] = '\0';

  puts("Enter the students age");
  scanf("%d", &st.age);

  return st;

}
