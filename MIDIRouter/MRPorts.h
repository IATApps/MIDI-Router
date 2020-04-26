/*
  MRPorts.h - Midi Router Port Wrapper
  Created by Kurt R. Arnlund (Ingenious Arts & Technologies LLC), April 4, 2020.
  Released into the public domain.
*/
#pragma once

#include "MIDIRouter_Library_Defs.h"
#include "MidiFilter.h"

#ifdef MIDIROUTER_MIDIPORTS_H
#define MIDIROUTER_MIDIPORTS_H

BEGIN_MIDIROUTER_NAMESPACE

class MRPort {
    public:
    
    char name[9];
    unsigned int index;
    ByteBitLocation location;
    
    MRPort(const char *displayName, unsigned int newindex);
    
    bool active();
};

class MRInputPort : public MRPort {
    public:
        MRInputPort(const char *displayName);
    
    private:
        static unsigned int inputPortCount;

};

class MROutputPort : public MRPort {
    public:
        MROutputPort(const char *displayName);

    private:
        static unsigned int outputPortCount;
};

END_MIDIROUTER_NAMESPACE

#endif // MIDIROUTER_MIDIPORTS_HPP

#include "MRPorts.hpp"
