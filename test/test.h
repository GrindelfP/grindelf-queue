/*
 *   ____        ___
 *  / ___|      / _ \ _   _  ___ _   _  ___
 * | |  _ _____| | | | | | |/ _ \ | | |/ _ \
 * | |_| |_____| |_| | |_| |  __/ |_| |  __/
 *  \____|      \__\_\\__,_|\___|\__,_|\___|
 *
 * Grindelf-Queue project. Project common header file for tests.
 *
 * Created by GrindelfP on 2023-10-25.
 *
 */

#ifndef GRINDELF_QUEUE_COMMON_TESTS_H
#define GRINDELF_QUEUE_COMMON_TESTS_H

#include <stdio.h>
#include "../queue/queue.h"

#include "12-initDestroy.h"
#include "34-enqueue.h"
#include "56-peek.h"
#include "78-dequeue.h"

#define START_MESSAGE(x) printf("\033[1;34m\nStarting test '%s'.\n\033[0m", x)
#define ERROR_MESSAGE(x) printf("\033[1;31mError occurred while completing test '%s'.\n\033[0m", x)
#define SUCCESS_MESSAGE(x) printf("\033[1;32mTest '%s' completed successfully!\n\033[0m", x)
#define test void

#endif //GRINDELF_QUEUE_COMMON_TESTS_H
