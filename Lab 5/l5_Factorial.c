#include <stdio.h>
	int main(void){
		int number, value, factorial;
		do{
			
			printf("Enter a positive integer (or -ve integer to exit) : ");
			
			scanf("%d", &number);
			
			value = number;
			
			factorial = 1;
			
			if(number >= 0)
			{
			
				for(value = number; value >0 ; value--){
				
					factorial *= value ;
				
				}
			
				factorial = number == 0 ? 1 : factorial ;
			
				printf("Factorial of %d is %d\n", number , factorial);
			}
		}while( number >= 0 );
		
		printf("Thank you for using my software :)-");
		
		return 0;
	}
