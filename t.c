#include<stdio.h>

int main()
{
    char str[9];
    printf("Input Time: ");
    scanf("%s", &str);

    int h1 = (int)str[1] - '0';
    int h2 = (int)str[0] - '0';
    int hh = (h2 * 10 + h1 % 10);

    if(str[5] == 'a' || str[4] == 'a')
    {
        if(hh == 12)
        {
            if(str[4] == 'a')
            {
                printf("Time: ");
                printf("00");
                for(int i=2; i<4; i++)
                {
                    printf("%c", str[i]);
                }
            }
            else
            {
                printf("Time: ");
                printf("00");
                for(int i=2; i<=4; i++)
                {
                    printf("%c", str[i]);
                }
            }

        }
        else // 1:00am+
        {
            if(str[5] == 'a')
            {
                printf("Time: ");
                for(int i = 0; i<=4; i++)
                {
                    printf("%c", str[i]);
                }
            }
            else
            {
                printf("Time: ");
                for(int i = 0; i<4; i++)
                {
                    printf("%c", str[i]);
                }
            }
            //
        }
    }
    else
    {
        if(hh == 12)
        {
            printf("Time: ");
            printf("12");
            for(int i=2; i<=4; i++)
            {
                printf("%c", str[i]);
            }
        }
        else
        {
            if(str[5] == 'p')
            {
                hh = hh + 12;
                printf("Time: ");
                printf("%d", hh);
                for(int i=2; i<=4; i++)
                {
                    printf("%c", str[i]);
                }
            }
            else
            {
                hh = hh + 12;
                printf("Time: ");
                printf("%d", hh);
                for(int i=0; i<4; i++)
                {
                    printf("%c", str[i]);
                }
            }

        }
    }


    return(0);
}
