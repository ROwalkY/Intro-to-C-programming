#include <stdio.h>
	int main(void){ 
		int enter,i,j;
		printf("Enter the number(1,2,3,4): ");
		scanf("%d",&enter);
		switch (enter) {
			case 1: 
				i=5;
				j=++i*3-2;
				printf("%d %d", i, j);
				break; /*6 16*/    
				
			case 2: 
				i=5;
				j=3-2*i++;
				printf("%d %d",i,j);
				break;    //6 -7
			
			case 3:
				
				i=7;
				j=3*i-- + 2;
				printf("%d %d",i,j);
				break;		//6 23
			
			case 4:
				i=7;
				j=3+ --i*2;
				printf("%d %d",i,j);
				break;		//6 15
			
			default:
				printf("Enter the right value");
				break;
		 
		}
		return 0;
   }
