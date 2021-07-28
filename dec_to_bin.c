#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x;
    scanf("%d",&x);

    int a=0,b=1,r=0;

    while(x!=0){
        a=x%2;
        if(a!=0) r += a*b;
        b *= 10;
        x /= 2;
    }
    printf("%d",r);

    return 0;
}
