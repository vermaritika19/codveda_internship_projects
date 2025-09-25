
// guessing_game.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand((unsigned) time(0));
    int secret = rand() % 100 + 1; // number between 1–100
    int guess, attempts = 0;

    cout << "Guess the number between 1 and 100 (Type 0 to quit)\n";

    while(true) {
        cout << "Enter your guess: ";
        cin >> guess;
        if(guess == 0) {
            cout << "You quit. The number was " << secret << ".\n";
            break;
        }
        attempts++;
        if(guess == secret) {
            cout << "🎉 Congratulations! You guessed it in " << attempts << " attempts.\n";
            break;
        } else if(guess < secret) {
            cout << "Too low. Try again.\n";
        } else {
            cout << "Too high. Try again.\n";
        }
    }
    return 0;
}
