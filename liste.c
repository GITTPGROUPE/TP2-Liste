#include "list.h"

// liste simplement chainee
SNode* insertSortedSLL(SNode* head, int value) {
    SNode* newNode = malloc(sizeof(SNode));
    newNode->data = value;
    newNode->next = NULL;

    if (!head || value < head->data) {
        newNode->next = head;
        return newNode;
    }

    SNode* curr = head;
    while (curr->next && curr->next->data < value)
        curr = curr->next;

    newNode->next = curr->next;
    curr->next = newNode;
    return head;
}

SNode* deleteOccurrencesSLL(SNode* head, int value) {
    while (head && head->data == value) {
        SNode* tmp = head;
        head = head->next;
        free(tmp);
    }
    SNode* curr = head;
    while (curr && curr->next) {
        if (curr->next->data == value) {
            SNode* tmp = curr->next;
            curr->next = tmp->next;
            free(tmp);
        } else {
            curr = curr->next;
        }
    }
    return head;
}

void printSLL(SNode* head) {
    SNode* curr = head;
    while (curr != NULL) {
        printf("%d  ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}


void freeSLL(SNode* head) {
    while (head) {
        SNode* tmp = head;
        head = head->next;
        free(tmp);
    }
}

// liste doublement chainee
DNode* insertSortedDLL(DNode* head, int value) {
    DNode* newNode = malloc(sizeof(DNode));
    newNode->data = value;
    newNode->prev = newNode->next = NULL;

    if (!head || value < head->data) {
        newNode->next = head;
        if (head) head->prev = newNode;
        return newNode;
    }

    DNode* curr = head;
    while (curr->next && curr->next->data < value)
        curr = curr->next;

    newNode->next = curr->next;
    if (curr->next) curr->next->prev = newNode;
    curr->next = newNode;
    newNode->prev = curr;
    return head;
}

void printDLL(DNode* head) {
    DNode* curr = head;
    while (curr != NULL) {
        printf("%d  ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}


void freeDLL(DNode* head) {
    while (head) {
        DNode* tmp = head;
        head = head->next;
        free(tmp);
    }
}

// Liste simplement chainee circulaire
CSNode* insertHeadCSLL(CSNode* tail, int value) {
    CSNode* newNode = malloc(sizeof(CSNode));
    newNode->data = value;

    if (!tail) {
        newNode->next = newNode;
        return newNode;
    }
    newNode->next = tail->next;
    tail->next = newNode;
    return tail;
}

CSNode* insertTailCSLL(CSNode* tail, int value) {
    tail = insertHeadCSLL(tail, value);
    return tail->next; 
}

void printCSLL(CSNode* tail) {
    if (!tail) {
        printf("Liste vide\n");
        return;
    }
    CSNode* curr = tail->next; // tête
    while (1) {
        printf("%d  ", curr->data);
        curr = curr->next;
        if (curr == tail->next) break; 
    }
    printf("\n");
}

void freeCSLL(CSNode* tail) {
    if (!tail) return;
    CSNode* curr = tail->next;
    while (curr != tail) {
        CSNode* tmp = curr;
        curr = curr->next;
        free(tmp);
    }
    free(tail);
}
// liste doublement chainee circulaire
CDNode* insertHeadCDLL(CDNode* tail, int value) {
    CDNode* newNode = malloc(sizeof(CDNode));
    newNode->data = value;

    if (!tail) {
        newNode->next = newNode->prev = newNode;
        return newNode;
    }
    CDNode* head = tail->next;
    newNode->next = head;
    newNode->prev = tail;
    tail->next = newNode;
    head->prev = newNode;
    return tail;
}

CDNode* insertTailCDLL(CDNode* tail, int value) {
    tail = insertHeadCDLL(tail, value);
    return tail->next; 
}

void printCDLL(CDNode* tail) {
    if (!tail) {
        printf("Liste vide\n");
        return;
    }
    CDNode* curr = tail->next; 
    while (1) {
        printf("%d  ", curr->data);
        curr = curr->next;
        if (curr == tail->next) break; 
    }
    printf("\n");
}

void freeCDLL(CDNode* tail) {
    if (!tail) return;
    CDNode* curr = tail->next;
    while (curr != tail) {
        CDNode* tmp = curr;
        curr = curr->next;
        free(tmp);
    }
    free(tail);
}

