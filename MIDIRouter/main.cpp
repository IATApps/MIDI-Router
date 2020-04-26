//
// main.cpp
// Main file
// ----------------------------------
// Developed with embedXcode+
// https://embedXcode.weebly.com
//
// Project 		MIDIRouter
//
// Created by 	Kurt Arnlund, 4/25/20 6:04 PM
//              Isolace / Ingenious Arts and Technologies LLC
//
// Copyright 	© Kurt Arnlund, 2020
// Licence 		GNU General Public Licence
//
// See 			MIDIRouter.ino and ReadMe.txt for references
//
// ----------------------------------
// DO NOT EDIT THIS FILE.
// THE SKETCH IS IN MIDIRouter.ino
// ----------------------------------
//
// Last update: Jun 30, 2017 release 7.5.0

// IDE selection
#if defined(EMBEDXCODE)

// Core library and main()
// Minimal proxy main() to be updated at build
#include "Arduino.h"

int main(void)
{
    setup();

    for (;;)
    {
        loop();
    }

    return 0;
}

// Sketch
#include "MIDIRouter.ino"


#endif                                                                          // end embedXcode

