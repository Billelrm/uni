#include <stdio.h>
#include <stdlib.h>
  
  struct node{
  int value;
  struct node *next;

  };
    int count(struct node *head){
      int count = 0;
      if(head == NULL) printf("the list is empty");
      struct node* ptr=head;
      while(ptr!=NULL){
         count++;
         ptr=ptr->next;
      }
      return count;
    }
     
     void print(struct node *head){
       printf("\n");
     if (head ==NULL) printf("the list is empty");
        struct node* ptr=head;
        while (ptr!=NULL)
        {  printf(" %d ",ptr->value); 
           ptr=ptr->next; 
         }}
      int nbroc(struct node *head,int X){
         int countx=0;
         struct node* ptr=head;
         if (head == NULL) printf("the list is empty");
         while(ptr!=NULL) {
            if(ptr->value==X) countx++;
            ptr=ptr->next;
         }
         return countx;
      }        
      void add_at_end(struct node *head,int x){
         struct node *ptr=head,*temp;
         temp=malloc(sizeof(struct node));
         temp->value=x;
         temp->next=NULL;
         while (ptr->next!=NULL) ptr=ptr->next;
         ptr->next=temp;         
      } 
       struct node* add_at_beg(struct node *head,int x ){
         struct node *temp1;
         temp1=malloc(sizeof(struct node));
         temp1->value=x;
         temp1->next=head;
         head=temp1;
         return head;
       }
        
        void add_at_beg2(struct node **head,int x){
         struct node *ptr=malloc(sizeof(struct node));
         ptr->value=x;
         ptr->next=NULL;
         
         ptr->next=*head;
         *head=ptr;
        }

     
  

 int main()
 {
    struct node* head=NULL;
    head=malloc(sizeof(struct node));
         head->value=2;
         head->next=malloc(sizeof(struct node));
         head->next->value=3;
         head->next->next=malloc(sizeof(struct node));
         head->next->next->value=2;
         head->next->next->next=NULL;
         head=add_at_beg(head,5);
         add_at_beg2(&head,3);
         add_at_end(head,2);
         
         printf("%d\n",count(head));
         
        printf("%d\n",nbroc(head,2));
        print(head);
        
    return 0;
 }
