//How many number (2-5): 2
//OK...
//--- part 2 ---
//Name 1 = Toei Toei2
//Name 2 = Kob  Kob2 Kob3
//--- part 3 ---
//Name 1 = Toei Toei2
//Last name is = Toei2
//Number of lastname = 5
//Reverse last name is = 2ieoT
//
//Name 2 = Kob  Kob2 Kob3
//Last name is = Kob2 Kob3
//Number of lastname = 8
//Reverse last name is = 3boK 2boK

#include <stdio.h>
#include <string.h>
void show(char [],int);
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
	char str[n][30];
	for(int i=0;i<n;i++){
		printf("Name %d = ",i+1);
		fflush(stdin);
		scanf("%[^\n]",str[i]);
	}
	puts("--- part 3 ---");
	for(int i=0;i<n;i++) {
		show(str[i],i);
	}
	return 0;
}

void show(char str[],int i){
	char last[30];
	int start =0,pos=0;
	int len=0;
	printf("Name %d = %s \n",i+1,str);
	for(int i=0;str[i] != '\0';i++){
		if(start == 1) {
			last[pos++] = str[i];
			if(str[i] != ' ') len++;
		}
		if(str[i] == ' ' && str[i+1] != ' '){
			start=1;
		}
	}
	printf("Last name is = %s\n",last);
	printf("Number of lastname = %d\n",len);
	
	char revLast[30] = {0};
	pos=0;
	for(int i=0;last[i] != '\0';i++){
		revLast[pos++] = last[strlen(last)-1-i];
	}
	printf("Reverse last name is = %s\n",revLast);
	printf("\n");
		
}



