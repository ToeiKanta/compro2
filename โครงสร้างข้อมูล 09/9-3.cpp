#include<stdio.h>
struct orders{
	char name[21];
	float price;
	int qty;
};
int main(){
	int num, i=0;
	do{
		printf("How many orders (1-5): ");
		scanf("%d",&num);
	}while(num<1 || num>5);
	struct orders ord[num];
	while(i++<num){
		printf("\nOrder No.%d\n",i);
		printf("Name: ");scanf("%s",ord[i-1].name);
		printf("Price: ");scanf("%f",&ord[i-1].price);
		printf("Qty: ");scanf("%d",&ord[i-1].qty);
	}
	printf("\n-------------------------------------------------------------------");
	printf("\n%-5s%-25s%10s%10s\n","No.","Product Name","Price","Qty");
	printf("-------------------------------------------------------------------");
	i=0;
	while(i++<num)
		printf("\n%-5d%-25s%10.2f%10d",i,ord[i-1].name,ord[i-1].price,ord[i-1].qty);
	printf("\n-------------------------------------------------------------------\n");
	return 0;
}

//How many orders (1-5): 7
//How many orders (1-5): 3
//
//Order No.1
//Name: Dell
//Price: 35000.75
//Qty: 20
//
//Order No.2
//Name: HP
//Price: 45000
//Qty: 30
//
//Order No.3
//Name: Acer
//Price: 27000
//Qty: 15
//
//-------------------------------------------------------------------
//No.  Product Name                  Price       Qty
//-------------------------------------------------------------------
//1    Dell                       35000.75f        20
//2    HP                         45000.00f        30
//3    Acer                       27000.00f        15
//-------------------------------------------------------------------
