/*
 *   ____        ___
 *  / ___|      / _ \ _   _  ___ _   _  ___
 * | |  _ _____| | | | | | |/ _ \ | | |/ _ \
 * | |_| |_____| |_| | |_| |  __/ |_| |  __/
 *  \____|      \__\_\\__,_|\___|\__,_|\___|
 *
 * Grindelf-Queue project. Queue testing source code file.
 * All the tests are written to be used without any testing framework,
 * so anyone obtaining this library can test it without any additional software.
 *
 * Test are separated into different files named with functionality they test.
 * The files also contain documentation of the tests.
 *
 * Created by GrindelfP on 2023-10-05.
 *
 */

#include "test.h"

int main() {
    // Test 1. Normal initialization and destruction of the Queue
    givenQueueSize_WhenCreatedAndDestroyed_ThenNoErrorsOccurredDuringDestroying();

    // Test 2. Initialization of the Queue with wrong size (-1)
    givenQueueWrongSize_WhenCreated_ThenErrorOfWrongSizeOccurred();

    // Test 3. Normal enqueueing elements to the Queue
    givenInitializedQueueAndOneElement_WhenEnqueuedElements_ThenNoErrorsOccurredDuringEnqueueing();

    // Test 4. Enqueueing elements to the full Queue
    givenInitializedAndFullQueueAndOneMoreElements_WhenTryToEnqueueElement_ThenQueueOverflowErrorOccurred();

    // Test 5. Normal peeking elements from the Queue
    givenInitializedQueueAndOneElementInIt_WhenEnqueuedElements_ThenNoErrorsOccurredDuringPeeking();

    // Test 6. Peeking elements from the empty Queue
    givenInitializedEmptyQueueAndOneElementInIt_WhenEnqueuedElements_ThenEmptyQueueErrorOccurred();

    // Test 7. Normal dequeueing elements from the Queue
    givenInitializedQueueAndOneElementInIt_WhenEnqueuedElements_ThenNoErrorsOccurredDuringDequeueing();

    // Test 8. Dequeueing elements from the empty Queue
    givenInitializedEmptyQueue_WhenTryToDequeueElement_ThenEmptyQueueErrorOccurred();

    return 0;
}
