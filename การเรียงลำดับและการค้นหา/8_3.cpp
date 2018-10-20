#include <stdio.h>
#include <string.h>
int main(){
	int n;
	printf("How many of names (2-5): ");
	scanf("%d",&n);
	char str[n][8];
	for(int i=0;i<n;i++){
		printf("Enter names %d: ",i+1);
		scanf(" %s",str[i]);
	}
	char str2[n][8],temp[8];
	
	for(int i=0;i<n;i++){
		strcpy(str2[i],str[i]);
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(str2[i][0]>str2[j][0]){
				strcpy(temp,str2[j]);
				strcpy(str2[j],str2[i]);
				strcpy(str2[i],temp);
			}
		}
	}
	puts("-----------------------------------");
	printf("%-20s%-20s\n","Original names","Sorted names");
	for(int i=0;i<n;i++)
		printf("%-20s%-20s\n",str[i],str2[i]);
	puts("-----------------------------------");
	printf("Search a name start with: ");
	char c;
	int count = 0;
	scanf(" %c",&c);
	for(int i=0;i<n;i++)
		if(str[i][0] == c){
			printf("%s\n",str[i]);
			count++;
		}
	printf("Total found = %d\n",count);
	return 0;
}
//How many of names (2-5): 4
//Enter names 1: Somsak
//Enter names 2: Mana
//Enter names 3: Aree
//Enter names 4: Bonnsak
//-----------------------------------
//Original names      Sorted names
//Somsak              Aree
//Mana                Bonnsak
//Aree                Mana
//Bonnsak             Somsak
//-----------------------------------
//Search a name start with: M
//Mana
//Total found = 1
