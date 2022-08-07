
//struct with function
#include<stdio.h>
struct Student
{
    int roll;
    char name[30];
    float fees;
};
struct Student std;
void getStudent();
void showStudent();
void main()
{
    getStudent();
    showStudent();
}

void getStudent()
{
    printf("Enter student roll number\n");
    scanf("%d",&std.roll);
    printf("enter the name of student \n");
    scanf("%s",&std.name);
    printf("enter the fees of student \n");
    scanf("%f",&std.fees);
}
void showStudent()
{
    printf("roll number of student is :%d\n",std.roll);
    printf("name of student is :%s\n",std.name);
    printf("fees of student is :%f\n",std.fees);
}




