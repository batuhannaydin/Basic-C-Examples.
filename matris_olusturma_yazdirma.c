#include <stdio.h>
#include <stdlib.h>
#define A 3
#define B 2

// matris olusturma
void init_matris(int matris[A][B])  
{
    int i, j;
    printf("Lutfen %d %d boyutunda matris giriniz\n", A, B);
    for(i = 0; i < A; i++)
    {
        for(j = 0; j < B; j++)
        {
            scanf("%d", &matris[i][j]);
        }
    }
}

void print_matris(int matris[A][B])
{
    int i, j;
    for(i = 0; i < A; i++)
    {
        for(j = 0; j < B; j++){
            printf("%4d",matris[i][j]);
        }
    printf("\n");
    }
}

void matris_toplam(int matris[A][B])
{
    int i, j;
    int toplam;
    toplam = 0;
    for(i = 0; i < A ; i++){
        for(j = 0; j < B; j++)
        {
            toplam = toplam + matris[i][j];
        }
    }
    printf("Matristeki degerlerin toplami : %d",toplam);
}
int main()
{
    int min, max, toplam;
    int matris[A][B];
    init_matris(matris);
    print_matris(matris);
    matris_toplam(matris);
    return 0;
}