#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char name[20],gender;
	int age;
	float salary;
}CUSTOMER;
	
int main(){
	int i=0;
	CUSTOMER cust;
	FILE *fp;
	fp = fopen("mydata.dat","r");
	printf("%-5s%-20s%-10s%-15s%10s\n","No","Name","Gender","Age","Salary");
	do{
		fread(&cust,sizeof(cust),1,fp);
		printf("%-5d%-20s%-10c%-15d%10.2f\n",++i,cust.name,cust.gender,cust.age,cust.salary);
	}while(i<2);
	fclose(fp);
	return 0;
}
//No   Name                Gender    Age                Salary
//1    busaba              F         42               24000.00
//2    mongkol             M         35               18500.00
	
