#include <stdio.h>
#include <math.h>
	int main(void){
		int number, final, reverse = 0;
		printf("Enter a number: ");
		scanf("%d",&number);
		
		if(number > 10){
			
			do{
				
				reverse = reverse + (number%10);
				
				reverse *=10;
				
				number /= 10; 
				
			
			}while(number>10);
			
			final = reverse + (number%10);
			
			printf("The reversed number is: %d\n", final );
			
		}else{
			if (number < 0){
				
				printf("Invalid input!\n");
				
			}else{

				printf("No need to reverse the number.\n");
			
			}
		}
		printf("Thank you for using the software.\n");
		
		return 0;
	}
