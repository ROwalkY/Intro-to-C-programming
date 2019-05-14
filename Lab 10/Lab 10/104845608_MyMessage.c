#include <stdio.h>

#include <stdlib.h>

#define Filename "104845608_MyMessage.txt"

int main(int argc, char * argv[])
{
	int ch;
	
	FILE *p_file;
	
	p_file = fopen(Filename,"r");
	
	if(p_file == NULL){
		
		exit(EXIT_FAILURE);
		
	}
	
	while ((ch = getc(p_file)) != EOF ) {
		
		putchar(ch);
		
	}
	
	fclose(p_file);
	
	return 0;
}
