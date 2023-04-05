#include <iostream>
using namespace std;

int main() {
    cout << "================================\n";
    cout << "= Welcome to the age application =\n";
    cout << "================================\n";

    cout << "Enter your age: ";
    int age;
    cin >> age;

    cout << "You are " << age << " years old.\n";
    int age_in_days = age * 365;
    int age_in_weeks = age * 52;
    int age_in_months = age * 12;
    cout << "You are " << age_in_days << " days old.\n";
    cout << "You are " << age_in_weeks << " weeks old.\n";
    cout << "You are " << age_in_months << " months old.\n";

    int age_in_hours = age_in_days * 24;
    int age_in_minutes = age_in_hours * 60;
    long age_in_seconds = age_in_minutes * 60;
    cout << "You are " << age_in_hours << " hours old.\n";
    cout << "You are " << age_in_minutes << " minutes old.\n";
    cout << "You are " << age_in_seconds << " seconds old.\a\n";


    return 0;
}

