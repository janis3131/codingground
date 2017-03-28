#include <stdio.h>


void sort4(int *zahl1, int *zahl2, int *zahl3, int *zahl4) {
    int tmp;
    int zahlen[4] = {*zahl1, *zahl2, *zahl3, *zahl4};
    char i, j;
    
    for( i=0; i<=3; i++ ) {
        for(j=i; j <=3; j++) {
            if(zahlen[i] > zahlen[j]) {
                tmp = zahlen[j];
                zahlen[j] = zahlen[i];
                zahlen[i] = tmp;
            }
        }
    }
    *zahl1 = zahlen[0];
    *zahl2 = zahlen[1];
    *zahl3 = zahlen[2];
    *zahl4 = zahlen[3];
    
}
unsigned int algorithmus(int zahl1, int zahl2) {
    int AB = zahl1;
    int CD = zahl2;
    while((AB > 0) && (CD > 0)) {
        if(AB > CD) {
            AB -= CD;
        } else {
            if( CD > AB) {
                CD -= AB;
            } else if( AB == CD ) {
                break;
                return AB;
            }
        }
    }
}

int main()
{
    //Variablen
    int AB1=0, CD1=0;
    
    //Zahlen erkennen
    printf("Erste Zahl eingeben:");
    scanf("%d", &AB1);
    printf("Zweite Zahl eingeben:");
    scanf("%d", &CD1);
    
    printf("%d \n", algorithmus(AB1, CD1));
    

    return 0;
}

