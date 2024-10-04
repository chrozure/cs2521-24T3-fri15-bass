#include <stdlib.h>

#include "Stack.h"
#include "Queue.h"

struct queue {
	Stack s1;
	Stack s2;
};

Queue QueueNew(void) {
	Queue q = malloc(sizeof(*q));
	q->s1 = StackNew();
	q->s2 = StackNew();
	return q;
}

void QueueFree(Queue q) {
	StackFree(q->s1);
	StackFree(q->s2);
	free(q);
}

void QueueEnqueue(Queue q, int item) {
	StackPush(q->s1, item);
}

int QueueDequeue(Queue q) {

	// take everything off of stack 1 and put it on stack 2
	while (StackSize(q->s1) > 0) {
		int item = StackPop(q->s1);
		StackPush(q->s2, item);
	}

	// take off the top of stack 2
	int returnNumber = StackPop(q->s2);

	// put everything on stack 2 back onto stack 1
	while (StackSize(q->s2) > 0) {
		int item = StackPop(q->s2);
		StackPush(q->s1, item);
	}

	return returnNumber;
}


