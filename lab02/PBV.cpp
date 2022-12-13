#include <stdio.h>
#include <string.h>

char *GetText();

int main(){
	char str[10];
	strcpy( str, GetText() );
	printf("\n%s\n", str);
	return 0;
}

char *GetText(){
	char *text = new char[10];
	gets(text);
	return text;
}

