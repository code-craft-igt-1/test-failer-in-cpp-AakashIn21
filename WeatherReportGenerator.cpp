#include "WeatherReportGenerator.h"

std::string WeatherReportGenerator::GenerateReport(const IWeatherSensor& sensor) const {
    int precipitation = sensor.Precipitation();
    int windSpeed = sensor.WindSpeedKMPH();
    double temperature = sensor.TemperatureInC();

    if (precipitation > 75 && windSpeed > 50) {
        return "Stormy weather";
    } else if (precipitation > 50) {
        return "Rainy day";
    } else if (temperature > 29 && precipitation < 20) {
        return "Sunny day";
    } else if (precipitation > 25) {
        return "Partly cloudy";
    }

    return "Clear day";
}
