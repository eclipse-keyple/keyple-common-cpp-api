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
 * Generic type for a Keyple reader extension.
 *
 * <p>A reader extension brings the specific attributes of a reader.
 *
 * <p>Any Keyple plugin must provide readers implementing this interface.
 *
 * @since 2.0.0
 */
class KeypleReaderExtension {
public:
    /**
     * Virtual destructor.
     */
    virtual ~KeypleReaderExtension() = default;
};

} /* namespace common */
} /* namespace core */
} /* namespace keyple */
