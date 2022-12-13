#include <stdio.h>
void GetText( char *text );

int main(){
	char str[10];
	GetText(str) ;
	printf("\n%s\n", str);
	return 0;
}

void GetText( char *text ){
	gets(text);
}

