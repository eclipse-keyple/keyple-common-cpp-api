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
 * Generic type for a Keyple plugin extension.
 *
 * <p>A plugin extension brings the specific attributes of a plugin.
 *
 * <p>Any Keyple plugin must provide a factory that returns plugins implementing
 * this interface.
 *
 * @since 2.0.0
 */
class KeyplePluginExtension {
public:
    /**
     * Virtual destructor.
     */
    virtual ~KeyplePluginExtension() = default;
};

} /* namespace common */
} /* namespace core */
} /* namespace keyple */
