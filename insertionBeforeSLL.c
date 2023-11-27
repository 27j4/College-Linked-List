#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
struct node * new , * head , * temp , * tail;
void print(struct node * start){
    while(start!=NULL){
        printf("%d ",start->data);
        start = start->next;
    }
    printf("\n");
}
// Method 1
void insertAthead(struct node **head, int data){
    struct node * ptr =malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next=*head;
    *head=ptr;
}

// Method 2
struct node * insertAtFirst(struct node *head, int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = data;
 
    ptr->next = head;
    return ptr; 
}
int main()
{
    int choice;
    do{
        new = (struct node*)(malloc(sizeof(struct node)));
        scanf("%d",&new->data);
        new->next = NULL;
        if(head == NULL){
            head = temp = new;
            tail = temp;
        }
        else{
            temp->next = new;
            temp = temp->next;
            tail = temp;
        }
        scanf("%d",&choice);
    }
    while(choice);
    print(head);
    int data;
    scanf("%d",&data);
    insertAthead(&head,data);



    // insertAtFirst
    // Method 2
    // insertAtFirst(head);


    print(head);
    return 0 ;
}