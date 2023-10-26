/*
 *   ____        ___
 *  / ___|      / _ \ _   _  ___ _   _  ___
 * | |  _ _____| | | | | | |/ _ \ | | |/ _ \
 * | |_| |_____| |_| | |_| |  __/ |_| |  __/
 *  \____|      \__\_\\__,_|\___|\__,_|\___|
 *
 * Grindelf-Queue project. Queue test header file, which focuses on
 * of Queue functionality of dequeueing.
 *
 * (Numbers of the tests are given in order of their execution)
 *
 * Test 7: GIVEN initialized queue AND one element in it, WHEN dequeued element,
 * THEN no errors occurred during dequeueing.
 *
 * Test 8: GIVEN initialized empty queue WHEN try to dequeue element,
 * THEN empty queue error occurred.
 *
 * Created by GrindelfP on 2023-10-25.
 *
 */

#ifndef GRINDELF_QUEUE_78_DEQUEUE_H
#define GRINDELF_QUEUE_78_DEQUEUE_H

#include "test.h"

/**
 * Tests if no errors occurred on dequeueing the Queue.
 * The test uses also enqueueing, because successful dequeueing is not possible without enqueueing.
 * <p><strong>Important:</strong> this test can be run only after Tests from 1 to 6!</p>
 * <ol>
 * <li>queue is initialized </li>
 * <li>element is enqueued </li>
 * <li>element is dequeued </li>
 * </ol>
 */
void givenInitializedQueueAndOneElementInIt_WhenDequeueElement_ThenNoErrorsOccurredDuringDequeueing();

/**
 * Tests if error of empty queue occurred on dequeueing the empty Queue.
 * <p><strong>Important:</strong> this test can be run only after Tests from 1 to 7!</p>
 * <ol>
 * <li>queue is initialized </li>
 * <li>attempt to dequeue element </li>
 * <li>error of empty queue occurs</li>
 * </ol>
 */
void givenInitializedEmptyQueue_WhenTryToDequeueElement_ThenEmptyQueueErrorOccurred();

#endif //GRINDELF_QUEUE_78_DEQUEUE_H
