#include<stdio.h>

int main(){
    int hh, mm, ss;
    char a[3];
    printf("Enter hours 'hh' \t");
    scanf("%d", &hh);
    printf("Enter minutes 'mm' \t");
    scanf("%d", &mm);
    printf("Enter string 'am' or 'pm' \t");
    scanf("%s", &a);

    if(hh <= 12 && mm <= 59)
    {
        if((strcmp(a,"PM") == 0) || (strcmp(a,"pm") == 0)
           && (hh != 0) && (hh != 12))
        {
            hh = hh + 12;
        }
        if((strcmp(a,"AM") == 0) || (strcmp(a,"am") == 0) && (hh == 12))
        {
            hh = 0;
        }
        printf("Time: \t");
        printf("%02d:%02d", hh, mm);
        printf("\n\n");
    }
    else
    {
        printf("Provide the correct inputs.");
    }
}
