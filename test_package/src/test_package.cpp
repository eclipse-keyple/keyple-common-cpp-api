/******************************************************************************
 * Copyright (c) 2025 Calypso Networks Association https://calypsonet.org/    *
 *                                                                            *
 * This program and the accompanying materials are made available under the   *
 * terms of the MIT License which is available at                             *
 * https://opensource.org/licenses/MIT.                                       *
 *                                                                            *
 * SPDX-License-Identifier: MIT                                               *
 ******************************************************************************/

#include <iostream>

#include "keyple/core/common/CommonApiProperties.hpp"

int
main() {
    std::cout << "Keyple::Common header-only package resolved and linked "
                 "correctly (API version "
              << keyple::core::common::CommonApiProperties_VERSION << ")"
              << std::endl;
    return 0;
}
