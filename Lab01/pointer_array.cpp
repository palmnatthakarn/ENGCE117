#include <stdio.h>
int main() {
  int g[2][4] = {{10, 20, 30, 40},
                 {11, 21, 31, 41}
                 };
  for (int a = 0; a < 2; a++) {
    for (int b = 0; b < 4; b++) {
      printf("%d ", g[a][b]);
    }
    printf("\n");
  }
  printf("--------------------------------\n");
  int(*u)[4] = g;
  u[1][3] = 50;
  for (int a = 0; a < 2; a++) {
    for (int b = 0; b < 4; b++) {
      printf("%d ", g[a][b]);
    }
    printf("\n");
  }
  return 0;
}
	
	
	
	
	
	
	
	

