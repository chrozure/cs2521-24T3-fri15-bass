#ifndef QUEUE_H

typedef struct queue *Queue;

// Creates a new empty Queue
Queue QueueNew(void);

// Enqueues an item onto the Queue
void QueueEnqueue(Queue q, int item);

// Dequeues an item from the Queue and returns it
// Assumes that the queue is not empty
int QueueDequeue(Queue q);

// Frees memory associated with a Queue
void QueueFree(Queue q);

#endif
