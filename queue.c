/*
 *   ____        ___
 *  / ___|      / _ \ _   _  ___ _   _  ___
 * | |  _ _____| | | | | | |/ _ \ | | |/ _ \
 * | |_| |_____| |_| | |_| |  __/ |_| |  __/
 *  \____|      \__\_\\__,_|\___|\__,_|\___|
 *
 * Grindelf-Queue project. Queue source file
 *
 * Created by GrindelfP on 2023-10-05.
 *
 */

#include <printf.h>
#include "queue.h"

Queue init(int size) {
    Queue queue;
    //int container[size];
    queue.size = size;
    queue.cursor = INITIAL_CURSOR_POSITION;
    queue.content = malloc(sizeof(int) * size);

    printf("Queue initialized!\n");

    return queue;
}

int enqueue(Queue *queue, int element) {
    int completion = -1;

    if (queue->cursor < queue->size) {
        queue->content[queue->cursor] = element;
        queue->cursor++;
        completion = 0;
        printf("Element %d enqueued!\n", element);
    }

    return completion;
}

DequeuePair dequeue(Queue *queue) {
    DequeuePair result;

    if (queue->cursor == 0) {
        result.value = nullptr;
        result.resultCode = -1;
    } else {
        int value = queue->content[0];
        result.value = value;
        result.resultCode = shift(queue);
        printf("Element %d dequeued!\n", value);
    }

    return result;
}

DequeuePair peek(Queue *queue) {
    DequeuePair result;

    if (queue->cursor == 0) {
        result.value = nullptr;
        result.resultCode = -1;
    } else {
        result.value = queue->content[0];
        result.resultCode = 0;
    }

    return result;
}

int destroy(Queue *pQueue) {
    free(pQueue);

    return 0;
}

int shift(Queue *queue) {
    int completion = -1;

    if (queue->size >= 1) {
        queue->content++;
        queue->cursor--;
        queue->size--;
        completion = 0;
    }

    return completion;
}
