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

#define INITIAL_CURSOR_POSITION 0
#define NULL "\0"

/*
 * Struct represents a Queue data container.
 * Contains:
 *   -  size - constant size of the container.
 *   -  cursor - an index of the last added element.
 *   -  content - a 2-d array of characters, which store
 *                elements in form of 0-tempered strings.
 */
struct Queue {
    int size;
    int cursor;
    char **content;
} typedef Queue;

/*
 * Struct used to wrap return value of Queue's dequeue() function.
 * Contains:
 *   -  value - the return value after dequeue() is completed. In case of
 *              error is initiated with NULL value.
 *   -  resultCode - equals 0 if dequeue() is completed correctly, -1 otherwise.
 */
struct DequeuePair {
    char *value;
    int resultCode;
} typedef DequeuePair;

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
Queue init(int size);

/*
 * Enqueues a char* element into queue.
 *
 * @param queue - queue on which operation is performed.
 * @param element - element which will be enqueued.
 *
 * @return 0 if enqueueing completed and -1 if an error occurred.
 */
int enqueue(Queue *queue, char *element);

/*
 * Dequeues a char* element into queue.
 *
 * @param queue - queue on which operation is performed.
 *
 * @return DequeuePair containing dequeued value and result code.
 *         0 is returned if function worked without errors,
 *         -1 if errors occurred (this case dequeued value equals NULL).
 */
DequeuePair dequeue(Queue *queue);

/*
 * Shifts queue's content to the beginning after first element is dequeued.
 *
 * @param queue - queue on which operation is performed.
 *
 * @return 0 if function worked without errors, -1 if errors occurred.
 */
int shift(Queue *queue);

#endif //GRINDELF_QUEUE_QUEUE_H
