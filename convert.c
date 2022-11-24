#include <stdio.h>
#include <string.h>
void convert12(char* str)
{
    int h1 = (int)str[0] - '0';
    int h2 = (int)str[1] - '0';
    int hh = h1 * 10 + h2;
    char Meridien[2];
    if (hh < 12) {
        Meridien[0] = 'A';
        Meridien[1] = 'M';
    }
    else {
        Meridien[0] = 'P';
        Meridien[1] = 'M';
    }

    hh %= 12;

    if (hh == 0) {
        printf("12");

        for (int i = 2; i < 6; ++i) {
            printf("%c", str[i]);
        }
    }
    else {
        printf("%d", hh);

        for (int i = 2; i < 6; ++i) {
            printf("%c", str[i]);
        }
    }

    printf(" %c%c", Meridien[0], Meridien[1]);
}

int main()
{

    char str[8] = "12:35";

    convert12(str);

    return 0;
}
