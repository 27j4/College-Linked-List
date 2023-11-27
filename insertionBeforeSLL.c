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
void insertAthead(){
    struct node * ptr = (struct node*)malloc(sizeof(struct node));
    scanf("%d",&ptr->data);
    ptr->next=head;
    head = ptr;
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
    insertAthead();
    print(head);
    return 0 ;
}
