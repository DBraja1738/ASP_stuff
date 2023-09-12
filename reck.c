#include <stdio.h>

int main (void)
{
int rez = f(15);

printf("%d ",rez);
return 0;
}

int f(int a)
{
if(a>1000) return a-4;
    else return f(f(a+5));

}
