/******************************************************************************
 * Copyright (c) 2025 Calypso Networks Association https://calypsonet.org/    *
 *                                                                            *
 * This program and the accompanying materials are made available under the   *
 * terms of the MIT License which is available at                             *
 * https://opensource.org/licenses/MIT.                                       *
 *                                                                            *
 * SPDX-License-Identifier: MIT                                               *
 ******************************************************************************/

#include "gtest/gtest.h"

int
main(int argc, char** argv) {
    /* Initialize GTest */
    ::testing::InitGoogleTest(&argc, argv);

    /* Run */
    return RUN_ALL_TESTS();
}
