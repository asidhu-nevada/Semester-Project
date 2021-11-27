#pragma once

#include <cstdint>
#include <cmath>
#include "Chunk.h"

class Processor {
public:
    virtual void processBufferEight();
    virtual void processBufferSixteen();
};
