/*
 *   ____        ___
 *  / ___|      / _ \ _   _  ___ _   _  ___
 * | |  _ _____| | | | | | |/ _ \ | | |/ _ \
 * | |_| |_____| |_| | |_| |  __/ |_| |  __/
 *  \____|      \__\_\\__,_|\___|\__,_|\___|
 *
 * Grindelf-Queue project. Queue source code file
 *
 * Created by GrindelfP on 2023-10-05.
 *
 */

#include "queue.h"

Queue init(int size) {
    Queue queue;

    if (size > 0) {
        char **array = (char **) malloc(size * sizeof(char *));
        for (int i = 0; i < size; ++i) {
            array[i] = (char *) malloc(ELEMENT_SIZE * sizeof(char));
        }
        queue.content = array;

        queue.size = size;
        queue.frontCursor = INITIAL_CURSOR_POSITION;
        queue.backCursor = INITIAL_CURSOR_POSITION;
        queue.numberOfElements = 0;

        printf("Queue initialized!\n");
    } else { NULL_QUEUE; NULL_QUEUE_MESSAGE; }

    return queue;
}

int enqueue(Queue *queue, char *element) {
    int completion = QUEUE_OVERFLOW_ERROR;

    if (queue->numberOfElements != queue->size) {
        queue->content[queue->backCursor] = (char *) malloc(sizeof(element));
        strcpy(queue->content[queue->backCursor], element);
        queue->backCursor = (queue->backCursor + 1) % queue->size;
        queue->numberOfElements++;
        completion = 0;

        printf("Element %s enqueued!\n", element);
    }

    return completion;
}

char *dequeue(Queue *queue) {
    char *result = NULL;

    if (queue->numberOfElements == 0) {
        result = EMPTY_QUEUE_ERROR;
    } else {
        size_t elementSize = sizeof(queue->content[queue->frontCursor]);
        strncpy(result, queue->content[queue->frontCursor], elementSize);
        queue->frontCursor = (queue->frontCursor + 1) % queue->size;
        queue->numberOfElements--;
    }
    printf("Element %s dequeued!\n", result);

    return result;
}

char *peek(Queue *queue) {
    char *result = NULL;

    if (queue->numberOfElements == 0) {
        result = EMPTY_QUEUE_ERROR;
    } else {
        size_t elementSize = sizeof(queue->content[queue->frontCursor]);
        strncpy(result, queue->content[queue->frontCursor], elementSize);
    }
    printf("Element %s peeked!\n", result);

    return result;
}

int destroy(Queue *queue) {
    for (int i = 0; i < queue->size; i++) {
        free(queue->content[i]);
    }
    free(queue->content);
    printf("Queue destroyed!\n");

    return 0;
}
