# *****************************************************************************
# Copyright (c) 2025 Calypso Networks Association https://calypsonet.org/     *
#                                                                             *
# This program and the accompanying materials are made available under the    *
# terms of the MIT License which is available at                              *
# https://opensource.org/licenses/MIT.                                        *
#                                                                             *
# SPDX-License-Identifier: MIT                                                *
# *****************************************************************************/

SET(LIBRARY_NAME keyplecommon)

# Declare this library as header only.
ADD_LIBRARY(

    ${LIBRARY_NAME}

    INTERFACE
)

TARGET_INCLUDE_DIRECTORIES(

    ${LIBRARY_NAME}

    INTERFACE

    ${CMAKE_CURRENT_SOURCE_DIR}
)

ADD_LIBRARY(

    Keyple::Common

    ALIAS

    ${LIBRARY_NAME}
)
