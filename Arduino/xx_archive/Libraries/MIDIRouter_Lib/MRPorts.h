/*
  MRPorts.h - Midi Router Port Wrapper
  Created by Kurt R. Arnlund (Ingenious Arts & Technologies LLC), April 4, 2020.
  Released into the public domain.
*/
#ifndef _MR_PORT_H
#define _MR_PORT_H

#include "Arduino.h"
#include "MidiFilter.h"

// Hardware and USB Device MIDI
// https://github.com/FortySevenEffects/arduino_midi_library
#include <MIDI.h>        // access to serial (5 pin DIN) MIDI
#include <USBHost_t36.h> // access to USB MIDI devices (plugged into 2nd USB port)

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

class MRIOInterface {
	public:

	unsigned char input;
	unsigned char output;
	
	MRIOInterface(unsigned char inPort, unsigned char outPort);
}

class MRIO_MidiHardwareSerialInterface : public MRIOInterface {
	public:
	
	midi::MidiInterface<HardwareSerial> interface;
	
	MRIOMidiSerialInterface(unsigned char inPort, unsigned char outPort, SerialPort& inSerial);
}

class MRIO_MidiUSBClientInterface : public MRIOInterface {

	MRIO_MidiUSBClientInterface(unsigned char inPort, unsigned char outPort);
}

class MRIO_MidiUSBHostInterface : public MRIOInterface {

	MRIO_MidiUSBHostInterface(unsigned char inPort, unsigned char outPort);
}

#endif // _MR_PORT_H