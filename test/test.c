/*
 *   ____        ___
 *  / ___|      / _ \ _   _  ___ _   _  ___
 * | |  _ _____| | | | | | |/ _ \ | | |/ _ \
 * | |_| |_____| |_| | |_| |  __/ |_| |  __/
 *  \____|      \__\_\\__,_|\___|\__,_|\___|
 *
 * Grindelf-Queue project. Queue testing source code file.
 * All the tests are written to be used without any testing framework,
 * so anyone obtaining this library can test it without any additional software.
 *
 * Created by GrindelfP on 2023-10-05.
 *
 */

#include "1-initDestroy.h"
#include "enqueuePeekDequeue.h"

int main() {
    // Test 1
    givenQueueSize_WhenCreatedAndDestroyed_ThenNoErrorsOccurredDuringDestroying();

    // Test 2
    givenQueueWrongSize_WhenCreated_ThenErrorOfWrongSizeOccurred();

    return 0;
}
