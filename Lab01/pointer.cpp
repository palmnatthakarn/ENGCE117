#include <stdio.h>

int main(){
	int *b;
	int var = 10;
	b = &var;
	
	printf("*b = %d\n" , *b);
	
	var = 20;
	printf("*b = %d\n" , *b);
	
	*b = 30;
	printf("*b = %d\n" , *b);
	printf("var = %d\n" , var);
	
	return 0;
	
	
}
