#include <stdio.h>
struct employee{
int id;
char name [30];
int age;
float salary;
};
int main()
{
    struct employee E;
    printf("\n Enter employee id:");
    scanf("%d",&E.name);
    printf("\n Enter employee name:");
    scanf("%s",&E.name);
    printf("\n Enter employee age:");
    scanf ("%d",&E.age);
    printf("\n Enter employee salary:");
    scanf("%f",&E.salary);
    
    printf("Employee id is %d:",E.id);
    printf("Employee name is %s:",E.name);
    printf("Employee age is %d:",E.age);
    printf("Employee salary is %f:",E.salary);

    
    return 0;
}
