#include <stdio.h>
	int main(void){
		char array[15];		// initiallize a array || maximum 15 characters long
		
		
			printf("Enter the characters: ");
			gets(array);		//get the characters and store them into array
			
		
		printf("\n");
		
		printf("The translation of %s is: ", array);
		
		
		int number = sizeof(array);		// get the length of array, will use it in the loop control 
		
		if(number<=15){
			for(int control = 0 ; control < number; control++ ){	//array start at 0 to 14
				switch(array[control]){								//
					case 'A':			// Using the characters in the array to match those numbers
					case 'B':
					case 'C':
						printf("2");
						break;
					case 'D':
					case 'E':
					case 'F':
						printf("3");
						break;
					case 'G':
					case 'H':
					case 'I':
						printf("4");
						break;
					case 'J':
					case 'K':
					case 'L':
						printf("5");
						break;
					case 'M':
					case 'N':
					case 'O':
						printf("6");
						break;
					case 'P':
					case 'R':
					case 'S':
						printf("7");
						break;
					case 'T':
					case 'U':
					case 'V':
						printf("8");
						break;
					case 'W':
					case 'X':
					case 'Y':
						printf("9");
						break;
				}
						
			}
		}else{
			printf("The input character is too long");		//The character is too long 
															//The array cannot store the whole word.
		}
		printf("\n");
		return 0;

	}
	
