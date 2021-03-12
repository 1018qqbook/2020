#include <stdio.h>
int main()
{
    int a[5]={0,10,20,20,40};
    int *p=&a[2];
    *p=222;
    p=p+2;
    *p=666;
}
