#include <stdio.h>
	int main(void){
		int number,i,j,k;
		printf("Enter the number and it will show the answer: ");
		scanf("%d",&number);
		switch(number){
			case 1: 
				i=3; j=4; k=5;
				printf("%d ", i<j||++j<k);
				printf("%d %d %d",i,j,k);
				break;//1 3 4 5
			
			case 2:
				i=7; j=8; k=9;
				printf("%d ",i-7&&j++<k);
				printf("%d %d %d",i,j,k);
				break;//0 7 8 9
			
			case 3:
				i=7; j=8; k=9;
				printf("%d ",(i=j)||(j=k));
				printf("%d %d %d",i,j,k);
				break;//1 8 8 9
			
			case 4:
				i=1; j=1; k=1;
				printf("%d ",++i||++j&&++k);
				printf("%d %d %d",i,j,k);
				break;//1 2 1 1
		}
   }
