#include <stdio.h>
#include <string.h>
#define ANZAHL_ZIELE 11
char orte[][22] 		= {	"YVERDON",
																"YVERDON LES BAINS",
																"ESSERT PITTET",
																"CHAVORNAY VD",
																"BAVOIS",
																"ECLEPENS",
																"COSSONAY",
																"BUSSIGNY PRES LAUSANNE",
																"RENENS",
																"LAUSANNE"
};
char z_ort[25] = "B";
unsigned int letterCnt = 1;
unsigned char buchstaben[27] = { 0 };


void updateLetters(void) {
    int a, b, c, d;
    int w=0, x=0, y, z;
    
    w=0;
     c= 0;
    for( a=0; a<ANZAHL_ZIELE; a++ ) {                                           //wiederhole so oft wie es Orte hat
       
        if( z_ort[0] == orte[a][0] && letterCnt > 0) {
            for( b=0; b<letterCnt; b++ ) {
                if( z_ort[b] != orte[a][b] ) {
                    y=1;
                    continue;
                } else {
                    y = 0;
                }
            }
            if( y == 0 ) {
                buchstaben[c] = orte[a][letterCnt];
                c++;
            }
        }
        if( letterCnt == 0 ) {
           w = 0;
            for( b=0; b<=a; b++ ) {                                             //Buchstabe bereits vorhanden ?
             
                if( buchstaben[b] == orte[a][0] ) {;
                    w = 1;
                }
            }
            if( w == 0 ) {                                                      //Buchstabe ist nicht vorhanden => Eintragen
                buchstaben[x] = orte[a][0];
                x++;
            }
        }
    }
    
    
}

int main()
{
    updateLetters();
    printf("Zielsuche: %s \n", z_ort);
    printf("Buchstaben: %s \n", buchstaben);

    return 0;
}

