#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    printf("Enter the number of Test cases: \n");
    scanf("%d", &T);
    while (T--)
    {
        char s[1000];
        printf("Enter the String: \n");
        scanf("%s", s);
        int abc = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            int j = i + 1, k = i + 2;
            if (((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u')) && ((s[j] == 'a') || (s[j] == 'e') || (s[j] == 'i') || (s[j] == 'o') || (s[j] == 'u')) && ((s[k] == 'a') || (s[k] == 'e') || (s[k] == 'i') || (s[k] == 'o') || (s[k] == 'u')))
            {
                abc = 1;
            }
        }
        if (abc == 1)
        {
            printf("Happy\n");
        }
        else
        {
            printf("Sad\n");
        }
    }
    return 0;
}
