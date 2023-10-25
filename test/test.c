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
 * Created by GrindelfP on 2023-10-05.
 *
 */

#include "createDestroyTest.h"
#include "enqueuePeekDequeueTest.h"

int main() {
    givenQueueSize_WhenCreatedAndDestroyed_ThenNoErrorsOccurredDuringDestroying();

    givenInitializedQueueAndElement_WhenDequeuedOverQueueSizeElements_ThenErrorOfEmptyQueueOccurred();

    givenInitializedQueueAndElement_WhenEnqueuedOverQueueSizeElements_ThenErrorOfFullQueueOccurred();

    givenInitializedQueueAndOneElement_WhenEnqueuedElements_ThenNoErrorsOccurredDuringEnqueueingAndPeekingAndDequeueing();


    return 0;
}
