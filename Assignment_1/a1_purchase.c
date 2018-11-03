#include <stdio.h>
	int main(void){
		int itemnumber, month, day, year;
		float unitprice;
		printf("Enter item number: ");
		scanf("%d",&itemnumber);		/*Itemnumber output*/
		
		printf("Enter unit price: ");
		scanf("%f",&unitprice);		/*Unit price output*/    

		printf("Enter purchase date (mm/dd/yyyy): ");
		scanf("%d/%d/%d", &month, &day, &year);		/*Date Output*/
		
		printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
		printf("%d\t$ %.2f\t%d/%d/%d",itemnumber,unitprice,month,day,year);
		return 0;
	}
