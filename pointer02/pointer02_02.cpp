#include <stdio.h>
void display(int *); 
int main(){
 	int n[5],t,i;
 	for(i=0;i<5;i++){
		t=i;
		do{
			if(t!=i)
				puts("Invalid number,try again...");
	 		printf("Enter number%d (65-90) : ",i+1);
	 		scanf("%d",&n[i]); t++;
		}while(n[i]<65 || n[i]>90);
	}
	display(n);
	return 0;
}
void display(int *n){
	int i=0,sum=0;
	printf("Output: ");
	while(i++<5){
		printf("%c ",*(n+5-i));
		sum+=*(n+5-i);
	}
	printf("\nAverage: %.2f",sum/5.0);
}

//Enter number1 (65-90) : 64
//Invalid number,try again...
//Enter number1 (65-90) : 65
//Enter number2 (65-90) : 72
//Enter number3 (65-90) : 77
//Enter number4 (65-90) : 83
//Enter number5 (65-90) : 91
//Invalid number,try again...
//Enter number5 (65-90) : 90
//Output: Z S M H A
//Average: 77.40

 
