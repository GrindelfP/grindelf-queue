/*
 *   ____        ___
 *  / ___|      / _ \ _   _  ___ _   _  ___
 * | |  _ _____| | | | | | |/ _ \ | | |/ _ \
 * | |_| |_____| |_| | |_| |  __/ |_| |  __/
 *  \____|      \__\_\\__,_|\___|\__,_|\___|
 *
 * Grindelf-Queue project. Queue test header file, which focuses on
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
#ifndef GRINDELF_QUEUE_34_ENQUEUE_H
#define GRINDELF_QUEUE_34_ENQUEUE_H

#include "test.h"

/**
 * Tests if no errors occurred on enqueueing into the Queue.
 * <p><strong>Important:</strong> this test can be run only after Test 1, 2!</p>
 * <ol>
 * <li>queue is initialized </li>
 * <li>element is enqueued </li>
 * </ol>
 */
void givenInitializedQueueAndOneElement_WhenEnqueuedElements_ThenNoErrorsOccurredDuringEnqueueing();

/**
 * Tests if error of full queue occurred on enqueueing into the full Queue.
 * <p><strong>Important:</strong> this test can be run only after Test from 1 to 3!</p>
 * <ol>
 * <li>queue is initialized </li>
 * <li>queue is filled with elements </li>
 * <li>attempt to enqueue element </li>
 * <li>error of full queue occurs</li>
 * </ol>
 */
void givenInitializedAndFullQueueAndOneMoreElements_WhenTryToEnqueueElement_ThenQueueOverflowErrorOccurred();

#endif //GRINDELF_QUEUE_34_ENQUEUE_H
