#include <iostream>  // pre processor directive
#include <array>
using namespace std;

int main() {
    // for (int i = 1; i <= 6 ; i++) {
    //     cout << i << endl;
    // }

    array<string, 2> names = {"hazem", "abd"};
    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << endl;
    }
    return 0;
}
