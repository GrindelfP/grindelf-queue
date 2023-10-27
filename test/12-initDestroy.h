/*
 *   ____        ___
 *  / ___|      / _ \ _   _  ___ _   _  ___
 * | |  _ _____| | | | | | |/ _ \ | | |/ _ \
 * | |_| |_____| |_| | |_| |  __/ |_| |  __/
 *  \____|      \__\_\\__,_|\___|\__,_|\___|
 *
 * Grindelf-Queue project. Queue test header file, which focuses on testing
 * of initialization and destruction of the Queue.
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

#ifndef GRINDELF_QUEUE_CREATE_DESTROY_TEST_H
#define GRINDELF_QUEUE_CREATE_DESTROY_TEST_H

#include "test.h"

/**
 * Tests if no errors occurred on creating and destroying the Queue.
 * <ol>
 * <li>queue is created </li>
 * <li>queue is destroyed </li>
 * </ol>
 */
void givenQueueSize_WhenCreatedAndDestroyed_ThenNoErrorsOccurredDuringDestroying();

/**
 * Tests if error of wrong size occurred on creating the Queue with size lesser than 1.
 * <p><strong>Important:</strong> this test can be run only after Test 1!</p>
 * <ol>
 * <li>queue is created with size lesser than 1 </li>
 * <li>error of wrong size occurs</li>
 * </ol>
 */
void givenQueueWrongSize_WhenCreated_ThenErrorOfWrongSizeOccurred();

#endif //GRINDELF_QUEUE_CREATE_DESTROY_TEST_H
