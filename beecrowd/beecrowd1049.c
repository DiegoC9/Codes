#include <stdio.h>
#include <string.h>

int main() {
    
    char col[100];
    char tip[100];
    char com[100];

    printf("vertebrado ou invertebrado?\n");
    scanf("%s", col);

    if(strcmp(col, "vertebrado") == 0) {
        printf("ave ou mamifero?\n");
        scanf("%s", tip);
        if(strcmp(tip, "ave") == 0) {
            printf("carnivoro ou onivoro?\n");
            scanf("%s", com);
            if(strcmp(com, "carnivoro") == 0) {
                printf("aguia\n");
            }
            if(strcmp(com, "onivoro") == 0) {
                printf("pomba\n");
            }
        }
        if(strcmp(tip, "mamifero") == 0) {
            printf("onivoro ou herbivoro?\n");
            scanf("%s", com);
            if(strcmp(com, "onivoro") == 0) {
                printf("homem\n");
            }
            if(strcmp(com, "herbivoro") == 0) {
                printf("vaca\n");
            }
        }
    }

    if(strcmp(col, "invertebrado") == 0) {
        printf("inseto ou anelideo?\n");
        scanf("%s", tip);
        if(strcmp(tip, "inseto") == 0) {
            printf("hematofago ou herbivoro?\n");
            scanf("%s", com);
            if(strcmp(com, "hematofago") == 0) {
                printf("pulga\n");
            }
            if(strcmp(com, "herbivoro") == 0) {
                printf("lagarta\n");
            }
        }
        if(strcmp(tip, "anelideo") == 0) {
            printf("hematofago ou onivoro?\n");
            scanf("%s", com);
            if(strcmp(com, "onivoro") == 0) {
                printf("minhoca\n");
            }
            if(strcmp(com, "hematofago") == 0) {
                printf("sanguessuga\n");
            }
        }
    }

    return 0;
}
