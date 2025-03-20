#include "queueMenu.h"

void queueMenu() {
	system("cls");
    Queue q;
    int choice, counter = 1, temp;
    CreateQueue(&q);

    while (1) {
        printf("\n====== QUEUE MENU =======:\n");
        printf("1. Ambil Antrian\n");
        printf("2. Proses Antrian\n");
        printf("3. Cetak Antrian\n");
        printf("4. Keluar\n");
        printf("Pilih: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
            	system("cls");
                enqueue(&q, counter++);
                break;
            case 2:
            	system("cls");
                dequeue(&q, &temp);
                break;
            case 3:
            	system("cls");
                printQueue(q);
                break;
            case 4:
                return;
            default:
                printf("Pilihan tidak valid!\n");
        }
    }
}
