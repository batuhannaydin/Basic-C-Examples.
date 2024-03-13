#include <stdio.h>
#include <stdlib.h>

// girilen harfin ingiliz alfabesinde sirasi

int main(){
    char ch;
    int sira;
    printf("Bir karakter giriniz\n");
    scanf("%c", &ch);

    if((ch >= 'A') && (ch <= 'Z')){  // buyuk harf ise
        sira = (int)ch - (int)'A' + 1;
    }
    else if((ch >= 'a') && (ch <= 'z')){  // kucuk harf ise
        sira = (int)ch - (int)'a' + 1;
    }
    else{
        printf("Lutfen harf giriniz");
    }

    printf("%c karakterinin sirasi : %d", ch, sira);  // integer sayilarin ASCII kodlari vardir !
    return 0;
}
