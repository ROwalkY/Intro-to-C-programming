#include <stdio.h>
#include <math.h>
#define Customernum 3

double	
calculateCharges(double x){
	double charge;
	if(x<= 3.0){
		charge = 2.00;
	}else{
		
		charge = 2.00 + 0.5*(ceil(x)-3);
		charge = charge > 10.00? 10.00 : charge;
		
	}
	return charge;
}

int main(void){
	
	double hoursum,chargesum;
	
	double hourarray[Customernum];
	
	double chargearray[Customernum];
	
	printf("Enter the hours parked for %d cars: ", Customernum);
	
	scanf("%lf%lf%lf", &hourarray[0], &hourarray[1], &hourarray[2]);
	
	printf("  Car\tHours\tCharge\t\n");
	
	for(int i=1; i <= Customernum ; ++i ){
		
		chargearray[i-1]=calculateCharges(hourarray[i-1]);
		
		printf("%5d\t%5.1lf\t%5.2lf\n", i, hourarray[i-1], chargearray[i-1]);
	}
	
	for(int control = 0; control < Customernum; ++control){
		hoursum += hourarray[control];
		chargesum += chargearray[control];
	}
	printf("TOTAL\t%5.1lf\t%5.2lf\t\n", hoursum, chargesum);
	return 0;
}
