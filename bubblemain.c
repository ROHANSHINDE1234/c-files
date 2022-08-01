# include <stdio.h>
# include <conio.h>

# include "bubblefunctions.c"

int main(){
    s16 n;
    printf("Enter the length of an array :\n");
    scanf("%d",&n);
    int a[n];
    for (s16 i = 0; i < n; i++){
        printf("Enter the %d element ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Your entered Array is: ");
    bubbleprint(a, n);
    bubblesorting(a,n);
    printf("Your Array after sorting using bubble sort is: ");
    bubbleprint(a,n);

    return 0;
}
