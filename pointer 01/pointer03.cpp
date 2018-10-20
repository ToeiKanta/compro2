#include<stdio.h>
int main(){
	int odd[]={1,3,5,7,9},*podd,even[]={2,4,6,8,10},*peven;
	podd = odd;
	peven = &even[4];
	int i=0;
	puts("Output: Array_odd x Array_even");
	while(podd<=&odd[4]){
		printf("Round %d: %d x %d = %d\n",++i,*podd,*peven,*podd * *peven);
		podd++;
		peven--;
	}
	return 0;
}

//Output: Array_odd x Array_even
//Round 1: 1 x 10 = 10
//Round 2: 3 x 8 = 24
//Round 3: 5 x 6 = 30
//Round 4: 7 x 4 = 28
//Round 5: 9 x 2 = 18
