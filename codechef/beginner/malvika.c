#include <stdio.h>
#include <string.h>

int main(void)
{

    int t, i;
    char s[100];
    scanf("%d", &t);
    while (t--)
    {
        scanf(" %s", s);
        int a = 0, b = 0;
        for (i = 0; i < strlen(s); ++i)
        {
            if (s[i] == 'a')
            {
                ++a;
            }
            else
            {
                ++b;
            }
        }
        (a <= b) ? printf("%d\n", a) : printf("%d\n", b);
    }
    return 0;
}
