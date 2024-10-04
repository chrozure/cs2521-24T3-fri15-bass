#include <stdio.h>

#include "Queue.h"

int main(void) {

    Queue q = QueueNew();

    printf("Enqueueing: 3 1 4\n\n");
    QueueEnqueue(q, 3);
    QueueEnqueue(q, 1);
    QueueEnqueue(q, 4);

    printf("Dequeued: %d\n", QueueDequeue(q));
    printf("Dequeued: %d\n\n", QueueDequeue(q));

    printf("Enqueueing: 2 0\n\n");
    QueueEnqueue(q, 2);
    QueueEnqueue(q, 0);

    printf("Dequeued: %d\n", QueueDequeue(q));
    printf("Dequeued: %d\n", QueueDequeue(q));
    printf("Dequeued: %d\n", QueueDequeue(q));
}
