#include <stdio.h>
	int main(void){
		int i = 1;
		switch(i % 3){
		case 0: printf("zero");
		case 1: printf("one");
		case 2: printf("two");
		}
		return 0; //onetwo
		
		/*for(int i = 1; i <= 128; i*=2){
		printf(" %d", i );
		}//            						 2a) 1 2 4 8 16 32 64 128
		return 0;  */
		
		/*for(int i = 9384; i>0; i /= 2){
			printf("%d ", i );
		}									//2b) 9384 4692 2346 1173 586 293 146 73 36 18 9 4 2 1
		return 0;  */
	
	/*	
		int i = 1; 
		while (i<=128){
			printf("%d ",i);
			i*=2;		// 3a)  1 2 4 8 16 32 64 128
		}		*/
	
	/*	
		int i = 9384;
		do{
			printf("%d ",i);
			i/=2;		//  3b)  9384 4692 2346 1173 586 293 146 73 36 18 9 4 2 1
		}while(i>0);	*/
	
	
	}





