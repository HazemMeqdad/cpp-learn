#include <iostream>  // pre processor directive
using namespace std;

int main() {
    int points = 0;
    int answers[3];

    cout << "Write the missing number in sequences: " << endl;

    cout << "Sequence #1: " << endl;
    cout << "1 | 5 | 10 | 16 | ??";
    cin >> answers[0];

    cout << "Sequence #2: " << endl;
    cout << "1 | 4 | 8 | 16 | ??";
    cin >> answers[1];

    cout << "Sequence #3: " << endl;
    cout << "1 | 1 | 2 | 3 | ??";
    cin >> answers[2];

    int sequences[3][5] = {
        {1, 5, 10, 16, 23},
        {2, 4, 8, 16, 32},
        {1, 1, 2, 3, 5}
    };

    if (answers[0] == sequences[0][4]) {
        points++;
    }
    if (answers[1] == sequences[1][4]) {
        points++;
    }
    if (answers[2] == sequences[2][4]) {
        points++;
    }
    cout << "Your points is: " << points << "/3" << endl;

    return 0;
}


// Other application
/*
#include <iostream>  // pre processor directive
using namespace std;

int main() {
    int guess_number = 7;
    int trys = 0;

    cout << "Welcome to my simple game guess the number betten 1 to 10;" << endl;

    while (trys != 3)
    {
        int guess;
        cin >> guess;
        if (guess == guess_number) {
            break;
        } else {
            cout << "wrong try agine" << endl;
        }
        trys++;
    }
    if (trys == 3) {
        cout << "You are loser in this game" << endl;
    } else {
        cout << "Bro you are very smart because the current number is: " << guess_number << endl;
    }

    return 0;
}

*/