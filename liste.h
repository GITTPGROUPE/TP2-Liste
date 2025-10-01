#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>

// Liste simplement chainee
typedef struct SNode {
    int data;
    struct SNode *next;
} SNode;

// Fonctions liste simplement chainee
SNode* insertSortedSLL(SNode* head, int value);
SNode* deleteOccurrencesSLL(SNode* head, int value);
void printSLL(SNode* head);
void freeSLL(SNode* head);

//  Liste doublement chainee 
typedef struct DNode {
    int data;
    struct DNode *prev;
    struct DNode *next;
} DNode;

// Fonctions liste doublement chainee
DNode* insertSortedDLL(DNode* head, int value);
void printDLL(DNode* head);
void freeDLL(DNode* head);

//  Liste circulaire simplement chainee 
typedef struct CSNode {
    int data;
    struct CSNode *next;
} CSNode;

// Fonctions liste simplement chainee circulaire
CSNode* insertHeadCSLL(CSNode* tail, int value);
CSNode* insertTailCSLL(CSNode* tail, int value);
void printCSLL(CSNode* tail);
void freeCSLL(CSNode* tail);

//  Liste circulaire doublement chainee
typedef struct CDNode {
    int data;
    struct CDNode *prev;
    struct CDNode *next;
} CDNode;

// Fonctions liste doublement chainee circulaire
CDNode* insertHeadCDLL(CDNode* tail, int value);
CDNode* insertTailCDLL(CDNode* tail, int value);
void printCDLL(CDNode* tail);
void freeCDLL(CDNode* tail);

#endif

