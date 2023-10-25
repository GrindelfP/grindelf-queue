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

#ifndef GRINDELF_QUEUE_ENQUEUE_PEEK_DEQUEUE_TEST_H
#define GRINDELF_QUEUE_ENQUEUE_PEEK_DEQUEUE_TEST_H

#include "test.h"

void
givenInitializedQueueAndOneElement_WhenEnqueuedElements_ThenNoErrorsOccurredDuringEnqueueingAndPeekingAndDequeueing();

void givenInitializedQueueAndElement_WhenEnqueuedOverQueueSizeElements_ThenErrorOfFullQueueOccurred();

void givenInitializedQueueAndElement_WhenDequeuedOverQueueSizeElements_ThenErrorOfEmptyQueueOccurred();

#endif //GRINDELF_QUEUE_ENQUEUE_PEEK_DEQUEUE_TEST_H
