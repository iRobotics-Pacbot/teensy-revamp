#pragma once
#include <cstdint>

void motorSetPower(double throttle);
void motorsUpdate();
void motorsSetVelocity(double fw_vel_in, double lateral_vel_in, double turn_vel_rad);
void getEncodersValues(double *encoder_values);
