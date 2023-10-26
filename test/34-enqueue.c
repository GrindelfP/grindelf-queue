/*
 *   ____        ___
 *  / ___|      / _ \ _   _  ___ _   _  ___
 * | |  _ _____| | | | | | |/ _ \ | | |/ _ \
 * | |_| |_____| |_| | |_| |  __/ |_| |  __/
 *  \____|      \__\_\\__,_|\___|\__,_|\___|
 *
 * Grindelf-Queue project. Queue test source code file, which focuses on
 * of Queue functionality of enqueueing.
 *
 * (Numbers of the tests are given in order of their execution)
 *
 * Test 3: GIVEN initialized queue AND one element, WHEN enqueued elements,
 * THEN no errors occurred during enqueueing.
 *
 * Test 4: GIVEN initialized and full queue AND one more elements, WHEN try to enqueue element,
 * THEN queue overflow error occurred.
 *
 * Created by GrindelfP on 2023-10-26.
 *
 */

#include "34-enqueue.h"

test givenInitializedQueueAndOneElement_WhenEnqueuedElements_ThenNoErrorsOccurredDuringEnqueueing() {

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

test givenInitializedAndFullQueueAndOneMoreElements_WhenTryToEnqueueElement_ThenQueueOverflowErrorOccurred() {

    char *testName = "GIVEN initialized and full queue AND one more elements, "
                     "WHEN try to enqueue element, THEN queue overflow error occurred";

    START_MESSAGE(testName);

    Queue queue = init(1);

    char *element = "element1";

    enqueue(&queue, element);

    int equeueingResult = enqueue(&queue, element);

    if (equeueingResult == QUEUE_OVERFLOW_ERROR) SUCCESS_MESSAGE(testName);
    else
        ERROR_MESSAGE(testName);

    destroy(&queue);
}
