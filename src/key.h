#pragma once
#include "config.h"
void key_init()
{
    pinMode(PIN_KEY, INPUT_PULLUP);
}
bool key_pressed()
{
    return digitalRead(PIN_KEY) == LOW;
}