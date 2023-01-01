#include <stdio.h>
int _add(int a, int b) { 
  return a + b; 
  }
int _operation(int a, int b, int (*function)(int, int)){
  return (*function)(a, b);
}
int main(){
  printf("==> %d\n", _operation(20, 10, _add));
  return 0;
}
