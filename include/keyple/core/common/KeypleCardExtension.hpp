/******************************************************************************
 * Copyright (c) 2025 Calypso Networks Association https://calypsonet.org/    *
 *                                                                            *
 * This program and the accompanying materials are made available under the   *
 * terms of the MIT License which is available at                             *
 * https://opensource.org/licenses/MIT.                                       *
 *                                                                            *
 * SPDX-License-Identifier: MIT                                               *
 ******************************************************************************/

#pragma once

#include <string>

namespace keyple {
namespace core {
namespace common {

/**
 * Generic type for a Keyple card extension.
 *
 * @since 2.0.0
 */
class KeypleCardExtension {
public:
    /**
     * Gets the Reader API version used at compile time
     *
     * @return A not empty String.
     * @since 2.0.0
     */
    virtual const std::string getReaderApiVersion() const = 0;

    /**
     * Gets the Card API version used at compile time
     *
     * @return A not empty String.
     * @since 2.0.0
     */
    virtual const std::string getCardApiVersion() const = 0;

    /**
     * Gets the Common API version used at compile time
     *
     * @return A not empty String.
     * @since 2.0.0
     */
    virtual const std::string getCommonApiVersion() const = 0;
};

} /* namespace common */
} /* namespace core */
} /* namespace keyple */
