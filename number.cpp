#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess;
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess == number) {
            cout << "Correct!" << endl;
            break;
        } else if (guess > number) {
            cout << "Too high" << endl;
        } else {
            cout << "Too low" << endl;
        }
    }
    return 0;
}
