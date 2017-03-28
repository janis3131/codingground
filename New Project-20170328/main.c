#include <stdio.h>

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

