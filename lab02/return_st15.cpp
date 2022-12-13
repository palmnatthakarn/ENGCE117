#include <stdio.h>

char *GetText();

int main(){
	char *str;
	str = GetText();
	printf("\n%s\n", str);
	return 0;
}

char *GetText(){
	char *text = new char[15];
	gets(text);
	return text;
}

