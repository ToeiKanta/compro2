#include<stdio.h>
struct employee{
	char id[6];
	char name[21];
	char department[16];
	float salary;
};
int main(){
	struct employee emp;
	puts("Employee...");
	printf("ID: ");scanf("%s",emp.id);
	printf("Name: ");scanf(" %[^\n]",emp.name);
	printf("Department: ");scanf(" %s",emp.department);
	printf("Salary: ");scanf("%f",&emp.salary);
	printf("-------------------------------------------------------------------");
	printf("\n%-10s%-25s%-20s%10s\n","ID","Name","Department","Salary");
	printf("-------------------------------------------------------------------");
	printf("\n%-10s%-25s%-20s%10.2f\n",emp.id,emp.name,emp.department,emp.salary);
	printf("-------------------------------------------------------------------\n");
	return 0;
}

//Employee...
//ID: 12345
//Name: Anuree Yoodee
//Department: IT
//Salary: 25500
//-------------------------------------------------------------------
//ID        Name                     Department              Salary
//-------------------------------------------------------------------
//12345     Anuree Yoodee            IT                    25500.00
//-------------------------------------------------------------------
