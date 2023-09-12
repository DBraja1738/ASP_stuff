#include <stdio.h>
#include <stdlib.h>
struct node
{
char x;
struct node* left;
struct node* right;
};
struct nodeLL
{
int x;
struct nodeLL* next;
};
typedef struct nodeLL LL;
typedef struct node Node;
void inorder(Node* root);
Node* newNode(char n);
Node* insert(Node* node,char n);
void func(int n);
int array[100];
int count=0;
int main (void){

Node* root=NULL;

root=insert(root,20);
insert(root,25);
insert(root,30);
insert(root,24);
insert(root,15);
insert(root,13);
insert(root,17);
inorder(root);
printf("\n");
preorder(root);
printf("\n");
postorder(root);
printf("\n");
revInorder(root);
//printf("%d ", findBiggestInLeftSubTree(root));
//printf("\n%d ", findSmallestInRightSubTree(root));

//func(7);
/*
int matrix[3][3]={{1,2,3},{2,3,4},{3,4,5}};
int matrix1[5][7];
LL* head=NULL;
//push(&head,2);
//push(&head,4);
//printLL(head);
int maxRow=sizeof(matrix)/sizeof(matrix[0]);
int maxCol=sizeof(matrix[0])/sizeof(int);

//push(&head,matrix[0][0]);
//push(&head,matrix[0][maxCol-1]);
//push(&head,matrix[maxRow-1][0]);
//push(&head,matrix[maxRow-1][maxCol-1]);
append(&head, 7);
append(&head,4);
push(&head,3);
printLL(head);

*/
printf("\n");
findSecondLargest(root);
/*for(int i=0;i<count;i++)
    {
    printf("%d ",array[i]);
    }
*/
printf("\n%d",array[1]);
return 0;

}

void push(LL** head, int n)
{
LL* novi=(LL*)malloc(sizeof(LL));
novi->x=n;
novi->next=*head;
*head=novi;
}

void append(LL** head, int n)
{
LL* last=*head;
LL* temp=(LL*)calloc(1,sizeof(LL));
temp->next=NULL;
temp->x=n;
if(*head==NULL)
    {
    *head=temp;
    return;
    }

while(last->next!=NULL) last=last->next;

last->next=temp;
}
void printLL(LL* head)
{
LL* temp=head;
while(temp!=NULL)
    {
    printf("%d ",temp->x);
    temp=temp->next;
    }
}

void func(int n)
{
if(n==0) return;
int temp=1;
while(n>=temp)
    {
    printf("%d",temp);
    temp++;
    }
printf("\n");
func(n-1);
}

Node* newNode(char n)
{
Node* temp=(Node*)calloc(1,sizeof(Node));
temp->x=n;
temp->left=temp->right=NULL;
return temp;
}

Node* insert(Node* node,char n)
{
if(node==NULL) return newNode(n);
if(n< node->x) node->left=insert(node->left,n);
if(n> node->x) node->right=insert(node->right,n);
return node;
}

void inorder(Node* root)
{
if(root!=NULL){
inorder(root->left);
printf("%d ",root->x);
inorder(root->right);

}

}

void postorder(Node* root)
{
if(root!=NULL){
postorder(root->left);
postorder(root->right);
printf("%d ",root->x);

}
}


void preorder(Node* root){

if(root!=NULL){
printf("%d ",root->x);
postorder(root->left);
postorder(root->right);


}


}

int findBiggestInLeftSubTree(Node* root)
{
Node* temp=root;
temp=temp->left;
int x;

while(temp->right!=NULL)
    {
    temp=temp->right;
    }

return temp->x;


}

int findSmallestInRightSubTree(Node* root)
{
Node* temp=root;
temp=temp->right;
int x;

while(temp->left!=NULL)
    {
    temp=temp->left;
    }

return temp->x;


}

void revInorder(Node * root)
{
if(root!=NULL)
    {
    revInorder(root->right);
    printf("%d ",root->x);
    revInorder(root->left);
    }
}
void findSecondLargest(Node* root)
{
if(root!=NULL)
    {
    findSecondLargest(root->right);
    array[count]=root->x;
    count++;
    findSecondLargest(root->left);
    }
}
