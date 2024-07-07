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
 * Generic type for a POJO used to carry the response of a card selection
 * request.
 *
 * <p>A card selection response is the result of presenting a card to an
 * observable reader in a selection scenario.
 *
 * @since 2.0.0
 */
class KeypleCardSelectionResponse {
public:
    /**
     * Virtual destructor.
     */
    virtual ~KeypleCardSelectionResponse() = default;
};

} /* namespace common */
} /* namespace core */
} /* namespace keyple */
