class SensorStub : public IWeatherSensor {
 public:
    SensorStub(int humidity, int precipitation, double temperature, int windSpeed)
        : humidity_(humidity), precipitation_(precipitation),
          temperature_(temperature), windSpeed_(windSpeed) {}

    int Humidity() const override { return humidity_; }
    int Precipitation() const override { return precipitation_; }
    double TemperatureInC() const override { return temperature_; }
    int WindSpeedKMPH() const override { return windSpeed_; }

 private:
    int humidity_;
    int precipitation_;
    double temperature_;
    int windSpeed_;
};

// Test for a rainy day
void TestRainy() {
    SensorStub sensor(70, 70, 26, 52); // High precipitation
    string report = Report(sensor);
    cout << report << endl;
    assert(report.find("rain") != string::npos || report.find("storm") != string::npos); // Should find "rain" or "storm"
}

// Test high precipitation and low wind-speed
void TestHighPrecipitationAndLowWindspeed() {
    SensorStub sensor(70, 80, 25, 40); // High precipitation, low wind-speed
    string report = Report(sensor);
    cout << report << endl;
    assert(report.find("storm") != string::npos || report.find("rain") != string::npos); // Should find "storm" or "rain"
}

// Test a sunny day with high temperature and low precipitation
void TestSunnyDay() {
    SensorStub sensor(60, 10, 30, 20); // Low precipitation, high temperature
    string report = Report(sensor);
    cout << report << endl;
    assert(report == "Sunny day"); // Should be sunny
}

// Test partly cloudy with moderate precipitation
void TestPartlyCloudy() {
    SensorStub sensor(65, 30, 28, 25); // Moderate precipitation
    string report = Report(sensor);
    cout << report << endl;
    assert(report == "Partly cloudy"); // Should be partly cloudy
}

// Test stormy conditions with high precipitation and high wind-speed
void TestStormy() {
    SensorStub sensor(80, 90, 26, 60); // High precipitation, high wind-speed
    string report = Report(sensor);
    cout << report << endl;
    assert(report.find("storm") != string::npos); // Should find "storm"
}
int main() {
        WeatherSpace::TestRainy();
        WeatherSpace::TestHighPrecipitationAndLowWindspeed();
        WeatherSpace::TestSunnyDay();
        WeatherSpace::TestPartlyCloudy();
        WeatherSpace::TestStormy();
	cout << "All is well (maybe)\n";
   	return 0;
}
