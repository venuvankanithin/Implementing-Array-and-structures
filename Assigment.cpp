#include <stdio.h>

struct employee{
char Name[15];
char employeeID[10];
int experience;
float salary
;

};

int main()
{
    struct employee E1;
    struct employee E2;
    struct employee E3;
    struct employee E4;
    struct employee E5;

    printf("Enter Name,ID,Experience,Salary of employee 1:\n");
    gets(E1.Name);
    gets(E1.EmployeeID);
    scanf("%d",&E1.experience);
    scanf("%f",&E1.salary);
    printf("Details of Employee 1 are:\n Name:%s\n ID:%s\n Years of experience:%d\n
    salary:%f\n",E1.Name,E1.EmployeeID,E1.Experience,E1.Salary);

    printf("Enter  Name,ID,Experience years,Salary of employee 2:\n");
    gets(E2.Name);
    gets(E2.EmployeeID);
    scanf("%d",&E2.Experience);
    scanf("%f",&E2.salary);
    printf("Details of Employee 2 are:\n Name:%s\n ID:%s\n Years of experience:%d\n
    salary:%f\n",E2.Name,E2.EmployeeID,E2.Experience,E2.Salary);

    printf("Enter Name,ID,Experience,Salary of employee 3:\n");
    gets(E3.Name);
    gets(E3.EmployeeID);
    scanf("%d",&E3.Experience);
    scanf("%f",&E3.salary);
    printf("Details of Employee 3 are:\n Name:%s\n" ID:%s\n Years of experience:%d\n
    salary:%f\n",E3.Name,E3.EmployeeID,E3.Experience,E3.Salary);

    printf("Enter Name,ID,Experience,Salary of employee 4:\n");
    gets(E4.Name);
    gets(E4.EmployeeID);
    scanf("%d",&E4.Experience);
    scanf("%f",&E4.salary);
    printf("Details of Employee 4 are:\n Name:%s\n ID:%s\n Years of experience:%d\n
    salary:%f\n",E4.Name,E4.EmployeeID,E4.Experience,E4.Salary);

    printf("Enter Name,ID,Experience years,Salary of employee 5:\n");
    gets(E5.Name);
    gets(E5.EmployeeID);
    scanf("%d0",&E5.experience);
    scanf("%f",&E5.salary);
    printf("Details of Employee 5 are:\n Name:%s\n ID:%s\n Years of experience:%d\n
    salary:%f\n",E5.Name,E5.EmployeeID.Experience,E5.Salary);

    return 0;
}

