#include <stdio.h>
#include <stdlib.h>

// ilk 2 deger
int ilk = 0;
int ikinci = 1;

// recursive fibonacci fonksiyonu
void fib(int n)
{
    int sonraki;
    int i;

    printf("Uretilen Fibonacci sayilari :\n");

    for(i = 0; i < n ; i++)
    {
        if(i <= 1)
        {
            sonraki = i;
        }
        else
        {
            sonraki = ilk + ikinci;
            ilk = ikinci;
            ikinci = sonraki;
        }
        printf("%d\t",sonraki);
    }
}

int main()
{
    int sayi;
    printf("Uretilecek fibonacci sayi adedini giriniz\n");
    scanf("%d",&sayi);
    fib(sayi);
    return 0;
}