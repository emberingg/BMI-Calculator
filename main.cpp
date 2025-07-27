#include <iostream>
using std::cout, std::cin, std::endl;



int main() {
    char choice;

    do {
        double Height{};
        int Weight{};

        cout << "Enter your height in Inches: ";
        cin >> Height;

        cout << "Enter your weight in lbs: ";
        cin >> Weight;

        double BMI = (Weight / (Height * Height)) * 703;

        cout << "Your BMI is: " << BMI << "\n";

        if (BMI < 18.5) {
            cout << "You are underweight." << "\n";
        }
        else if (BMI >= 18.5 && BMI < 24.9) {
            cout << "You have a normal weight." << "\n";
        }
        else if (BMI >= 25 && BMI < 29.9) {
            cout << "You are overweight." << "\n";
        }
        else {
            cout << "You are obese." << "\n";
        }

        cout << "Calculate again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Goodbye!" << endl;
    return 0;
}

