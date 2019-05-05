#include <stdio.h>

int
num_digits(int n)
{
	int count;
	while(n > 0){
		count++;
		n/=10;
	}
	return count;
}

int main(void)
{
	int number;
	
	printf("Enter a positive integer: ");
	
	scanf("%d", &number);
	
	if(number > 0)
	{
		printf("The number of the digit(s) : %d\n", num_digits(number) );
	}
	else
	{
		printf("The input number is not a positive integer\n");
	}
	return 0;
}

