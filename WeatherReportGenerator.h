#ifndef WEATHERREPORTGENERATOR_H
#define WEATHERREPORTGENERATOR_H

#include "IWeatherSensor.h"
#include <string>

class WeatherReportGenerator {
public:
    std::string GenerateReport(const IWeatherSensor& sensor) const;
};

#endif // WEATHERREPORTGENERATOR_H
