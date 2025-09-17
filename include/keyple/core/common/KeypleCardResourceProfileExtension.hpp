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
 * Generic type for a card resource profile extension.
 *
 * <p>A Keyple card resource extension is used by the allocation process of the
 * card resource service to identify and prepare a card resource.
 *
 * @since 2.0.0
 */
class KeypleCardResourceProfileExtension {
public:
    /**
     * Virtual destructor.
     */
    virtual ~KeypleCardResourceProfileExtension() = default;
};

} /* namespace common */
} /* namespace core */
} /* namespace keyple */
