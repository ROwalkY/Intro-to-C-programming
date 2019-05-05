#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int rowlength = 5, columnlength = 5;
	int row = 0, column = 0;
	int	randomnumber;
	
	int array[rowlength][columnlength];
	time_t tm;
	// Generate different random number every time
	srand((unsigned)time(&tm));
	
	/****************     main     ******************/
	for(row = 0; row < rowlength; row++){
			
			
			printf("row %d: ", row);		// print lines like: 	row 1: 
											//						row 2: 
			
			for(column = 0 ; column < columnlength ; column++){
				
				randomnumber = rand() % 24; 	// generate random number in range from 0 - 23 
				
				printf("%-3d", randomnumber);	// print the number generated like 
												//									row 1: 22 1 0 3 2 
				array [row][column] = randomnumber; 	// store those random numbers into array
				
			}
			
		printf("\n");		//When comes to the end of the line , start a new line
			
	}
	/****************     main     ******************/
	
	
	/****************     Row Totals     ******************/
	int rownumber = 0 , columnnumber = 0;
	
	int rowsum = 0;
	
	printf("Row totals: ");
	
	for(rownumber = 0; rownumber < rowlength; rownumber++){
	
		rowsum = 0;
		
		for(columnnumber = 0; columnnumber < columnlength; columnnumber++){
		
			rowsum = rowsum + array[rownumber][columnnumber];		//calculate the row values in one line
			
		}
	
		printf("%-3d", rowsum);		// print the row values of each row 
		
	
	}
	printf("\n");
	/****************     Row Totals     ******************/
	
	/****************     Column Totals     ******************/
	int columnvalue = 0, rowvalue = 0;
	
	int columnsum = 0; 
	
	printf("Column totals: ");
	
	for(columnvalue = 0; columnvalue < columnlength; columnvalue++){
		
		columnsum = 0;
		
		for(rowvalue = 0; rowvalue < rowlength; rowvalue++){
			
			columnsum = columnsum + array[rowvalue][columnvalue];
			
		}
		
		printf("%-3d", columnsum);
		
	}
	printf("\n");
	/****************     Column Totals     ******************/
	return 0;
}
