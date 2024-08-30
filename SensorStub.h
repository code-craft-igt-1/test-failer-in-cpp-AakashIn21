#ifndef SENSORSTUB_H
#define SENSORSTUB_H

#include "IWeatherSensor.h"

class SensorStub : public IWeatherSensor {
public:
    SensorStub(int humidity, int precipitation, double temperature, int windSpeed);

    int Humidity() const override;
    int Precipitation() const override;
    double TemperatureInC() const override;
    int WindSpeedKMPH() const override;

private:
    int humidity_;
    int precipitation_;
    double temperature_;
    int windSpeed_;
};

#endif // SENSORSTUB_H
