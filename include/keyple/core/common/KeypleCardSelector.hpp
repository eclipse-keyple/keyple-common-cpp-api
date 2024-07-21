/**************************************************************************************************
 * Copyright (c) 2024 Calypso Networks Association https://calypsonet.org/                        *
 *                                                                                                *
 * This program and the accompanying materials are made available under the                       *
 * terms of the MIT License which is available at https://opensource.org/licenses/MIT.            *
 *                                                                                                *
 * SPDX-License-Identifier: MIT                                                                   *
 **************************************************************************************************/

#pragma once

namespace keyple {
namespace core {
namespace common {

/**
 * Generic type for a POJO carrying card selection settings.
 *
 * <p>A Keyple card selector defines the settings of a card selection case.
 *
 * @since 2.0.0
 */
class KeypleCardSelector {
public:
    /**
     * Virtual destructor.
     */
    virtual ~KeypleCardSelector() = default;
};

} /* namespace common */
} /* namespace core */
} /* namespace keyple */
