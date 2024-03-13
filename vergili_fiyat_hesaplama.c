#include <stdio.h>
#include <stdlib.h>
#define VERGI_kitap 4.0 // URUN VERGILERI
#define VERGI_temelgida 5.6
#define VERGI_luks 9.6
#define KITAP 0   // URUN KODLARI
#define TEMELGIDA 1
#define LUKS 2

int main(){
    int kod;
    float fiyat;
    printf("Lutfen urunun fiyatini ve kod bilgilerini giriniz\n");
    scanf("%f %d", &fiyat, &kod);
    
    switch(kod){
        case KITAP : printf("Kitap urununun satis fiyati : %f", fiyat + fiyat * VERGI_kitap / 100);
        break;
        case TEMELGIDA : printf("Temel gida urununun satis fiyati: %f",fiyat + fiyat * VERGI_temelgida / 100);
        break;
        case LUKS : printf("Lüks urununun satis fiyati : %f", fiyat + fiyat * VERGI_luks / 100);
        break;
        default : printf("Yanlis kod girdiniz");
    }
    return 0;
}