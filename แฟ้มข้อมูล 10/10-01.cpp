#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char name[20],gender;
	int age;
	float salary;
	printf("Input name: ");scanf(" %s",name);
	printf("Input gender: ");scanf(" %c",&gender);
	printf("Input age: ");scanf("%d",&age);
	printf("Input salary: ");scanf("%f",&salary);
	FILE *fp;
	fp = fopen("mydata.txt","a");
	fprintf(fp,"%-20s%-5c%-10d%-.2f\n",name,toupper(gender),age,salary);
	fclose(fp);	
	return 0;
}

	
