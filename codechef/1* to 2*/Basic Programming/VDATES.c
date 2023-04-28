#include <stdio.h>

int main(void) {
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int d,l,r;
        scanf("%d %d %d",&d,&l,&r);
        if(d>=l)
        {
            if(d>r)
            {
                printf("Too Late\n");
            }
            else
            {
                printf("Take second dose now\n");

            }
        }
        else
        {
            printf("Too Early\n");
        }
    }
	// your code goes here
	return 0;
}

