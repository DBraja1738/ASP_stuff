#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 30
int SP1=-1;
int stack1[SIZE];
int rek(int a);
int main(void)
{/*
int array[4]={3,4,7,8};
int tgt=13;
int found=0;
for(int i=0;i<4;i++)
    {
    for(int j=i+1;j<4;j++){
        if(array[i]+array[j]==tgt) {printf("%d,%d ",i,j);
        found=1;
        }
    }

    }
//if(found==0){ printf("jebotepas2 ");}

*/
int x=rek(15);
printf("%d",x);
return 0;
}
int rek (int a)
{
if(a>1000) return a-4;
else return rek(rek(a+5));
}

void pushStack(int x)
{


if(SP1==SIZE-1){
        printf("overflow");
}
else{
    SP1++;
    stack1[SP1]=x;
}

}
int popStack(void)
{
    if(SP1==-1){printf("underflow");}else{
int temp;
temp=stack1[SP1];
SP1--;
return temp;
}
}

int isEmpty(void){
if(SP1<0) return 1;
else return 0;
}

