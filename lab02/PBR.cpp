#include <stdio.h>
void GetText(char *text);

int main() {
  char str[20];
  printf ("Enter a text :");
  gets(str); 
  GetText(str);
  return 0;
}

void GetText(char *text) { 
    printf ("Text : %s",text);
}
