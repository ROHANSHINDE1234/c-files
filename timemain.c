#include <stdio.h>
#include <conio.h>

#include "timeh.h"
#include "timefunctions.c"


int main()
{
    int n = 3;
    int diff_time[n], start[n], stop[n];
    printf("Enter your start Time in Hr min sec format:\nUse 24 hr format only:\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter your value ");
        scanf("%d", &start[i]);
    }
    printf("Enter your stop Time in Hr min sec format: \n");
    for (int j = 0; j < n; j++)
    {
        printf("Enter your value ");
        scanf("%d", &stop[j]);
    }
    printf("Your entered start time in Hr min sec format: \n");
    timeprint(start, n);
    printf("Your entered stop time in Hr min sec format: \n");
    timeprint(stop, n);
    if (0 <= start[0] && start[0] <= 24 && 0 <= stop[0] && stop[0] <= 24 && 0 <= start[1] && start[1] <= 60 && 0 <= stop[1] && stop[1] <= 60 && 0 <= start[2] && start[2] <= 60 && 0 <= stop[2] && stop[2] <= 60)
    {
        if (stop[0] > start[0])
        {
            if (stop[1] > start[1])
            {
                diff_time[0] = stop[0] - start[0];
                diff_time[1] = (diff_time[0] * 60) + (stop[1] - start[1]);
                if (stop[2] > start[2])
                {
                    diff_time[2] = (diff_time[1] * 60) + (stop[2] - start[2]);
                }
                else
                {
                    diff_time[2] = (diff_time[1] * 60) - (start[2] - stop[2]);
                }
            }
            else
            {
                diff_time[0] = stop[0] - start[0] - 1;
                diff_time[1] = (diff_time[0] * 60) + (stop[1]) + (60 - start[1]);
                if (stop[2] > start[2])
                {
                    diff_time[2] = (diff_time[1] * 60) + (stop[2] - start[2]);
                }
                else
                {
                    diff_time[2] = (diff_time[1] * 60) - (start[2] - stop[2]);
                }
            }
            printf("Time difference between the two time in HR min sec format is. \n");
            timeprint(diff_time, n);
        }
        else
        {
            printf("Your stop time should be greater than start time\n");
        }
    }
    else
    {
        printf("Enter your time in proper 24hr format.\n");
    }
    
    

    return 0;
}