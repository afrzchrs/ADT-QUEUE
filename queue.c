#include "queue.h"

void CreateQueue(Queue *Q) {
    *Q = NULL;
}

boolean is_Empty(Queue Q) {
    return isEmpty(Q);
}

boolean is_Full(Queue Q) {
    address temp;
    Create_Node(&temp);
    if (temp == NULL) {
        return 1;
    }
    free(temp);
    return 0;
}

void enqueue(Queue *q, infotype X) {
    address PNew;
    Create_Node(&PNew);
    if (PNew != NULL) {
        Isi_Node(&PNew, X);
        if (is_Empty(*q)) {
            *q = PNew;
        } else {
            address temp = *q;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            InsertAfter(temp, PNew);
        }
        printf("Nomor antrian %d telah ditambahkan.\n", X);
    }
}

void dequeue(Queue *q, infotype *X) {
    if (is_Empty(*q)) {
        printf("Antrian kosong!\n");
        return;
    }
    Del_Awal(q, X);
    printf("Nomor antrian %d sedang diproses.\n", *X);
}

void printQueue(Queue q) {
    if (is_Empty(q)) {
        printf("Antrian kosong!\n");
        return;
    }
    printf("Antrian saat ini: ");
    Tampil_List(q);
}
