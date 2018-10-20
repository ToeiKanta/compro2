//How many number (2-5): 2
//OK...
//--- part 2 ---
//Enter String[1] = Tongdee Abcde
//Enter ID[1] = B123456
//Enter String[2] = Sompong Asdfg
//Enter ID[2] = B112233
//--- part 3 ---
//  ID                name
//B123456        Tongdee Abcde
//B112233        Sompong Asdfg
#include <stdio.h>
#include <string.h>
int main(){
	int n=3;
	do{
		if(n<2 || n>5)
			printf("!!! Invalid Number !!!\n");
		printf("How many number (2-5): ");
		scanf("%d",&n);
	}while(n<2 || n>5);
	puts("OK...");
	puts("--- part 2 ---");
	char name[n][30],id[n][10];
	for(int i=0;i<n;i++){
		printf("Enter String[%d] = ",i+1);
		fflush(stdin);
		scanf("%[^\n]",name[i]);
		printf("Enter ID[%d] = ",i+1);
		fflush(stdin);
		scanf("%[^\n]",id[i]);
	}
	puts("--- part 3 ---");
	printf("  %-15s   %s\n","ID","name");
	for(int i=0;i<n;i++) {
		printf("%-15s%s\n",id[i],name[i]);
	}
	return 0;
}
