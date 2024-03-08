#pragma once
#include "config.h"
#include "esp32-hal-ledc.h"
void buzzer_init(void)
{
    ledcSetup(0, 2000, 8);
    ledcAttachPin(PIN_BUZZER, 0);
}
void buzzer_tone(int freq, int duty)
{
    ledcWriteTone(0, freq);
    ledcWrite(0, duty);
}