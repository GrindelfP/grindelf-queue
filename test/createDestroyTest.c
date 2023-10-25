/*
 *   ____        ___
 *  / ___|      / _ \ _   _  ___ _   _  ___
 * | |  _ _____| | | | | | |/ _ \ | | |/ _ \
 * | |_| |_____| |_| | |_| |  __/ |_| |  __/
 *  \____|      \__\_\\__,_|\___|\__,_|\___|
 *
 * Grindelf-Queue project. Queue source code test file, which focuses on testing
 * of creation and destruction of the Queue.
 *
 * Created by GrindelfP on 2023-10-25.
 *
 */

#include "createDestroyTest.h"

void givenQueueSize_WhenCreatedAndDestroyed_ThenNoErrorsOccurredDuringDestroying() {

    char *testName = "GIVEN queues size, WHEN created and destroyed, THEN no errors occurred during destroying";

    Queue queue = init(15);

    int destroyResult = destroy(&queue);

    if (destroyResult != 0) ERROR_MESSAGE(testName);
    else SUCCESS_MESSAGE(testName);
}