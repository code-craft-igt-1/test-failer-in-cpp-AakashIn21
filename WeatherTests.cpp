#include "WeatherTests.h"
#include "SensorStub.h"
#include "WeatherReportGenerator.h"
#include <iostream>
#include <cassert>
#include <string>

namespace WeatherTests {

    using std::string;
    using std::cout;
    using std::endl;
    using std::assert;

    void TestRainy(const WeatherReportGenerator& reportGenerator) {
        SensorStub sensor(70, 70, 26, 52);
        string report = reportGenerator.GenerateReport(sensor);
        cout << report << endl;
        assert(report == "Rainy day" || report == "Stormy weather");
    }

    void TestHighPrecipitationAndLowWindSpeed(const WeatherReportGenerator& reportGenerator) {
        SensorStub sensor(70, 80, 25, 40);
        string report = reportGenerator.GenerateReport(sensor);
        cout << report << endl;
        assert(report == "Rainy day");
    }

    void TestSunnyDay(const WeatherReportGenerator& reportGenerator) {
        SensorStub sensor(60, 10, 30, 20);
        string report = reportGenerator.GenerateReport(sensor);
        cout << report << endl;
        assert(report == "Sunny day");
    }

    void TestPartlyCloudy(const WeatherReportGenerator& reportGenerator) {
        SensorStub sensor(65, 30, 28, 25);
        string report = reportGenerator.GenerateReport(sensor);
        cout << report << endl;
        assert(report == "Partly cloudy");
    }

    void TestStormy(const WeatherReportGenerator& reportGenerator) {
        SensorStub sensor(80, 90, 26, 60);
        string report = reportGenerator.GenerateReport(sensor);
        cout << report << endl;
        assert(report == "Stormy weather");
    }

    void RunAllTests() {
        WeatherReportGenerator reportGenerator;
        TestRainy(reportGenerator);
        TestHighPrecipitationAndLowWindSpeed(reportGenerator);
        TestSunnyDay(reportGenerator);
        TestPartlyCloudy(reportGenerator);
        TestStormy(reportGenerator);
        cout << "All tests passed!\n";
    }

}   // namespace WeatherTests

int main() {
    WeatherTests::RunAllTests();
    return 0;
}
