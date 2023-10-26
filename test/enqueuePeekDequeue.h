/*
 *   ____        ___
 *  / ___|      / _ \ _   _  ___ _   _  ___
 * | |  _ _____| | | | | | |/ _ \ | | |/ _ \
 * | |_| |_____| |_| | |_| |  __/ |_| |  __/
 *  \____|      \__\_\\__,_|\___|\__,_|\___|
 *
 * Grindelf-Queue project. Queue test header file, which focuses on
 * of Queue functionality of enqueueing, peeking and dequeueing.
 *
 * (Numbers of the tests are given in order of their execution)
 *
 * Test 2: GIVEN initialized queue AND one element, WHEN enqueued elements,
 * THEN no errors occurred during enqueueing and peeking and dequeueing.
 *
 * Test 3: GIVEN initialized queue AND element, WHEN enqueued over queue size elements,
 * THEN error of full queue occurred.
 *
 * Test 4: GIVEN initialized queue AND element, WHEN dequeued over queue size elements,
 * THEN error of empty queue occurred.
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
