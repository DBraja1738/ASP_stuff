#include <stdio.h>

int main (void)
{
int array[]={5,4,3,8,1,9,2};
int matrix[3][3]={{1,2,3},{2,3,4},{3,4,5}};
//SelectSort(array,(sizeof(array)/sizeof(int)));
/*
for(int i=0;i<(sizeof(array)/sizeof(int));i++)
    {
    printf("%d ", array[i]);
    }
printf("\n%d ",binSearch(array, 8,(sizeof(array)/sizeof(int))));
*/
for(int i=0;i<9;i++)
    {
    for(int j=0;j<3;j++)
        {
        for(int k=0;k<3;k++)
            {
            if(j+k==i) printf("%d ",matrix[j][k]);
            }
        }
        printf("\n");
    }


}


void SelectSort(int array[], int n)
{
    int min_idx;
for(int i=0;i<n;i++)
    {
        min_idx=i;
    for(int j=i+1;j<n;j++)
        {
            if(array[min_idx]>array[j]) min_idx=j;
            if(min_idx!=i) swap(&array[min_idx],&array[i]);
        }
    }
}

void swap(int* a,int* b)
{
int temp=*a;
*a=*b;
*b=temp;
}

int binSearch(int array[], int trazeni,int size)
{
int dg=1;
int gg=size;

int s;

while(gg>=dg)
    {
        s=(gg+dg)/2;
        if(array[s]==trazeni) return s;
        if(array[s]>trazeni) {gg=s-1;}
        else {dg=s+1;}

    }
return -1;
}
