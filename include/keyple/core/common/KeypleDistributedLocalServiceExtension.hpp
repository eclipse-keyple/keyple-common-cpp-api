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
 * Generic type for a Keyple distributed local service extension.
 *
 * <p>Any Keyple distributed local extension must provide a factory that
 * implements this interface.
 *
 * @since 2.0.0
 */
class KeypleDistributedLocalServiceExtension {
public:
    /**
     * Virtual destructor.
     */
    virtual ~KeypleDistributedLocalServiceExtension() = default;
};

} /* namespace common */
} /* namespace core */
} /* namespace keyple */
