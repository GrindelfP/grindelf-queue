/*
 *   ____        ___
 *  / ___|      / _ \ _   _  ___ _   _  ___
 * | |  _ _____| | | | | | |/ _ \ | | |/ _ \
 * | |_| |_____| |_| | |_| |  __/ |_| |  __/
 *  \____|      \__\_\\__,_|\___|\__,_|\___|
 *
 * Grindelf-Queue project. Queue test source code file, which focuses on
 * of Queue functionality of enqueueing, peeking and dequeueing.
 *
 * (Numbers of the tests are given in order of their execution)
 *
 * Test 2: GIVEN initialized queue AND one element, WHEN enqueued elements,
 * THEN no errors occurred during enqueueing.
 *
 * Test 3: GIVEN initialized queue AND one element in it, WHEN peeked element,
 * THEN no errors occurred during peeking.
 *
 * Test 4: GIVEN initialized queue AND one element in it, WHEN dequeued element,
 * THEN no errors occurred during dequeueing.
 *
 * Test 5: GIVEN initialized queue AND element, WHEN enqueued over queue size elements,
 * THEN error of full queue occurred.
 *
 * Test 6: GIVEN initialized queue AND element, WHEN dequeued over queue size elements,
 * THEN error of empty queue occurred.
 *
 * Created by GrindelfP on 2023-10-25.
 *
 */

#include "enqueuePeekDequeue.h"

/**
 * Tests if no errors occurred on enqueueing into the Queue.
 * <p><strong>Important:</strong> this test can be run only after Test 1!</p>
 * <ol>
 * <li>queue is initialized </li>
 * <li>element is enqueued </li>
 * </ol>
 */
void
givenInitializedQueueAndOneElement_WhenEnqueuedElements_ThenNoErrorsOccurredDuringEnqueueing() {

    char *testName = "GIVEN initialized queue AND one element, "
                     "WHEN enqueued elements, THEN no errors occurred during enqueueing";

    START_MESSAGE(testName);

    Queue queue = init(15);

    char *element = "element1";

    int equeueingResult = enqueue(&queue, element);

    if (equeueingResult == 0) SUCCESS_MESSAGE(testName);
    else
        ERROR_MESSAGE(testName);

    destroy(&queue);
}

void
givenInitializedQueueAndOneElementInIt_WhenEnqueuedElements_ThenNoErrorsOccurredDuringEnqueueingDequeueing() {

    char *testName = "GIVEN initialized queue AND one element, WHEN enqueued elements, THEN no errors occurred during enqueueing and peeking and dequeueing";

    START_MESSAGE(testName);

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

    START_MESSAGE(testName);

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

    START_MESSAGE(testName);

    Queue queue = init(15);

    char *dequeueResult = dequeue(&queue);

    if (dequeueResult == EMPTY_QUEUE_ERROR) SUCCESS_MESSAGE(testName);
    else
        ERROR_MESSAGE(testName);

    destroy(&queue);
}
