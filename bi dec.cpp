#include <stdio.h>
int tobinary(int);
int toDecimal(int);

int main (){
	int bi,de;
	int n = 998;
	bi = tobinary(n);
	printf("Binary of %d = %d\n",n,bi);
	de = toDecimal(bi);
	printf("Decimal of %d = %d\n",bi,de);
	return (0);
}
int tobinary(int n){
	int d,bi=0,temp=1;
	while(n>0){
		d = n%2;          // 998%2 == 0           ->  499%2 == 1           ->  249%2 == 1
		bi += d * temp;   // bi = 0 + 0*1 = 0    |    bi = 0 + 1*10 = 10  |    bi = 10+ 1*100 = 110
	 	temp *= 10;       // 1*10 = 10          |     10*10 = 100        |     100*10 = 1000
	 	n/=2;             // 998/2 = 499      -|      499/2 = 249      -|      249/2 = 124    =>loop untill n<=0
	}
 	return bi;
}

int toDecimal(int n){
	int d,de=0,temp=1;
	while(n>0){
		d = n%10;        // 110%10 == 0         ->  11%10 == 1          ->  1%10 == 1
		de += d * temp;	// de = 0 + 0*1 = 0    |    de = 0 + 1*2 = 2   |    de = 2 + 1*4 = 6
		temp *= 2;	// 1*2 = 2            |     2*2 = 4           |     4*2 = 8
		n/=10;		// 110/10 = 11      -|      11/10 = 1       -|      1/10 = 0        = Ans bi 110 => dec 6
	}	
	return de;
}

