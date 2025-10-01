#include "list.h"

void menu() {
    printf("\n MENU\n");
    printf("1. Liste simplement chainee\n");
    printf("2. Liste doublement chainee\n");
    printf("3. Liste simplement chainee circulaire\n");
    printf("4. Liste doublement chainee circulaire\n");
    printf("0. Quitter\n");
    printf("Choix: ");
}

int main() {
    int choix, val;
    SNode* sll = NULL;
    DNode* dll = NULL;
    CSNode* csll = NULL;
    CDNode* cdll = NULL;

    do {
        menu();
        scanf("%d", &choix);

        switch (choix) {
        case 1: {
            int choice;
            printf("\n Liste simplement chainee \n");
            printf("1. Inserer trie\n");
            printf("2. Supprimer toutes les occurrences\n");
            printf("3. Afficher\n");
            printf("0. Retour\n");
            printf("Choix: ");
            scanf("%d", &choice);

            if (choice == 1) {
                printf("Valeur a inserer: ");
                scanf("%d", &val);
                sll = insertSortedSLL(sll, val);
            } else if (choice == 2) {
                printf("Valeur a supprimer: ");
                scanf("%d", &val);
                sll = deleteOccurrencesSLL(sll, val);
            } else if (choice == 3) {
                printSLL(sll);
            }
            break;
        }
        case 2: {
            int choice;
            printf("\n Liste doublement chainee \n");
            printf("1. Inserer trie\n");
            printf("2. Afficher\n");
            printf("0. Retour\n");
            printf("Choix: ");
            scanf("%d", &choice);

            if (choice == 1) {
                printf("Valeur a inserer: ");
                scanf("%d", &val);
                dll = insertSortedDLL(dll, val);
            } else if (choice == 2) {
                printDLL(dll);
            }
            break;
        }
        case 3: {
            int choice;
            printf("\n Liste simplement chainee circulaire \n");
            printf("1. Inserer en tete\n");
            printf("2. Inserer en queue\n");
            printf("3. Afficher\n");
            printf("0. Retour\n");
            printf("Choix: ");
            scanf("%d", &choice);

            if (choice == 1) {
                printf("Valeur a inserer: ");
                scanf("%d", &val);
                csll = insertHeadCSLL(csll, val);
            } else if (choice == 2) {
                printf("Valeur a inserer: ");
                scanf("%d", &val);
                csll = insertTailCSLL(csll, val);
            } else if (choice == 3) {
                printCSLL(csll);
            }
            break;
        }
        case 4: {
            int choice;
            printf("\n Liste doublement chainee circulaire \n");
            printf("1. Inserer en tete\n");
            printf("2. Inserer en queue\n");
            printf("3. Afficher\n");
            printf("0. Retour\n");
            printf("Choix: ");
            scanf("%d", &choice);

            if (choice == 1) {
                printf("Valeur a inserer: ");
                scanf("%d", &val);
                cdll = insertHeadCDLL(cdll, val);
            } else if (choice == 2) {
                printf("Valeur a inserer: ");
                scanf("%d", &val);
                cdll = insertTailCDLL(cdll, val);
            } else if (choice == 3) {
                printCDLL(cdll);
            }
            break;
        }
        case 0:
            printf("Fin du programme.\n");
            break;
        default:
            printf("Choix invalide !\n");
        }

    } while (choix != 0);

    
    freeSLL(sll);
    freeDLL(dll);
    freeCSLL(csll);
    freeCDLL(cdll);

    return 0;
}

