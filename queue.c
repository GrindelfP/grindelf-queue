/*
 *    ____        ___
 *  / ___|      / _ \ _   _  ___ _   _  ___
 * | |  _ _____| | | | | | |/ _ \ | | |/ _ \
 * | |_| |_____| |_| | |_| |  __/ |_| |  __/
 * \____|      \__\_\\__,_|\___|\__,_|\___|
 *
 * Grindelf-Queue project. Queue source file
 *
 * Created by GrindelfP on 2023-10-05.
 *
 */

#include "queue.h"

/*
 * Initializes Queue.
 * Sets Queue's size equal to size passed as a parameter.
 * Sets Queue's cursor equal to 0 as initial position.
 * Initializes Queue's content as a 2-d array of chars with lengths of size
 * (length of simple arrays is not pre-defined).
 *
 * @param size - size of the queue as a container.
 *
 * @return 0 if enqueueing completed and -1 if an error occurred.
 */
Queue init(int size) {
    Queue queue;
    char *container[size];
    queue.size = size;
    queue.cursor = INITIAL_CURSOR_POSITION;
    queue.content = container;

    return queue;
}

/*
 * Enqueues a char* element into queue.
 *
 * @param queue - queue on which operation is performed.
 * @param element - element which will be enqueued.
 *
 * @return 0 if enqueueing completed and -1 if an error occurred.
 */
int enqueue(Queue *queue, char *element) {
    int completion = -1;

    if (queue->cursor != queue->size - 1) {
        queue->content[queue->cursor++] = element;
        completion = 0;
    }

    return completion;
}

/*
 * Dequeues a char* element into queue.
 *
 * @param queue - queue on which operation is performed.
 *
 * @return DequeuePair containing dequeued value and result code.
 *         0 is returned if function worked without errors,
 *         -1 if errors occurred (this case dequeued value equals NULL).
 */
DequeuePair dequeue(Queue *queue) {
    DequeuePair result;

    if (queue->cursor == 0) {
        result.value = NULL;
        result.resultCode = -1;
    } else {
        result.value = queue->content[0];
        result.resultCode = shift(queue);
    }

    return result;
}

/*
 * Shifts queue's content to the beginning after first element is dequeued.
 *
 * @param queue - queue on which operation is performed.
 *
 * @return 0 if function worked without errors, -1 if errors occurred.
 */
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
