#include <iostream>

using namespace std;

/**
 *  A = 1
 *  B = 2
 *  C = 3
 *  D = 4
 */

int main() {
    char input;

    cout << " Dej znok: " << endl;
    cin >> input;


    for (char row = 'A'; row <= input; row++) {
        for (char mark = input; mark != row; mark--) {
            cout << "_";
        }

        for (char mark = 'A'; mark <= row; mark++) {
            cout << mark;
        }

        for (char mark = row - 1; mark >= 'A'; mark--) {
            cout << mark;
        }

        cout << endl;
    }


    return 0;
}