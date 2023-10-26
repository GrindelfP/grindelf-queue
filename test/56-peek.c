/*
 *   ____        ___
 *  / ___|      / _ \ _   _  ___ _   _  ___
 * | |  _ _____| | | | | | |/ _ \ | | |/ _ \
 * | |_| |_____| |_| | |_| |  __/ |_| |  __/
 *  \____|      \__\_\\__,_|\___|\__,_|\___|
 *
 * Grindelf-Queue project. Queue test source code file, which focuses on
 * of Queue functionality of peeking.
 *
 * (Numbers of the tests are given in order of their execution)
 *
 * Test 5: GIVEN initialized queue AND one element in it, WHEN peeked element,
 * THEN no errors occurred during peeking.
 *
 * Test 6: GIVEN initialized empty queue AND one element in it, WHEN peeked element,
 * THEN error of empty queue occurred.
 *
 * Created by GrindelfP on 2023-10-26.
 *
 */

#include "56-peek.h"

test givenInitializedQueueAndOneElementInIt_WhenEnqueuedElements_ThenNoErrorsOccurredDuringPeeking() {

    char *testName = "GIVEN initialized queue AND one element, "
                     "WHEN enqueued elements, THEN no errors occurred during peeking";

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

test givenInitializedEmptyQueueAndOneElementInIt_WhenEnqueuedElements_ThenEmptyQueueErrorOccurred() {

    char *testName = "GIVEN initialized empty queue AND one element in it, "
                     "WHEN peeked element, THEN empty queue error occurred";

    START_MESSAGE(testName);

    Queue queue = init(15);

    char *peekedElement = peek(&queue);

    if (peekedElement == EMPTY_QUEUE_ERROR) SUCCESS_MESSAGE(testName);
    else
        ERROR_MESSAGE(testName);

    destroy(&queue);
}
