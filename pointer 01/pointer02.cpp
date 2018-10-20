#include<stdio.h>
int main(){
	int size;
	do{
		printf("Input integer number (1-99) : ");
		scanf("%d",&size);
	}while(size<2 || size>5);

	int x[size],*pn;
	int i=1;
	while(i<=size){
		x[i-1] = size*i++;
	}
	pn = x;
	printf("Output: ");
	while(pn<&x[size]){
		printf("%d ",*pn);
		pn++;
	}
	return 0;
}

//Input integer number (1-99) : 0
//Input integer number (1-99) : 5
//Output: 5 10 15 20 25
