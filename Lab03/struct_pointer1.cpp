#include <stdio.h>
#include <string.h>

struct person
{
   char name[20];	
   int age;
   float weight;
};

int main(){
   
   struct person *personpt, person1;
   personpt = &person1;
   
   printf("Enter name: ");
   scanf("%s", &personpt->name);
   
   printf("Enter age: ");
   scanf("%d", &personpt->age);
   
   printf("Enter weight: ");
   scanf("%f", &personpt->weight);
  
   printf("Show: ");
   printf("Name: %s\n", personpt->name);
   printf("      Age: %d\n", personpt->age);
   printf("      weight: %f\n", personpt->weight);
   
   return 0;
}
