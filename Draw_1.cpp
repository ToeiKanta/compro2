/*
      //running
	4
	c d e f
	y z a
	x...x
	.o.o.
	..o..
	.o.o.
	x...x
*/
#include <stdio.h>

int sumOddvalue(int);
void show(char,int);
void block(int);

int main(){
	printf("%d\n",sumOddvalue(384122));
	show('c',4);
	show('y',3);
	block(5);	
}
int sumOddvalue(int n){
	int sum=0,temp;
	while(n > 0){
		temp = n%10;
		if(temp%2 != 0 ){
			//only odd number can pass through to this process.
			sum += temp;
		}
		n/=10;
	}
	return sum;
}
void show(char ch,int n){
	int count=1;
	while(count<=n){
		printf("%c ",ch++); // ch = ch+1 after printf 
		if(ch == 'z'+1) ch = 'a'; // after ch == 'z' we wil back to 'a'
		count++;
	}
	printf("\n");
}

void block(int n){
	int r,c; // r=row , c=columm
	//row
	for(r=1;r<=n;r++){
		//collumm
		for(c=1;c<=n;c++){
			//draw from outside to inside
				//draw 'x' and '.' at row 1 and 5
				if(r==1 || r==n){
					if(c==1 || c==n)
						printf("x");
					else 
						printf(".");
				}else
				//draw '.' at left and right border
				if(c==1 || c==n){
					printf(".");
				}else
				//draw '.' and 'o' inside border
				if(r==c ||r+c == n+1){
					// if(r==c)   //   if(r+c == n+1)
					//   o...     //     ...o
					//   .o..     or     ..o.
					//   ..o.     //     .o..
					//   ...o     //     o...
					printf("o");
				}else 
					printf(".");
		}
		printf("\n"); // new line after last collumm
	}
}

