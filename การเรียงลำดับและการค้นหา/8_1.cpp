#include <stdio.h>
int main(){
	int num;
	do{
		printf("Enter a numbers (2-10): ");
		scanf("%d",&num);
	}while(num<2 || num>10);
	
	int n[num];
	for(int i = 0;i<num;i++){
		printf("Number %d: ",i+1);
		scanf("%d",&n[i]);
	}
		
	printf("Original order of data: ");
	for(int i = 0;i<num;i++)
		printf("%d ",n[i]);
	printf("\nSorted data in ascending order: ");
	for (int i = 0; i < num; ++i) 
    {
        for (int j = i + 1; j < num; ++j)
        {
            if (n[i] > n[j]) 
            {
                int a =  n[i];
                n[i] = n[j];
                n[j] = a;
            }
        }
    }
	for(int i = 0;i<num;i++)
		printf("%d ",n[i]);
	return 0;
}

//Enter a numbers (2-10): 15
//Enter a numbers (2-10): 5
//Number 1: 7
//Number 2: 4
//Number 3: 2
//Number 4: 1
//Number 5: 3
//Original order of data: 7 4 2 1 3
//Sorted data in ascending order: 1 2 3 4 7
