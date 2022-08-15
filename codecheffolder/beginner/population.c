#include <stdio.h>

int final(int a,int b,int c){
    int population;
    population = a - b + c;
    printf("%d",population);
    printf("\n");
}
int main(void) {
    int T;
	printf("Enter the number of test cases: ");
	scanf("%d",&T);
	int a[T][3];
	for(int i = 0; i< T; i++)
	{
	    for(int j = 0; j<3; j++)
	    {
	        scanf("%d",&a[i][j]);
	    }
	}
    
    for (int i = 0; i < T; i++)
    {
        final(a[i][0],a[i][1],a[i][2]);
    }
    
    

	return 0;
}
