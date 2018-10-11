#include <stdio.h>

int main(){
	int n[10] = {5,44,6,21,33,24,88,56,67,15};
	
	printf("Original data in array n = ");
	for(int i=0;i<10;i++)
		printf("%d ",n[i]);
	//Sort
	for (int i = 0; i < 10-1; ++i) 
        for (int j = i + 1; j < 10; ++j)
            if (n[i] > n[j]) 
            {
                int a =  n[i];
                n[i] = n[j];
                n[j] = a;
            }
	printf("\nSorted data in array n = ");
	for(int i=0;i<10;i++)
		printf("%d ",n[i]);
	int nc=0,count=0;
   	printf("\nEnter a number to be searched: ");
   	scanf("%d",&nc);
   	for(int i=0;i<10;i++)
		if(n[i]== nc){
			printf("%d forund in n[%d]\n",nc,i);
			count++;
		}
			
	if(count == 0)
		printf("%d not forund\n",nc);
	return 0;
}
//Original data in array n = 5 44 6 21 33 24 88 56 67 15
//Sorted data in array n = 5 6 15 21 24 33 44 56 67 88
//Enter a number to be searched: 41
//41 not forund
