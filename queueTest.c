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

#include <stdio.h>
#include "queue.h"

int main() {
    printf("Start!\n");

    Queue queue = init(5);
    printf("Queue initialized!\n");
    printf("Queue size: %d\n", queue.size);
    printf("Queue cursor: %d\n", queue.cursor);

    enqueue(&queue, "first");
    printf("First element enqueued!\n");
    printf("Queue cursor: %d\n", queue.cursor);
    DequeuePair pickedValue = peek(&queue);
    printf("Queue content: %s, %d\n", pickedValue.value, pickedValue.resultCode);

    return 0;
}
