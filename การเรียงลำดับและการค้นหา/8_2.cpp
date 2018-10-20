#include <stdio.h>
#include <string.h>
int main(){
	char str[30];
	printf("Enter a string: ");
	scanf("%s",str);
	int len = strlen(str);
	for (int i = 0; i < len-1; i++) {
      	for (int j = i+1; j < len; j++) {
         	if (str[i] > str[j]) {
	            char temp = str[i];
	            str[i] = str[j];
	            str[j] = temp;
        }
	}
   }
   printf("Output sorting a string: %s",str);
	return 0;
}
//Enter a string: suranaree
//Output sorting a string: aaeenrrsu
