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

#define START_MESSAGE(x) printf("\nStarting test '%s'.\n", x)
#define ERROR_MESSAGE(x) printf("Error occurred while completing test '%s'.\n", x)
#define SUCCESS_MESSAGE(x) printf("Test '%s' completed successfully!\n", x)

#endif //GRINDELF_QUEUE_COMMON_TESTS_H
