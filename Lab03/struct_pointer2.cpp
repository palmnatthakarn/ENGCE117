#include <stdio.h>
#include <string.h>

struct favfood{
    char name[20];
    char nationality[20];
    
    
};
void food(struct favfood *Food);

int main(){
    struct favfood ffood;
    food(&ffood);
    printf("%s is your favorite food.", ffood.name);
    printf("Its nationlity is %s.", ffood.nationality);
    
}
void food(struct favfood *Food){
    printf("what food do you like? :");
    gets(Food->name);
    printf("what nationality :");
    gets(Food->nationality);
   
}
