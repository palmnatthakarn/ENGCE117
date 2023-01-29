//นางสาวณัฐกานต์ แก้วสามต่อ 65543206010-2 sce1
//https://youtu.be/HFEArR8uqiQ
#include <stdio.h>
#include <string.h>

struct yearsNode {
    int year;
    struct yearsNode *next;
};

struct yearsNode *AddNode( struct yearsNode **walk,int y); // prototype
void ShowAll( struct yearsNode *walk );// prototype
void UpdateNode(struct yearsNode *walk, int y1, int y2); // prototype
void SwapNode(struct yearsNode **walk, int ya, int yb); // prototype
//void ShowBack(struct yearsNode **walk); // prototype


int main(){
    struct yearsNode *start, *now;
	start = NULL;
    now = AddNode(&start,2000 ); //ShowAll(start);
    now = AddNode(&start,2001); //ShowAll(start);
    now = AddNode(&start,2004); //ShowAll(start);
    now = AddNode(&start,2003); ShowAll(start);
    UpdateNode(start,2004,2002); ShowAll(start);
    //ShowBack(&start); ShowAll(start);
	SwapNode(&start, 2001,2003); ShowAll(start);
    
    
    return 0;
} // end function

void ShowAll( struct yearsNode *walk ){
    while (walk != NULL)
    {
        printf("%d->", walk->year);
        walk = walk->next;
    } // end while
    printf("NULL\n");
    printf("----------------------------\n");  
	
} // end function


struct yearsNode *AddNode( struct yearsNode **walk,int y){
    while( *walk != NULL ){
        walk = &(*walk)->next;
    }

    *walk = new struct yearsNode;
    (*walk)->year = y;
    (*walk)->next = NULL;
    return *walk;
} // end function


// update positon 3
void UpdateNode(struct yearsNode *walk, int y1,int y2){
    while (walk->next != NULL)
    {
        if (walk->year == y1)
        {
            walk->year = y2;
        }
       walk = walk->next;
    }   
}// end function

/*void ShowBack (struct yearsNode **walk){
	struct yearsNode *now = *walk , *node1 = NULL , *next = NULL;
    
	while(now != NULL){
		next = now ->next;
		now ->next = node1;
		node1 = now ;
		now  = next;
	}
    *walk = node1;
}// end function*/


void SwapNode(struct yearsNode **walk, int ya, int yb){
    
    if((ya,yb)==0){
		return;
	}
   		 
	struct yearsNode *prevY1 = NULL, *now1= *walk;
    while(now1 && now1->year != ya){
    	prevY1 = now1;
    	now1 = now1->next;
    	
	}
	struct yearsNode *prevY2 = NULL, *now2= *walk;
    while(now2 && now2->year != yb){
    	prevY2 = now2;
    	now2 = now2->next;
    	
	}
	if (prevY1 == NULL || prevY2 == NULL){
		return;
	}
		 
		 
	if (prevY1 != NULL){
		prevY1->next = now2;	
	}
	else{
		*walk=now2;	
	}
		 
	
	if (prevY2 != NULL){
		prevY2->next = now1;
	}
	else{
		*walk=now1;
	}
		 
		 
	struct yearsNode *temp = now2->	next;
	now2->next = now1->next;
	now1->next = temp;
	
}// end function
