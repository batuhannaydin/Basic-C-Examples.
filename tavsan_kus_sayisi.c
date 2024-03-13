#include <stdio.h>
#include <stdlib.h>
#define tavsan_hiz 0.038
#define kus_hiz 0.012

/*
    Bir Ciftlikte tavsanlarin sayisi 1042, kusların sayisi 2272dir
    tavsanlar yilda %3.8 cogalirken kuslar  %1.2 cogalmaktadir
    tavsanlarin sayisi kuslarin sayisini kac yıl sonra gecer ?
*/

int main(){
    float tavsan = 1042, kus = 2272;
    int yil = 0;
    while(tavsan < kus){
        tavsan += tavsan * tavsan_hiz;
        kus += kus * kus_hiz;
        yil++;
        printf("%d.yil : tavsan = %d kus = %d\n", yil, (int)tavsan, (int)kus);
    }
    printf("Tavsanlar kuslari %d. yilda gecer\n", yil);
    return 0;
}