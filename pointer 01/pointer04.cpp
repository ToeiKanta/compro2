#include<stdio.h>
int main(){
	int size,i=0;
	do{
		printf("How many character (4-8) : ");
		scanf("%d",&size);
	}while(size<4 || size>8);
	char ch[size],*pch;
	pch = &ch[0];
	while(pch<&ch[size]){
		do{
			printf("ch[%d] : ",i++);
			scanf(" %c",pch);
			if(*pch<'A' || *pch>'Z')i--;
		}while(*pch<'A' || *pch>'Z');
		pch++;
	}
	//vowel
	pch = ch;
	i=0;
	printf("\nvowels: ");
	while(pch<&ch[size]){
		if(*pch=='A'||*pch=='E'||*pch=='I'||*pch=='O'||*pch=='U'){
			printf( "%c ",*pch);
			i++;
		}	
		pch++;
	}
	printf("\nThe number of vowels = %d\n",i);
	//consonants
	pch = ch;
	i=0;
	printf("\nconsonants: ");
	while(pch<&ch[size]){
		if(*pch!='A'&&*pch!='E'&&*pch!='I'&&*pch!='O'&&*pch!='U'){
			printf("%c ",*pch);
			i++;
		}	
		pch++;
	}
	printf("\nThe number of consonants = %d\n",i);
	return 0;
}

//How many character (4-8) : 20
//How many character (4-8) : 2
//How many character (4-8) : 4
//ch[0] : A
//ch[1] : b
//ch[1] : B
//ch[2] : F
//ch[3] : K
//
//vowels: A
//The number of vowels = 1
//
//consonants: B F K
//The number of consonants = 3
