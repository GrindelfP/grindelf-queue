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
 * Test 3: GIVEN initialized queue AND one element in it, WHEN peeked element,
 * THEN no errors occurred during peeking.
 *
 * Test 4: GIVEN initialized empty queue AND one element in it, WHEN peeked element,
 * THEN error of empty queue occurred.
 *
 * Created by GrindelfP on 2023-10-26.
 *
 */
#ifndef GRINDELF_QUEUE_34_PEEK_H
#define GRINDELF_QUEUE_34_PEEK_H

#include "test.h"

/**
 * Tests if no errors occurred on peeking the Queue.
 * The test uses also enqueueing, because successful peeking is not possible without enqueueing.
 * <p><strong>Important:</strong> this test can be run only after Tests 1, 2!</p>
 * <ol>
 * <li>queue is initialized </li>
 * <li>element is enqueued </li>
 * <li>element is peeked </li>
 * </ol>
 */
void givenInitializedQueueAndOneElementInIt_WhenEnqueuedElements_ThenNoErrorsOccurredDuringPeeking();

/**
 * Tests if error of empty queue occurred on peeking the Queue.
 * <p><strong>Important:</strong> this test can be run only after Tests 1, 2, 3!</p>
 * <ol>
 * <li>queue is initialized </li>
 * <li>attempt to peek element </li>
 * <li>error of empty queue occurs</li>
 * </ol>
 */
void givenInitializedEmptyQueueAndOneElementInIt_WhenEnqueuedElements_ThenErrorOfEmptyQueueOccurred();

#endif //GRINDELF_QUEUE_34_PEEK_H
