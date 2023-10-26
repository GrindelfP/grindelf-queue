/*
 *   ____        ___
 *  / ___|      / _ \ _   _  ___ _   _  ___
 * | |  _ _____| | | | | | |/ _ \ | | |/ _ \
 * | |_| |_____| |_| | |_| |  __/ |_| |  __/
 *  \____|      \__\_\\__,_|\___|\__,_|\___|
 *
 * Grindelf-Queue project. Queue test source code file, which focuses on
 * of Queue functionality dequeueing.
 *
 * (Numbers of the tests are given in order of their execution)
 *
 * Test 7: GIVEN initialized queue AND one element in it, WHEN dequeued element,
 * THEN no errors occurred during dequeueing.
 *
 * Test 8: GIVEN initialized empty queue WHEN try to dequeue element,
 * THEN empty queue error occurred.
 *
 * Created by GrindelfP on 2023-10-25.
 *
 */

#include "78-dequeue.h"

test givenInitializedQueueAndOneElementInIt_WhenEnqueuedElements_ThenNoErrorsOccurredDuringDequeueing() {

    char *testName = "GIVEN initialized queue AND one element, WHEN enqueued elements, THEN no errors occurred during enqueueing and peeking and dequeueing";

    START_MESSAGE(testName);

    Queue queue = init(15);

    char *element = "element1";

    enqueue(&queue, element);

    char *dequeuedElement = dequeue(&queue);

    if (dequeuedElement == element) SUCCESS_MESSAGE(testName);
    else
        ERROR_MESSAGE(testName);

    destroy(&queue);
}

test givenInitializedEmptyQueue_WhenTryToDequeueElement_ThenEmptyQueueErrorOccurred() {

    char *testName = "GIVEN initialized empty queue, WHEN try to dequeue element, THEN empty queue error occurred";

    START_MESSAGE(testName);

    Queue queue = init(15);

    char *dequeuedElement = dequeue(&queue);

    if (dequeuedElement == EMPTY_QUEUE_ERROR) SUCCESS_MESSAGE(testName);
    else
        ERROR_MESSAGE(testName);

    destroy(&queue);
}


