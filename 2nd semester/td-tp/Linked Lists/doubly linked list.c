#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
    struct node *previous;
};
     
    void add_at_beg(struct node** head,int x){
    struct node* NewElement=malloc(sizeof(struct node*));
    NewElement->previous=NULL; 
    NewElement->data=x;
if (*head==NULL) {
    NewElement->next=NULL;
    *head=NewElement; }
    else {
        NewElement->next=*head;
        (*head)->previous=NewElement;
        *head=NewElement; 
    }
}
    struct node* add_at_beg2(struct node* head,int x){
        struct node* NewElement=malloc(sizeof(struct node*));
        NewElement->previous=NULL;
        NewElement->data=x;
        if (head==NULL) {
        NewElement->next=NULL;
        head=NewElement; }
        else {
            NewElement->next=head;
            head->previous=NewElement;
            head=NewElement;
        }
        return head;
    }

     void add_at_end(struct node* head,int x){
        struct node* NewElement=malloc(sizeof(struct node*));
        NewElement->next=NULL;
        NewElement->data=x;
        if (head==NULL) {
           NewElement->previous=NULL;
           head=NewElement; }
        else {
            struct node* ptr=head;
            while(ptr->next!=NULL) ptr=ptr->next;
              NewElement->previous=ptr;
              ptr->next=NewElement;
        }
     }
     
     void deleteFirst(struct node** head){
         if (*head==NULL) printf("the list is empty");
         else { struct node* ptr=*head;
         (*head)=(*head)->next;
          free(ptr);
          (*head)->previous=NULL; }
         }

      void deleteFirst2(struct node** head){
        if (*head==NULL) printf("the list is empty");
         else {
         (*head)=(*head)->next;
          free((*head)->previous);
          (*head)->previous=NULL; }
      }   

      void deleteLast(struct node* head){ 
        if (head==NULL) printf("the list is empty");
        else { 
           struct node* ptr=head;
           while (ptr->next->next!=NULL) ptr=ptr->next;
           free(ptr->next);
           ptr->next=NULL; }
           }
      
       int countX(struct node* head,int X){
        int count=0;
        if (head==NULL) printf("the list is empty");
        else { 
            struct node* ptr=head;
            while (ptr!=NULL){
            if (ptr->data==X) count++;
             ptr=ptr->next;
        }
       }  return count;
         }
         
      void display(struct node* head){
         if (head ==NULL) printf("the list is empty\n");
        struct node* ptr=head;
        while (ptr!=NULL){
            printf(" [%d] ",ptr->data);
            ptr=ptr->next;
        }
      }
       
       int exist(struct node* head,int x){
        if (head==NULL){
         printf("the list is empty");
           return 0;   }
        else {
            int a=0;
            while ((head!=NULL) && (a==0)){
             if (head->data==x) a=1;
              head=head->next;
            } return a;

        }
          }

          int count(struct node* head){
            int count=0; 
            if (head==NULL) return count;
            else{
                struct node* ptr=head;
                while (ptr!=NULL){
                    count++;
                    ptr=ptr->next;
                }
              return count;
            }
          }
       


int main() {
    struct node* head=NULL;
    int choice=8;
    int x;
    add_at_beg(&head,2);
    add_at_end(head,3);
    while (choice!=0){
        printf("\n");
  display(head);
  printf("\t 1 for adding a node in the beginning \n");
  printf("\t 2 for adding a node in the end \n");
  printf("\t 3 for seeing if the element exists or not \n");
  printf("\t 4 for deleting the first node \n");
  printf("\t 5 for deleting the last node \n");
  printf("\t 6 for counting how many nodes exist \n");
  printf("\t 7 for counting how many time x exists \n");
  printf("\t 8 for displaying the list \n");
  printf("\t 0 for ending the program \n");
  scanf("%d",&choice);
  system("clear");  
  switch (choice){
  case 1:
  	printf("\nEnter an element to insert it ");
  	scanf("%d",&x);
  	add_at_beg(&head,x);
  	break;
  case 2:
  	printf("\nEnter an element to insert it");
  	scanf("%d",&x);
  	add_at_end(head,x);
  	break;  	
 case 3:
   	printf("\nEnter an element to search for it ");
	scanf("%d",&x);
	int result=exist(head,x);
	if(result==0) printf(" \n %d doesn't exist in the list",x);
	else printf("\n %d exists in the list",x);
  	break; 
 case 4:
   deleteFirst2(&head);
   printf("first node deleted\n");
    break;
 case 5:
    deleteLast(head);
    printf("last node deleted\n");
    break;
 case 6:
    printf("\n there's %d nodes in this list",count(head));
    break;
 case 7: 
    printf("\nenter the element x");
    scanf("%d",&x);
    printf("\n %d exists %d times\n",x,countX(head,x));
    break;
 case 8:
    display(head);
 case 0:
 	break;
 	}  		
    }

   

    return 0;
}
