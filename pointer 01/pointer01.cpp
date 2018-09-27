#include<stdio.h>
int main(){
	int size=3;
	do{
		if(size<2 || size>5)
			puts("!!! Invalid Number !!!");
		printf("How manu number (2-5) : ");
		scanf("%d",&size);
	}while(size<2 || size>5);
	int n[size],*p;
	p = n;
	int i=0;
	while(p<&n[size]){
		printf("n[%d]: ",i++);
		scanf("%d",p++);
	}
	p -= size;
	i=0;
	while(p<&n[size]){
		printf("The value of n[%d] is %d and the address of n[%d] is at 0x%x\n",i,*p,i,p);
		p++;
		i++;
	}
	return 0;
}

//How manu number (2-5) : 6
//!!! Invalid Number !!!
//How manu number (2-5) : 5
//n[0]: 10
//n[1]: 20
//n[2]: 30
//n[3]: 40
//n[4]: 50
//The value of n[0] is 10 and the address of n[0] is at 0x62fdd0
//The value of n[1] is 20 and the address of n[1] is at 0x62fdd4
//The value of n[2] is 30 and the address of n[2] is at 0x62fdd8
//The value of n[3] is 40 and the address of n[3] is at 0x62fddc
//The value of n[4] is 50 and the address of n[4] is at 0x62fde0
