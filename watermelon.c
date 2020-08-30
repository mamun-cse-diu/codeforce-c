#include<stdio.h>
int main()
{
    int w,i,j,k;
    scanf("%d",&w);
    i=2;
    while(i<w){
        j=w-i;
        k=0;
        if(i%2==0 && j%2==0){
            printf("YES\n");
            k=1;
            break;
        }
        i=i+2;
    }
    if(k==0)
        printf("NO\n");
    return 0;
}
