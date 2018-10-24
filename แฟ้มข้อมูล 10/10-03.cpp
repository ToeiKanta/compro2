#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char name[20],gender;
	int age;
	float salary;
}CUSTOMER;
	
int main(){
	CUSTOMER cust;
	printf("Input name: ");scanf(" %s",cust.name);
	printf("Input gender: ");scanf(" %c",&cust.gender);
	printf("Input age: ");scanf("%d",&cust.age);
	printf("Input salary: ");scanf("%f",&cust.salary);
	FILE *fp;
	fp = fopen("mydata.dat","a");
	fwrite(&cust,sizeof(CUSTOMER),1,fp);
	fclose(fp);
	return 0;
}

	
