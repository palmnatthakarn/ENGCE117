#include <stdio.h>
#include <string.h>

struct laptop
{
    char name[20];
    char brand[10];
    int price;
    
};

int main()
{
    struct laptop lp1, lp2;
	
	strcpy(lp1.brand, "ACER");
    strcpy(lp1.name, "Aspire 5");
    lp1.price = 14990;
	
	strcpy(lp2.brand, "LENOVO");
    strcpy(lp2.name, " IdeaPad 5");
    lp2.price = 22490;

    printf("brand:%s | name:%s | price:%d bath\n", lp1.brand, lp1.name, lp1.price);
    printf("brand:%s | name:%s | price:%d bath\n", lp2.brand, lp2.name, lp2.price);

    return 0;
}
