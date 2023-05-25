#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if(y>x)
            printf("PROFIT\n");
        else if(y<x)
            printf("LOSS\n");
        else
            printf("NEUTRAL\n");
    }
    return 0;
}

