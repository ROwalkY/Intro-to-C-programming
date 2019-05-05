#include <stdio.h>
#include <math.h>

long
polynomial(int x){
	long sum;
	sum = 3 * pow(x,5) + 2 * pow(x, 4) - 5 * pow(x,3) - pow(x,2) + 7*x -6;
	return sum;
}

int main(void){
	
	int n;
	
	printf("Please enter the value of x: ");
	
	scanf("%d", &n);
	
	printf("The value of the polynomial is: %d", polynomial(n) );
	
	return 0;
}
