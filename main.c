/*#include <stdio.h>

typedef enum {A, B, ZERO, AB} GS;

typedef struct{
    int eta;
    float peso;
    int altezzaCm;
} Persona;

typedef struct{
    Persona datiPaziente;
    GS gruppoSanguigno;
    int codiceId;
} Paziente;

int main() {

    //dichiarazione di variabili relativi ai pazienti
    Paziente ricoverato1 = {{26, 70.5, 180}, ZERO, 4652}; //dichiarazione ricoverato1

    //Stampa dati paziente
    printf("\nEta\': %d", ricoverato1.datiPaziente.eta);
    printf("\nPeso: %.2f", ricoverato1.datiPaziente.peso);
    printf("\nAltezza (cm): %d", ricoverato1.datiPaziente.altezzaCm);
    printf("\nGruppo Sanguigno: %d", ricoverato1.gruppoSanguigno);
    printf("\nCodice Identificativo: %d", ricoverato1.codiceId);

    return 0;
}*/



//------------------------------VARIANTE 2------------------------------------------
/*#include <stdio.h>

typedef enum {A, B, ZERO, AB} GS;

typedef struct{
    int eta;
    float peso;
    int altezzaCm;
} Persona;

typedef struct{
    Persona datiPaziente;
    GS gruppoSanguigno;
    int codiceId;
} Paziente;

int main() {

    Paziente ricoverato1;

    printf("\nInserire Eta\':");
    scanf("%d", &ricoverato1.datiPaziente.eta);
    printf("\nInserire Peso:");
    scanf("%f", &ricoverato1.datiPaziente.peso);
    printf("\nInserire Altezza (cm):");
    scanf("%d", &ricoverato1.datiPaziente.altezzaCm);
    printf("\nInserire Gruppo Sanguigno [A=0, B=1, ZERO=2, AB=3]:");
    scanf("%d", &ricoverato1.gruppoSanguigno);
    printf("\nInserire Codice Identificativo:");
    scanf("%d", &ricoverato1.codiceId);

    return 0;
}*/




//--------------------------VARIANTE 3---------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum {A, B, ZERO, AB} GS;

typedef struct{
    int eta;
    float peso;
    int altezzaCm;
} Persona;

typedef struct{
    Persona datiPaziente;
    GS gruppoSanguigno;
    int codiceId;
} Paziente;

int main() {
    srand(time(NULL));

    Paziente ricoverato3;

    ricoverato3.datiPaziente.eta = 18 + rand()% (110 -18 + 1);
    ricoverato3.datiPaziente.peso = (float) (2000 + rand()% (25000 - 2000 + 1)) / 100 ; //generazione casuale tra numeri float con 2 cifre decimali (in questo caso 20.00 e 250.00)
    ricoverato3.datiPaziente.altezzaCm = 50 + rand()% (200 - 50 + 1);
    ricoverato3.gruppoSanguigno = rand()%5;
    ricoverato3.codiceId = 1000 + rand()% (9999 - 1000 + 1);

    printf("\nEta\' : %d", ricoverato3.datiPaziente.eta);
    printf("\nPeso: %.2f", ricoverato3.datiPaziente.peso);
    printf("\nAltezza (cm): %d", ricoverato3.datiPaziente.altezzaCm);
    printf("\nGruppo Sanguigno (0=A, 1=B, 2=ZERO, 3=AB): %d", ricoverato3.gruppoSanguigno);
    printf("\nCodice ID : %d", ricoverato3.codiceId);

    return 0;
}
