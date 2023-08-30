#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int secretNumber = rand() % 10 + 1;
    int guess;
    int balance;
    int bet;
    bool hasGuessed = false;

    cout << "Welcome to the Casino Number Guessing Game!" << endl;
    
    cout << "Enter your starting balance: ";
    cin >> balance;
    
    cout << "You have a balance of " << balance << " dollars. Let's check if you can play a move or not!" << endl;

    while (balance > 0) {
        cout << "Enter your bet: ";
        cin >> bet;

        if (bet <= 0 || bet > balance) {
            cout << "Invalid bet amount. Please bet between 1 and " << balance << " dollars." << endl;
            continue;
        }

        cout << "Come on, you can play. Enter your guess (between 1 and 10): ";
        cin >> guess;

        if (guess < secretNumber) {
            cout << "Too low! You lose." << endl;
            balance -= bet;
        } else if (guess > secretNumber) {
            cout << "Too high! You lose." << endl;
            balance -= bet;
        } else {
            cout << "Congratulations! You guessed the number " << secretNumber << ". You win " << bet * 2 << " dollars!" << endl;
            balance += bet;
        }

        cout << "Current balance: " << balance << " dollars." << endl;

        cout << "Do you want to play again? (y/n): ";
        char playAgain;
        cin >> playAgain;
        if (playAgain != 'y' && playAgain != 'Y') {
            break;
        }

        secretNumber = rand() % 100 + 1;
    }

    cout << "Thank you for playing! Your final balance: " << balance << " dollars." << endl;

    return 0;
}