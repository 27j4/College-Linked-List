#include<stdio.h>
#include<stdlib.h>
struct node{
    int coff;
    int deg;
    struct node * next;
};
struct node * new , * head1 , *head2 , *head , *temp;
void print(struct node * st){
    while(st!=NULL){
        printf("%dx^%d",st->coff,st->deg);
        st = st->next;
        if(st != NULL){
            printf(" + ");
        }
        else{
            printf(" = 0");
        }
    }
    printf("\n");
}
struct node *create(struct node * head){
    struct node * ptr = NULL;
    int choice;
    do{
        new = (struct node*)(malloc(sizeof(struct node)));
        scanf("%d",&new->coff);
        scanf("%d",&new->deg);
        new->next = NULL;
        if(ptr == NULL){
            ptr = temp = new;
        }
        else{
            temp->next = new;
            temp = temp->next;
        }
        scanf("%d",&choice);
    }
    while(choice);
    head = ptr;
    return head;
}
void add(struct node* temp1 , struct node * temp2){
    while (temp1 != NULL && temp2 != NULL)
    {
        new = (struct node*)malloc(sizeof(struct node));
        new->coff = temp1->coff + temp2->coff;
        new->deg = temp1->deg;
        new->next = NULL;
        if(head == NULL){
            head = temp = new;
        }
        else{
            temp->next = new;
            temp = temp->next;
        }
        temp1= temp1->next;
        temp2 = temp2->next;
    }
}
int main()
{
    head1 = create(head1);
    head2 = create(head2);
    add(head1,head2);
    print(head);
    return 0 ;
}
