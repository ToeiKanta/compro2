// How many number (2-5): 3
// OK...
// --- part 2 ---
// String 1 = Facebook
// String 2 = Hello World
// String 3 = CSS HTML
// --- part 3 ---
// String 1 = "Facebook" : contain " a e o o " to vowel 4.
// String 2 = "Hello World" : contain " e o o " to vowel 3.
// String 3 = "CSS HTML " : Not Vowel

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
		ch = toupper(str[i]);
		if(ch== 'A' || ch== 'E' || ch== 'I' || ch== 'O' || ch== 'U'){
			count++;
		}
	}
	if(count != 0){
		printf("contain \" ");
		for(int i=0;str[i] != '\0';i++){
			ch = toupper(str[i]);
			if(ch== 'A' || ch== 'E' || ch== 'I' || ch== 'O' || ch== 'U'){
				printf("%c ", str[i]);
			}
		}
		printf("\" to vowel %d.",count);
	}
	else
		printf("Not Vowel");
}

