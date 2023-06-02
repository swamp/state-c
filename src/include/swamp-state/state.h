/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Peter Bjorklund. All rights reserved.
 *  Licensed under the MIT License. See LICENSE in the project root for license information.
 *--------------------------------------------------------------------------------------------*/
#ifndef SWAMP_STATE_H
#define SWAMP_STATE_H

#include <stddef.h>

struct SwtiType;

typedef struct SwampState {
    const void* state;
    size_t stateOctetCount;
    size_t align;
    const struct SwtiType* debugType;
} SwampState;

#endif
