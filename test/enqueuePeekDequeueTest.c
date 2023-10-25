/*
 *   ____        ___
 *  / ___|      / _ \ _   _  ___ _   _  ___
 * | |  _ _____| | | | | | |/ _ \ | | |/ _ \
 * | |_| |_____| |_| | |_| |  __/ |_| |  __/
 *  \____|      \__\_\\__,_|\___|\__,_|\___|
 *
 * Grindelf-Queue project. Queue test file, which focuses on testing of creation and destruction of the Queue.
 *
 * Created by GrindelfP on 2023-10-25.
 *
 */

#include "enqueuePeekDequeueTest.h"

void
givenInitializedQueueAndOneElement_WhenEnqueuedElements_ThenNoErrorsOccurredDuringEnqueueingAndPeekingAndDequeueing() {

    char *testName = "GIVEN initialized queue AND one element, WHEN enqueued elements, THEN no errors occurred during enqueueing and peeking and dequeueing";

    Queue queue = init(15);

    char *element = "element1";

    enqueue(&queue, element);


    char *peekedElement = peek(&queue);
    char *dequeuedElement = dequeue(&queue);

    if (peekedElement == element && dequeuedElement == element) SUCCESS_MESSAGE(testName);
    else
        ERROR_MESSAGE(testName);

    destroy(&queue);
}

void givenInitializedQueueAndElement_WhenEnqueuedOverQueueSizeElements_ThenErrorOfFullQueueOccurred() {

    char *testName = "GIVEN initialized queue AND element, WHEN enqueued over queue size elements, THEN error of full queue occurred";

    Queue queue = init(15);

    char *element = "element1";


    for (int i = 0; i < 16; ++i) {
        enqueue(&queue, element);
    }

    int enqueueResult = enqueue(&queue, element);

    if (enqueueResult == QUEUE_OVERFLOW_ERROR) SUCCESS_MESSAGE(testName);
    else
        ERROR_MESSAGE(testName);

    destroy(&queue);
}

void givenInitializedQueueAndElement_WhenDequeuedOverQueueSizeElements_ThenErrorOfEmptyQueueOccurred() {

    char *testName = "GIVEN initialized queue AND element, WHEN dequeued over queue size elements, THEN error of empty queue occurred";

    Queue queue = init(15);

    char *dequeueResult = dequeue(&queue);

    if (dequeueResult == EMPTY_QUEUE_ERROR) SUCCESS_MESSAGE(testName);
    else ERROR_MESSAGE(testName);

    destroy(&queue);
}
