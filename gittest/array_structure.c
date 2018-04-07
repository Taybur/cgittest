#include<stdio.h>
#include<conio.h>
struct student{
int role;
char name[100];
char dept[100];
int totalmark;
int age;
char hobby[20];
};

void main()
{
    struct student students[50];
    int counter, index, count,avg_mark;
    printf("Enter the number of student=");
    scanf("%d",&count);
    for(counter=0;counter<count;counter++){
    printf("Please enter Role =");
    scanf("%d", &students[counter].role);
    printf(" Name =");
   scanf("%s", &students[counter].name);
    printf("department =");
    scanf("%s", &students[counter].dept);
    printf("total mark =");
    ##scanf("%d", &students[counter].totalmark);
     ##printf("age =");
     scanf("%d", &students[counter].age);
    printf("hobby =");
    scanf("%s", &students[counter].hobby);
}

printf("name=%d",students[1].role);

}
