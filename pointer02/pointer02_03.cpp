#include <stdio.h>

int main(){
	int n,*p,i;
	float sum=0,avg;
	do{
		printf("How many a number (3-6) : ");
		scanf("%d",&n);
	}while(n<3 || n>6);
	int n2[n];
	p = n2;
	for(i=0;i<n;i++,p++){
		do{
			printf("Enter number %d (1-50) : ",i+1);
			scanf("%d",p);
		}while(*p<1 || *p>50);
		sum+=*p;
	}
	avg = sum/n;
	printf("Average = %.2f\n",avg);
	printf("More than Average = ");
	for(i=0,p=n2;i<n;i++,p++){
		if(*p>avg)
			printf("%d ",*p);
	}
	printf("\nLess than Average = ");
	for(i=0,p=n2;i<n;i++,p++){
		if(*p<avg)
			printf("%d ",*p);
	}
	printf("\nSum of all number = %d\n",(int)sum);
	return 0;
}

//How many a number (3-6) : 0
//How many a number (3-6) : 4
//Enter number 1 (1-50) : 0
//Enter number 1 (1-50) : 45
//Enter number 2 (1-50) : 25
//Enter number 3 (1-50) : 15
//Enter number 4 (1-50) : 36
//Average = 30.25
//More than Average = 45 36
//Less than Average = 25 15
//Sum of all number = 121
