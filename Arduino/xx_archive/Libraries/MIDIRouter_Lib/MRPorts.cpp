/*
  MidiPorts.h - Midi Router Port Wrapper
  Created by Kurt R. Arnlund (Ingenious Arts & Technologies LLC), April 4, 2020.
  Released into the public domain.
*/
#include "Arduino.h"
#include "MRPorts.h"

MRPort::MRPort(const char *displayName, unsigned int newindex) {
	strcpy(name, displayName);
	index = newindex;
	location.byte = index / 8;
	location.bit = index % 8;
}

bool MRPort::active() {
	if (name[0] == 0) { return false; }
	return true;
}

// MARK: - MRInputPort

unsigned int MRInputPort::inputPortCount = 0;

MRInputPort::MRInputPort(const char *displayName) : MRPort(displayName, inputPortCount) {
	if (active()) {
		inputPortCount += 1;
	}
}

// MARK: - MROutputPort

unsigned int MROutputPort::outputPortCount = 0;

MROutputPort::MROutputPort(const char *displayName) : MRPort(displayName, outputPortCount) {
	if (active()) {
		outputPortCount += 1;
	}
}

// MARK: - MRIOInterface

MRIOInterface::MRIOInterface(unsigned char inPort, unsigned char outPort) {
	input = inPort
	output = outPort
}

// MARK: - MRIO_MidiHardwareSerialInterface

MRIO_MidiHardwareSerialInterface::MRIO_MidiHardwareSerialInterface(unsigned char inPort, unsigned char outPort, SerialPort& inSerial) :  MRIOInterface(inPort, outPort) {
	// #define MIDI_CREATE_INSTANCE(Type, SerialPort, Name)
	// 		midi::MidiInterface<Type> Name((Type&)SerialPort);
	
	interface = midi::MidiInterface<HardwareSerial>(inSerial)
}

// MARK: - MRIO_MidiUSBClientInterface

MRIO_MidiUSBClientInterface::MRIO_MidiUSBClientInterface(unsigned char inPort, unsigned char outPort) :  MRIOInterface(inPort, outPort) {
}

// MARK: - MRIO_MidiUSBHostInterface

MRIO_MidiUSBHostInterface::MRIO_MidiUSBHostInterface(unsigned char inPort, unsigned char outPort) :  MRIOInterface(inPort, outPort) {
}
