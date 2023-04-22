#include <stdio.h>
typedef int u4;
u4 inputarray(u4 *array, u4 n)
{
    for(u4 i;i< n;i++)
    {
        scanf("%d",&array[i]);
    }
}
u4 inputmatrix(u4 *matrix, u4 m, u4 n)
{
    for(u4 i=0;i<m;i++)
    {
        for(u4 j =0;j<n;j++)
        {
            scanf("%d",&matrix);
        }
    }
}
u4 testcases()
{
    u4 t;
    scanf("%d",&t);
    return t;
}
u4 main(void) {
	u4 T;
	T = testcases();
	while(T--)
	{
	    u4 ipary[2];
	    inputarray(ipary,2);
	    u4 ipary1;
	    inputmatrix(ipary1,ipary[0],2);
	}
	return 0;
}
