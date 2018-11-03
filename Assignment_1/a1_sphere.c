#include <stdio.h>
	int main(void){
		int radius;
		float Pi = 3.1415926;
		float volume;
		printf("Please enter the radius of the sphere:\n");
		scanf("%d",&radius);
		volume = (4.0f/3.0f)*Pi*(radius*radius*radius);
		printf("The volume of the sphere is: %.4f\n",volume);
		return 0;
	}
