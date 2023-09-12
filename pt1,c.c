#include <stdio.h>
int MAXSIZE = 20;
int stack[20];
int top = -1;
int main(void){

int matrix[3][3];
int i,j;


for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
        {
        scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
        {
        printf("%d ",matrix[i][j]);
        }
    printf("\n");
    }

for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
        {
        if(matrix[i][j]==0)
            {
            push(i);
            push(j);
            }
        }
    }
for(i=0;i<top;i++) printf("%d ", stack[i]);
printf("\n");
while(!isempty())
    {
    j=pop();
    i=pop();
    for(int k=0;k<3;k++)
        {
        matrix[j][k]=0;
        }
    for(int k=0;k<3;k++)
        {
        matrix[k][i]=0;
        }

    }

for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
        {
        printf("%d ",matrix[i][j]);
        }
    printf("\n");
    }

return 0;
}
/*
void func(int[][]  matrix ,int SP,int* stack)
{
    int i,j;
while(SP!=-1)
    {
    j=stack[--SP];
    i=stack[--SP];

    for(int k=0;k<5;k++)
        {
        matrix[j][k]=0;
        }
    for(int k=0;k<5;k++)
        {
        matrix[k][i]=0;
        }
    }
    return;
}
*/
void printMatrix(int** matrix)
{
for(int i=0;i<3;i++)
    {
    for(int j=0;j<3;j++)
        {
        printf("%d ",matrix[i][j]);
        }
    printf("\n");
    }
return;
}

int isempty(){
   if(top == -1)
      return 1;
   else
      return 0;
}

/* Check if the stack is full */
int isfull(){
   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

/* Function to return the topmost element in the stack */
int peek(){
   return stack[top];
}

/* Function to delete from the stack */
int pop(){
   int data;
   if(!isempty()) {
      data = stack[top];
      top = top - 1;
      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}

/* Function to insert into the stack */
int push(int data){
   if(!isfull()) {
      top = top + 1;
      stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}
