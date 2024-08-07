#include "SensorStub.h"

SensorStub::SensorStub(int humidity, int precipitation, double temperature, int windSpeed)
    : humidity_(humidity),
    precipitation_(precipitation),
    temperature_(temperature),
    windSpeed_(windSpeed) {}

int SensorStub::Humidity() const { return humidity_; }
int SensorStub::Precipitation() const { return precipitation_; }
double SensorStub::TemperatureInC() const { return temperature_; }
int SensorStub::WindSpeedKMPH() const { return windSpeed_; }
