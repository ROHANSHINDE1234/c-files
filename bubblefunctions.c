# include "bubbleh.h"

void bubbleprint(int *a, s16 n){
    printf("[ ");
    for (s16 i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
    printf("]\n");
}

void bubblesorting(int *a, s16 n){
    int temp;
    for (s16 i = 0; i < n-1; i++){
        for (s16 j = 0; j < n-1-i; j++){
            if (a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;         
        }               
    }
    }

}

