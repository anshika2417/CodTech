#include <iostream>
using namespace std;

// Function prototypes
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}
double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9 + 273.15;
}
double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9 / 5 + 32;
}

int main() {
    double temperature;
    int fromScale, toScale;

    cout << "Temperature Converter" << endl;
    cout << "1. Celsius\n2. Fahrenheit\n3. Kelvin" << endl;

    cout << "Enter the temperature: ";
    cin >> temperature;

    cout << "Convert from (1, 2, or 3): ";
    cin >> fromScale;

    cout << "Convert to (1, 2, or 3): ";
    cin >> toScale;

    double convertedTemperature;

    switch (fromScale) {
        case 1: // Celsius
            if (toScale == 2) {
                convertedTemperature = celsiusToFahrenheit(temperature);
            } else if (toScale == 3) {
                convertedTemperature = celsiusToKelvin(temperature);
            } else {
                cout << "Invalid conversion" << endl;
                return 1;
            }
            break;
        case 2: // Fahrenheit
            if (toScale == 1) {
                convertedTemperature = fahrenheitToCelsius(temperature);
            } else if (toScale == 3) {
                convertedTemperature = fahrenheitToKelvin(temperature);
            } else {
                cout << "Invalid conversion" << endl;
                return 1;
            }
            break;
        case 3: // Kelvin
            if (toScale == 1) {
                convertedTemperature = kelvinToCelsius(temperature);
            } else if (toScale == 2) {
                convertedTemperature = kelvinToFahrenheit(temperature);
            } else {
                cout << "Invalid conversion" << endl;
                return 1;
            }
            break;
        default:
            cout << "Invalid scale" << endl;
            return 1;
    }

    cout << "Converted temperature: " << convertedTemperature << endl;

    return 0;
}