#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));  // Seed the random number generator with the current time

    int secretNumber = rand() % 10 + 1; // Generate a random number between 1 and 100
    int guess;
    int attempts = 0;
    bool hasGuessed = false;

    cout << "Welcome to the Number Guessing Game!" << endl;

    while (!hasGuessed) {
        cout << "Enter your guess (between 1 and 10): ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number " << secretNumber << " in " << attempts << " attempts." << endl;
            hasGuessed = true;
        }
    }

    return 0;
}
