///
/// @mainpage	MIDIRouter Library
///
/// @details	MIDI Router based on Teensy 3.6
/// @n			Library
/// @n
/// @n @a		Developed with embedXcode+: https://embedXcode.weebly.com
///
/// @author		Kurt Arnlund
/// @author		Isolace / Ingenious Arts and Technologies LLC
///
/// @date		4/25/20 6:04 PM
/// @version	<#version#>
///
/// @copyright	(c) Kurt Arnlund, 2020
/// @copyright	GNU General Public Licence
///
/// @see		ReadMe.txt for references
///


///
/// @file		MIDIRouter_Library.h
/// @brief		Library header
/// Project 	MIDIRouter Library
///
/// @details	<#details#>
/// @n
/// @n @b		Project MIDIRouter
/// @n @a		Developed with embedXcode+: https://embedXcode.weebly.com
///
/// @author		Kurt Arnlund
/// @author		Isolace / Ingenious Arts and Technologies LLC
///
/// @date		4/25/20 6:04 PM
/// @version	<#version#>
///
/// @copyright	(c) Kurt Arnlund, 2020
/// @copyright	GNU General Public Licence
///
/// @see		ReadMe.txt for references
///
// !!! Help: https://bit.ly/2ifs2e2


// Core library for code-sense - IDE-based
// !!! Help: https://bit.ly/2AdU7cu
#if defined(WIRING) // Wiring specific
#include "Wiring.h"
#elif defined(MAPLE_IDE) // Maple specific
#include "WProgram.h"
#elif defined(ROBOTIS) // Robotis specific
#include "libpandora_types.h"
#include "pandora.h"
#elif defined(MPIDE) // chipKIT specific
#include "WProgram.h"
#elif defined(DIGISPARK) // Digispark specific
#include "Arduino.h"
#elif defined(ENERGIA) // LaunchPad specific
#include "Energia.h"
#elif defined(LITTLEROBOTFRIENDS) // LittleRobotFriends specific
#include "LRF.h"
#elif defined(MICRODUINO) // Microduino specific
#include "Arduino.h"
#elif defined(TEENSYDUINO) // Teensy specific
#include "Arduino.h"
#elif defined(REDBEARLAB) // RedBearLab specific
#include "Arduino.h"
#elif defined(RFDUINO) // RFduino specific
#include "Arduino.h"
#elif defined(SPARK) || defined(PARTICLE) // Particle / Spark specific
#include "application.h"
#elif defined(ARDUINO) // Arduino 1.0 and 1.5 specific
#include "Arduino.h"
#else // error
#error Platform not defined
#endif // end IDE

#ifndef MIDIRouter_RELEASE
///
/// @brief	Release
///
#define MIDIRouter_RELEASE 100


#endif // MIDIRouter_RELEASE
