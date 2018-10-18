#include<stdio.h>
struct employee{
	char id[6],name[21],department[16];
	float salary;
};
int main(){
	int num, i=0;
	do{
		printf("How many employee (1-5): ");
		scanf("%d",&num);
	}while(num<1 || num>5);
	struct employee emp[num];
	while(i++<num){
		printf("\nEmployee %d.\n",i);
		printf("ID: ");scanf("%s",emp[i-1].id);
		printf("Name: ");scanf(" %[^\n]",emp[i-1].name);
		printf("Department: ");scanf(" %s",emp[i-1].department);
		printf("Salary: ");scanf("%f",&emp[i-1].salary);
	}
	printf("\n-------------------------------------------------------------------");
	printf("\n%-10s%-25s%-20s%10s\n","ID","Name","Department","Salary");
	printf("-------------------------------------------------------------------");
	i=0;
	while(i++<num)
		printf("\n%-10s%-25s%-20s%10.2f",emp[i-1].id,emp[i-1].name,emp[i-1].department,emp[i-1].salary);
	printf("\n-------------------------------------------------------------------\n");
	return 0;
}

//Employee 1.
//ID: 12345
//Name: Anuree Yoodee
//Department: IT
//Salary: 25500
//
//Employee 2.
//ID: 55555
//Name: Somsak Madee
//Department: Tools
//Salary: 28000
//-------------------------------------------------------------------
//ID        Name                     Department              Salary
//-------------------------------------------------------------------
//12345     Anuree Yoodee            IT                    25500.00
//
//55555     Somsak Madee             Tools                 28000.00
//-------------------------------------------------------------------
