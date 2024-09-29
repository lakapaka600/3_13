#include <stdio.h>

int main(void) {
    int giorno1;
    int mese1;
    int anno1;
    int giorno2;
    int mese2;
    int anno2;
    printf("inserisci giorno1:\n");
    scanf("%d", &giorno1);
    printf("inserisci mese1:\n");
    scanf("%d", &mese1);
    printf("inserisci anno1:\n");
    scanf("%d", &anno1);
    printf("inserisci giorno2:\n");
    scanf("%d", &giorno2);
    printf("inserisci mese2:\n");
    scanf("%d", &mese2);
    printf("inserisci anno2:\n");
    scanf("%d", &anno2);
    int giornorecente=giorno1-29;
    int meserecente=mese1-9;
    int annorecente=anno1-2024;
    if(giornorecente<=9 && meserecente<=9 && annorecente<=9) {
        printf("la prima data è recente");
    }
    else {
        printf("la seconda data è la più recente");
    }
    return 0;
}
