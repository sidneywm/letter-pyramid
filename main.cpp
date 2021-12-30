#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Enter a string with no space: " << endl;
    cin >> input;

    string prev_chars;
    for (size_t i = 0; i < input.length(); i++) {
        string chars;
        string start;
        string end;

        for (size_t a = 0; a < input.length() - i; a++) {
            start += " ";
        }

        for (size_t y = 0; y < (i + 1); y++) {
            chars += input.at(y);
        }

        for (size_t x = 0; x < prev_chars.length(); x++) {
            end += prev_chars.at((prev_chars.length() - 1) - x);
        }

        cout << start + chars  + end + "\n";
        prev_chars = chars;
    }

    return 0;
}
