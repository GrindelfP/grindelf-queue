/*
 *   ____        ___
 *  / ___|      / _ \ _   _  ___ _   _  ___
 * | |  _ _____| | | | | | |/ _ \ | | |/ _ \
 * | |_| |_____| |_| | |_| |  __/ |_| |  __/
 *  \____|      \__\_\\__,_|\___|\__,_|\___|
 *
 * Grindelf-Queue project. Queue header file
 *
 * Created by GrindelfP on 2023-10-05.
 *
 */

#ifndef GRINDELF_QUEUE_QUEUE_H
#define GRINDELF_QUEUE_QUEUE_H

#include <stdlib.h>
#include <printf.h>
#include <assert.h>
#include <string.h>

#define INITIAL_CURSOR_POSITION 0
#define ELEMENT_SIZE 100
#define QUEUE_OVERFLOW_ERROR (-1)
#define EMPTY_QUEUE_ERROR NULL

/**
 * Struct represents a Queue data container.
 *
 * <p><strong>Content</strong></p>
 * <ol>
 * <li> content - a 2d array of char, containing values of the Queue, </li>
 * <li> size - size of the Queue, </li>
 * <li> frontCursor - an index of the first added element, which moves forward if an element is dequeued, </li>
 * <li> backCursor - an index of the last added element, which moves forward if a new element is enqueued, </li>
 * <li> numberOfElements - number of elements in the Queue. </li>
 * </ol>
 */
struct Queue {
    char **content;
    int size;
    int frontCursor;
    int backCursor;
    int numberOfElements;
} typedef Queue;

/**
 * Initializes Queue.
 * Sets Queue's size equal to size passed as a parameter.
 * Sets Queue's backCursor equal to 0 as initial position.
 * Initializes Queue's content as a 2-d array of chars with lengths of size
 * (length of simple arrays is not pre-defined).
 *
 * @param size - size of the queue as a container.
 *
 * @return 0 if enqueueing completed and -1 if an error occurred.
 *
 * <strong>IMPORTANT:</strong>
 * Make sure to call destroy() function when you are done using the Queue
 * to avoid memory leaks.
 */
Queue init(int size);

/**
 * Enqueues a char* element into queue.
 *
 * @param queue - queue on which operation is performed.
 * @param element - element which will be enqueued in a form of char array.
 *
 * @return 0 if enqueueing completed and -1 if an error occurred.
 */
int enqueue(Queue *queue, char *element);

/**
 * Dequeues a char* element into queue.
 *
 * @param queue - queue on which operation is performed.
 *
 * @return char array representation of a value of dequeued element or NULL if the Queue is empty.
 */
char *dequeue(Queue *queue);

/**
 * Returns a char* element from queue without removing it.
 * Used for picking the first element in queue.
 *
 * @param queue - queue on which operation is performed.
 *
 * @return char array representation of a value of dequeued element or NULL if the Queue is empty.
 */
char *peek(Queue *queue);

/**
 * Destroys Queue variable and clears all the memory allocated for it.
 *
 * @param queue Queue variable to be destroyed.
 *
 * @return 0 when Queue variable is destroyed.
 *
 * <strong>IMPORTANT:</strong>
 * Make sure to call this function when you are done using the Queue
 * to avoid memory leaks.
 */
int destroy(Queue *queue);

#endif //GRINDELF_QUEUE_QUEUE_H
