// Simple Temperature Converter
// Christian Drew
// This is a basic menu program that converts between Celsius and Fahrenheit
// It keeps asking until the user picks exit
// I made it with functions so main stays small and easy to read

#include <iostream>
#include <iomanip>  // for setprecision if we want nicer numbers
#include <limits>   // for clearing bad input

using namespace std;

// function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32.0;  // formula is C * 9/5 + 32
}

// function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;  // formula is (F - 32) * 5/9
}

// function to show menu and get choice
int getMenuChoice() {
    int choice;
    bool valid = false;

    while (valid == false) {
        cout << "\nTemperature Converter Menu" << endl;
        cout << "1 - Celsius to Fahrenheit" << endl;
        cout << "2 - Fahrenheit to Celsius" << endl;
        cout << "3 - Exit" << endl;
        cout << "Enter your choice (1-3): ";

        cin >> choice;

        // check for bad input like letters or numbers out of range
        if (cin.fail() || choice < 1 || choice > 3) {
            cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
            cin.clear();                  // fix the input error
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // clear rest of line
        }
        else {
            valid = true;
        }
    }

    return choice;
}

int main() {
    bool running = true;

    cout << "Welcome to the Simple Temperature Converter!" << endl;

    while (running == true) {
        int option = getMenuChoice();

        if (option == 1) {
            double celsius;
            cout << "Enter temperature in Celsius: ";
            cin >> celsius;

            // simple validation - just check if input worked
            if (cin.fail()) {
                cout << "Please enter a number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            else {
                double fahrenheit = celsiusToFahrenheit(celsius);
                cout << fixed << setprecision(2);  // show 2 decimal places
                cout << celsius << " C is " << fahrenheit << " F" << endl;
            }
        }
        else if (option == 2) {
            double fahrenheit;
            cout << "Enter temperature in Fahrenheit: ";
            cin >> fahrenheit;

            if (cin.fail()) {
                cout << "Please enter a number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            else {
                double celsius = fahrenheitToCelsius(fahrenheit);
                cout << fixed << setprecision(2);
                cout << fahrenheit << " F is " << celsius << " C" << endl;
            }
        }
        else if (option == 3) {
            running = false;
            cout << "Thanks for using the converter. Goodbye!" << endl;
        }
    }

    return 0;
}