#ifndef WEATHERTESTS_H
#define WEATHERTESTS_H

#include "WeatherReportGenerator.h"

namespace WeatherTests {
    void TestRainy(const WeatherReportGenerator& reportGenerator);
    void TestHighPrecipitationAndLowWindSpeed(const WeatherReportGenerator& reportGenerator);
    void TestSunnyDay(const WeatherReportGenerator& reportGenerator);
    void TestPartlyCloudy(const WeatherReportGenerator& reportGenerator);
    void TestStormy(const WeatherReportGenerator& reportGenerator);
    void RunAllTests();
}

#endif // WEATHERTESTS_H
