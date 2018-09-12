//How many number (2-5): 2
//OK...
//--- part 2 ---
//String 1 = asd asd
//String 2 = asd asdasd
//--- part 3 ---
//String 1 = "asd asd" : have 6 digits
// = > *sd *sd
//String 2 = "asd asdasd" : have 9 digits
// = > *sd *sd*sd

#include <stdio.h>
#include <string.h>
#include <ctype.h>
void showVowel(char []);
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
		printf("String %d = ",i+1);
		fflush(stdin);
		scanf("%[^\n]",str[i]);
	}
	puts("--- part 3 ---");
	for(int i=0;i<n;i++) {
		printf("String %d = \"%s\" : ",i+1,str[i]);
		showVowel(str[i]);
		printf("\n");
	}
	return 0;
}

void showVowel(char str[]){
	int ch,count=0;
	for(int i=0;str[i] != '\0';i++){
		if(str[i]!= ' ')
			count++;
	}
	if(count != 0){
		printf("have %d digits",count);
		for(int i=0;str[i] != '\0';i++){
			ch = toupper(str[i]);
			if(ch== 'A' || ch== 'E' || ch== 'I' || ch== 'O' || ch== 'U'){
				str[i] = '*';
			}
		}
		printf("\n = > %s",str);
	}
	else
		printf("Not Vowel");
}

