#include <iostream>
using namespace std;

string loopAndRemoveFirstChar(string word) {
    string new_string = "";
    for (int i = 1; i < word.size();i++) {
        new_string += word[i];
    }
    return new_string;
}

string cleanWord(string word) {
    if (word.size() == 1) {
        return word;
    }
    if (word[0] == word[1]) {
        string new_word = loopAndRemoveFirstChar(word);
        return cleanWord(new_word);
    }
    string new_word = loopAndRemoveFirstChar(word);
    return word[0] + cleanWord(new_word);
} 

int main() {
    cout << cleanWord("HHHHaaZZZZem");
    return 0;
}

