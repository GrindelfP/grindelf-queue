/*
 *   ____        ___
 *  / ___|      / _ \ _   _  ___ _   _  ___
 * | |  _ _____| | | | | | |/ _ \ | | |/ _ \
 * | |_| |_____| |_| | |_| |  __/ |_| |  __/
 *  \____|      \__\_\\__,_|\___|\__,_|\___|
 *
 * Grindelf-Queue project. Queue test source code file, which focuses on testing
 * of creation and destruction of the Queue.
 *
 * (Numbers of the tests are given in order of their execution)
 *
 * Test 1: GIVEN queue's size, WHEN created and destroyed,
 * THEN no errors occurred during destroying.
 *
 * Test 2: GIVEN queue's wrong size, WHEN created,
 * THEN error of wrong size occurred.
 *
 * Created by GrindelfP on 2023-10-22.
 *
 */

#include "1-initDestroy.h"

void givenQueueSize_WhenCreatedAndDestroyed_ThenNoErrorsOccurredDuringDestroying() {

    char *testName = "GIVEN queues size, WHEN created and destroyed, THEN no errors occurred during destroying";

    START_MESSAGE(testName);

    Queue queue = init(15);

    int destroyResult = destroy(&queue);

    if (destroyResult != 0) ERROR_MESSAGE(testName);
    else SUCCESS_MESSAGE(testName);
}

void givenQueueWrongSize_WhenCreated_ThenErrorOfWrongSizeOccurred() {

        char *testName = "GIVEN queues wrong size, WHEN created, THEN error of wrong size occurred";

        START_MESSAGE(testName);

        Queue queue = init(-1);

        if (NULL_QUEUE_CHECK(queue.size)) SUCCESS_MESSAGE(testName);
        else ERROR_MESSAGE(testName);

        destroy(&queue);
}
