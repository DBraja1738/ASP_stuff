#include <stdio.h>
#include <stdlib.h>
struct lista{
int x;
struct lista* next;
};

typedef struct lista list;
void appendLL(list** head, int dat);
void addLLtoEnd(list** head,int n);
int main (void)
{
list* head=NULL;

addLLtoStart(&head,65);
addLLtoStart(&head,3);
addLLtoStart(&head,46);
addLLtoStart(&head,89);
addLLtoStart(&head,5);
printLL(head);
printf("\n");
flipLL(&head);
printLL(head);

return 0;
}

void addLLtoStart(list** head,int n)
{
list* temp=(list*)calloc(1,sizeof(list));

temp->x=n;
temp->next=*head;
*head=temp;

}

void printLL(list* head)
{
    list* temp=head;
while(temp!=NULL)
    {
    printf("%d ",temp->x);
    temp=temp->next;
    }
}
void addLLtoEnd(list** head_ref,int new_data)
{




    // Create a new node
    list* new_node= (list*)malloc(sizeof(list));
    new_node->x = new_data;

    // Store the head reference in a temporary variable
    list* last = *head_ref;

    // Set the next pointer of the new node as NULL since it
    // will be the last node
    new_node->next = NULL;

    // If the Linked List is empty, make the new node as the
    // head and return
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    // Else traverse till the last node
    while (last->next != NULL) {
        last = last->next;
    }

    // Change the next pointer of the last node to point to
    // the new node
    last->next = new_node;
}




void appendLL(list** head, int dat){

list* novi=(list*)malloc(sizeof(list));
if(novi==NULL)
    {
    printf("fail");
    return;
    }
novi->next=NULL;
novi->x=dat;
list* temp=*head;
if(*head==NULL)
    {
    *head=novi;
    return;
    }

while(temp->next!=NULL)
    {
        temp=temp->next;
        printf("loop");
    }

    temp->next=novi;
    return;
}

void flipLL(list** head)
{

    if(*head==NULL || (*head)->next==NULL) return;
list* temp=*head;

list* last=NULL;



while(temp->next!=NULL)
    {
    last=temp;
    temp=temp->next;
    }

    last->next=NULL;

    temp->next=*head;
    *head=temp;

}
