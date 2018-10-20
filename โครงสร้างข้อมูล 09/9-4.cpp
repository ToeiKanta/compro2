#include<stdio.h>
int sum_price(float ,int);
struct orders{
	char name[21];
	float price;
	int qty;
};
int main(){
	int num, i=0;
	float total=0.0;
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
	printf("\n%-5s%-25s%10s%5s%20s\n","No.","Product Name","Price","Qty","Total");
	printf("-------------------------------------------------------------------");
	i=0;
	while(i++<num){
		float sum = sum_price(ord[i-1].price,ord[i-1].qty);
		total+=sum;
		printf("\n%-5d%-25s%10.2f%5d%20.2f",i,ord[i-1].name,ord[i-1].price,ord[i-1].qty,sum);
	}
	printf("\n-------------------------------------------------------------------\n");
	printf("%45s%20.2f","Total =",total);
	printf("\n-------------------------------------------------------------------\n");
	return 0;
}

int sum_price(float price,int qty){
	return price*qty;
}
//How many orders (1-5): 6
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
//No.  Product Name                  Price  Qty               Total
//-------------------------------------------------------------------
//1    Dell                       35000.75   20           700015.00
//2    HP                         45000.00   30          1350000.00
//3    Acer                       27000.00   15           405000.00
//-------------------------------------------------------------------
//                                      Total =          2455015.00
//-------------------------------------------------------------------
