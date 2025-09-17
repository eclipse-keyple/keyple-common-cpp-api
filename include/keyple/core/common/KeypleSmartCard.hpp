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

namespace keyple {
namespace core {
namespace common {

/**
 * Generic type for a POJO used to carry the known data content of a smart card.
 *
 * @since 2.0.0
 */
class KeypleSmartCard {
public:
    /**
     * Virtual destructor.
     */
    virtual ~KeypleSmartCard() = default;
};

} /* namespace common */
} /* namespace core */
} /* namespace keyple */
