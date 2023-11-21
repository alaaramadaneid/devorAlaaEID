#include <stdio.h>


float convertirUSDEnEuro(float montant) {
    float tauxChange = 0.85;
    return montant * tauxChange;
}

float convertirEuroEnUSD(float montant) {
    float tauxChange = 1.18;
    return montant * tauxChange;
}

int main() {
    int choix;
    float montant, resultat;


    printf("Choisissez le convertisseur :\n");
    printf("1. USD à EUR\n");
    printf("2. EUR à USD\n");
    printf("Entrez votre choix : ");
    scanf("%d", &choix);

    // Saisie du montant à convertir
    printf("Entrez le montant à convertir : ");
    scanf("%f", &montant);

    if (choix == 1) {
        resultat = convertirUSDEnEuro(montant);
        printf("%.2f USD équivaut à %.2f euros\n", montant, resultat);
    } else if (choix == 2) {
        resultat = convertirEuroEnUSD(montant);
        printf("%.2f euros équivalent à %.2f USD\n", montant, resultat);
    } else {
        printf("Choix invalide\n");
    }

    return 0;}

