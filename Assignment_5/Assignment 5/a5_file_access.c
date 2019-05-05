#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#define MAX_SIZE 15

void PrepareData(int max, char fn[]);

int ObtainData(char fn[], float pricearray[], int itemarray[][MAX_SIZE]);

void PrintData(float pricearray[], int itemarray[][MAX_SIZE], int time);

void SortData(float pricearray[], int itemarray[][MAX_SIZE],int time);



/****************************************************************
 *																*
 *					Main Function								*
 *																*
 ****************************************************************/
int main(void){
	char fname[] = "Data_Stored.txt";
	
	float price[MAX_SIZE];
	
	int iteminfo[4][MAX_SIZE];
	
	PrepareData(MAX_SIZE,fname);
	
	int times = ObtainData(fname,price,iteminfo);
	
	PrintData(price, iteminfo, times);
	
	return 0;
}



/****************************************************************
 *																*
 *					PrepareData Function						*
 *																*
 ****************************************************************/

void PrepareData(int max, char fn[]){
	int num, itemnum, month, day,year, date;
	
	float item_price;
	
	FILE *fp;
	
	fp = fopen(fn,"w");
	
	if(fp == NULL){
		printf("Cannot open or create a file");
		exit(EXIT_FAILURE);
	}
	
	srand((unsigned)time(NULL));
	
	num = rand() %  (max - 10)  + 10;
	
	
	
	for(int i = 0; i < num; i++){
		
		itemnum = rand() % 15 + 5;
		
		item_price = rand() % 20000/100.0f;
		
		month = rand() % 12 + 1;
		
		switch(month){		//Define the number of days
			
			case 2:			
			
				day = 28;
				
				break;
				
			case 1:
			case 3:
			case 5: 
			case 7:
			case 8:
			case 10:
			case 12:
				
				day = 31;
				
				break;
			
			case 4:
			case 6:
			case 9:
			case 11:
				
				day = 30;
				
				break;
		}
		
		date = rand() % day + 1;
		
		year = rand() % 17 + 2000;
		
		fprintf(fp,"%d,%.2f,%d/%d/%d\n",itemnum,item_price, month, date, year );
		
		//Print and store the output into the file named "Data_Stored.txt" 
		
		
	}
	
	fclose(fp);
}




/****************************************************************
 *																*
 *					ObtainData Function							*
 *																*
 ****************************************************************/


int ObtainData(char fn[], float pricearray[], int itemarray[][MAX_SIZE]){
	int time = 0;
	int ch;
	FILE *fp = fopen(fn,"r");
	
	while(   !(feof(fp) ) ){
		
		fscanf(fp,"%d,%f,%d/%d/%d", &itemarray[0][time],
		
			&pricearray[time], &itemarray[1][time] , &itemarray[2][time], &itemarray[3][time]);
			
		time++;
	}
	
	fclose(fp);
	
	SortData(pricearray, itemarray, time);
	
	return time;
}




/****************************************************************
 *																*
 *					PrintData Function							*
 *																*
 ****************************************************************/


void PrintData(float pricearray[], int itemarray[][MAX_SIZE], int times){
	
	printf("Item\t\tUnit\t\tPurchase\n");
	
	printf("\t\tPrice\t\tDate\n");
	
	for(int i = 0; i < times-1 ; i++){
		
		printf("%02d\t\t%6.2f\t\t%02d/%02d/%2d\n", itemarray[0][i], pricearray[i],
		
			itemarray[1][i], itemarray[2][i], itemarray[3][i]);
		
	}
}



/****************************************************************
 *																*
 *					SortData Function							*
 *																*
 ****************************************************************/
 
 void SortData(float pricearray[], int itemarray[][MAX_SIZE],int time){
	 
	 int realtime = time - 1;
	 
	 int blocks_of_array = realtime - 1;
	 
	 for(int pass = 1 ; pass < realtime - 1; pass++){
		 
		 for(int sort = 0; sort < blocks_of_array; ++sort){
			 
			 if( itemarray[0][sort] > itemarray[0][sort + 1] ){
				 
				 //sort itemnumbers
				 
				 int holditem = itemarray[0][sort];
				 
				 itemarray[0][sort] = itemarray[0][sort + 1];
				 
				 itemarray[0][sort + 1] = holditem;
				 
				 
				 
				 float holdprice = pricearray[sort];
				 
				 pricearray[sort] = pricearray[sort + 1];
				 
				 pricearray[sort + 1] = holdprice;
				 
				 
				 int holdmonth = itemarray[1][sort];
				 
				 itemarray[1][sort] = itemarray[1][sort + 1];
				 
				 itemarray[1][sort + 1] = holdmonth;
				 
				 
				 int holdday = itemarray[2][sort];
				 
				 itemarray[2][sort] = itemarray[2][sort + 1];
				 
				 itemarray[2][sort + 1] = holdday;
				 
				 int holdyear = itemarray[3][sort];
				 
				 itemarray[3][sort] = itemarray[3][sort + 1];
				 
				 itemarray[3][sort + 1] = holdyear;
				 
			 }
			 
		 }
		 
	 }
	 
 }