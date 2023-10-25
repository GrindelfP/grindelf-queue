/*
 *   ____        ___
 *  / ___|      / _ \ _   _  ___ _   _  ___
 * | |  _ _____| | | | | | |/ _ \ | | |/ _ \
 * | |_| |_____| |_| | |_| |  __/ |_| |  __/
 *  \____|      \__\_\\__,_|\___|\__,_|\___|
 *
 * Grindelf-Queue project. Queue testing file
 *
 * Created by GrindelfP on 2023-10-05.
 *
 */

#include "test.h"
#include "createDestroyTest.h"

int main() {
    printf("Start!\n\n");

    Queue queue = init(5);

    destroy(&queue);

    return 0;
}
