/*
    MegaControl - Copyright (C) 2012
    GAMF ECOMarathon Team              
*/

#ifndef LIGHT_H_INCLUDED
#define LIGHT_H_INCLUDED

#include <math.h>
#include "ch.h"
#include "hal.h"

void lightInit(void);
void lightCalc(void);

void cmd_lightvalues(BaseSequentialStream *chp, int argc, char *argv[]);
#endif
