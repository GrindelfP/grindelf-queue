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
    printf("Start!\n\n");

    Queue queue = init(5);

    printf("Queue size: %d\n", queue.size);
    printf("Queue cursor: %d\n\n", queue.cursor);

    for (int i = 0; i < 5; ++i) {
        enqueue(&queue, i + 1);
    }

    printf("Queue size: %d\n", queue.size);
    printf("Queue cursor: %d\n\n", queue.cursor);

    for (int i = 0; i < 5; ++i) {
        printf("%d\n", dequeue(&queue).value);
    }

    printf("Queue size: %d\n", queue.size);
    printf("Queue cursor: %d\n\n", queue.cursor);

    destroy(&queue);

    return 0;
}
