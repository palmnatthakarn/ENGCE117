#include <stdio.h>
#include <string.h>

struct laptop
{
    char name[20];
    char brand[10];
    int price;
    
};
typedef struct laptop lt;

void printlaptop( struct laptop *lp );
int main(){
	lt lp1;
	strcpy(lp1.brand, "ACER");
    strcpy(lp1.name, "Aspire 5");
    printlaptop(&lp1);
	printf("brand:%s | name:%s | price:%d bath\n", lp1.brand, lp1.name, lp1.price);
	
    return 0;
}

void printlaptop( struct laptop *lp ) {
  	lp->price = 14990;
}
