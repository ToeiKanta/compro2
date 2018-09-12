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
	char first[n][30],last[n][30];
	for(int i=0;i<n;i++){
		printf("Name %d = ",i+1);
		fflush(stdin);
		scanf("%s %s",first[i],last[i]);
	}
	puts("--- part 3 ---");
	for(int i=0;i<n;i++) {
		printf("Name %d = %s %s\n",i+1,first[i],last[i]);
		printf("Last name is = %s\n",last[i]);
		printf("Number of lastname = %d\n",strlen(last[i]));
		printf("\n");
	}
	return 0;
}
