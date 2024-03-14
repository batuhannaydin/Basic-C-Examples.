#include <stdio.h>
#include <stdlib.h>

/*
    +
   +++
  +++++              
   +++
    +
*/

void ucgen_ust(int n)
{
    int i, j;
    int tabsayisi = n - 1;
    
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= tabsayisi; j++)
        {
            printf(" ");
        }
        tabsayisi--;
        for(j = 1; j <= 2*i - 1; j++)
        {
            printf("+");
        }
        printf("\n");
    }
}

void ucgen_alt(int n)
{
    int tabsayisi = 1;
    int i, j;
    for(i = 1; i <= n - 1; i++)
    {
        for(j = 1; j <= tabsayisi; j++)
        {
            printf(" ");
        }
        tabsayisi++;
        for(j = 1; j <= 2*(n - i) - 1; j++)
        {
            printf("+");
        }
        printf("\n");
    }
}

int main()
{
    int satir;
    printf("Satir sayisini giriniz\n");
    scanf("%d", &satir);
    ucgen_ust(satir);
    ucgen_alt(satir);
    return 0;
}