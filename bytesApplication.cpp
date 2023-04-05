#include <iostream>
using namespace std;

int main() {
    int kilobytes;

    cout << "Enter the Number of kilobytes? \n";
    cin >> kilobytes;


    cout << "[1] The number of Kilobyets: " << kilobytes << "\n";
    cout << "[2] The number of Bytes: " << kilobytes * 8 << "\n";
    cout << "[3] The number of Bits: " << kilobytes * 1024  << "\n";
    


    return 0;
}

