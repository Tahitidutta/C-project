#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STUDENTS 50
typedef struct
{
char name[50];
int roll_number;
int marks;
char grade;
} student;
int main()
{
student students[MAX_STUDENTS];
int num_students = 0;
int choice = 0;
int i = 0;
while (true)
{
printf("1. Add student\n");
printf("2. View all students\n");
printf("3. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
if (num_students == MAX_STUDENTS)
printf("Maximum number of students reached.\n");
else
{
printf("Enter student name: ");
scanf("%s", students[num_students].name);
printf("Enter roll number: ");
scanf("%d", &students[num_students].roll_number);
printf("Enter marks: ");
scanf("%d", &students[num_students].marks);
students[num_students].grade =((students[num_students].marks >= 90)?'A':(students[num_students].marks >= 80)?'B':(students[num_students].marks >= 70)?'C':(students[num_students].marks >= 60)?'D':'F');
num_students++;
}
break;
case 2:
printf("Name\t\tRoll Number\tMarks\tGrade\n");
for (i = 0; i < num_students; i++)
printf("%s\t%d\t%d\t%c\n", students[i].name, students[i].roll_number, students[i].marks, students[i].grade);
break;
case 3:
exit(0);
default:
printf("Invalid choice. Please try again.\n");
break;
}
}
return 0;
}