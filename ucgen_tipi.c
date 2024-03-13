#include <stdio.h>
#include <stdlib.h>

// Ucgenin tipi ? 

int main(){
    int aci1, aci2, aci3;
    printf("Ucgenin acilarini giriniz\n");
    
    scanf("%d%d%d", &aci1, &aci2, &aci3);
    
    if(aci1 + aci2 + aci3 >= 180){
        printf("Girdiginiz acilar ucgen olusturuyor\n");
        if(aci1 == 60 && aci2 == 60 && aci3 == 60){
            printf("Eskenar ucgen");
        }
        else if(aci1 == aci2){
            printf("Ikızkenar ucgen");
        }
        else{
            printf("Cesitkenar ucgen");
        }
    }
    else{
        printf("Girdiginiz acilar olusturmuyor\n");
    }
    return 0;
}