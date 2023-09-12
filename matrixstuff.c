#include <stdio.h>
#define R 4
#define C 4
void spiralPrint(int matrix[4][4],int m, int n);
int main (void)
{
int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//spiralPrint(matrix,4,4);
printf("\n");
//spiralPrint1(R,C,matrix);
newSpiralPrint(matrix,R,C);
return 0;
}

void spiralPrint(int matrix[4][4],int m, int n)
{
int i, k=0, l=0;
//m= krajnji idx reda matrice
//n= krajnji idx stupca matrice
//k= pocetni idx reda matrice
//l= pocetni idx stupca matrice

while(k<m && l<n){

for(i=l;i<n;++i)
    {
    printf("%d !",matrix[k][i]);
    }
    k++;
for(i=k;i<m;++i)
    {
    printf("%d #",matrix[i][n-1]);
    }
n--;
if(k<m){
    for(i=n-1;i>=1;--i)
        {
        printf("%d $", matrix[m-1][i]);
        }
        m--;
}

if(l<n){
    for(i=m-1;i>=k;--i)
        {
        printf("%d &", matrix[i][l]);
        }
        l++;
}
}
return;
}


void spiralPrint1(int m, int n, int a[R][C])
{
    int i, k = 0, l = 0;

    /*  k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */

    while (k < m && l < n) {
        /* Print the first row from the remaining rows */
        for (i = l; i < n; ++i) {
            printf("%d ", a[k][i]);
        }
        k++;

        /* Print the last column from the remaining columns
         */
        for (i = k; i < m; ++i) {
            printf("%d ", a[i][n - 1]);
        }
        n--;

        /* Print the last row from the remaining rows */
        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                printf("%d ", a[m - 1][i]);
            }
            m--;
        }

        /* Print the first column from the remaining columns
         */
        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                printf("%d ", a[i][l]);
            }
            l++;
        }
    }
}


void newSpiralPrint(int matrix[4][4],int m,int n)
{
int i,k=0,l=0;

while(k<m && l<n){

for(i=l;i<n;i++) printf("%d ",matrix[k][i]);
k++;

for(i=k;i<m;i++)
    {
    printf("%d ",matrix[i][n-1]);
    }
n--;

if(1){
    {
    for(i=n-1;i>=l;i--){printf("%d ",matrix[m-1][i]);}
    }
m--;
}
if(1)
    {
    for(i=m-1;i>=k;i--){printf("%d ",matrix[i][l]);}
    }
    l++;
}
}
