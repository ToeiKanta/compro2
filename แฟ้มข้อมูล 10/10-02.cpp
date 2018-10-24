#include <stdio.h>
#include <stdlib.h>

int main(){
	char name[20],gender;
	int age,i=0;
	float salary;
	FILE *fp;
	fp = fopen("mydata.txt","r");
	printf("%-5s%-20s%-10s%-15s%10s\n","No","Name","Gender","Age","Salary");
	do{
		fscanf(fp,"%s %c %d %f",name,&gender,&age,&salary);
		printf("%-5d%-20s%-10c%-15d%10.2f\n",++i,name,gender,age,salary);
	}while(i<2);
	
	fclose(fp);
	return 0;
}

//No   Name                Gender    Age                Salary
//1    sitta               5         4                17500.00
//2    ratee               F         35               26000.00
