//File Name: Random Number Guessing
// Programmer Name: Ebram Azer
// Date : Nov 2024
// Requirments: Write Program abot number guess game 


#include <iostream>  // For input-output operations
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For seeding the random number generator
using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator with the current time
    int randomNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int userGuess = 0;

    cout << "Guess the number (between 1 and 100):" << endl;

    // Loop until the user guesses the correct number
    while (true) {
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess > randomNumber) {
            cout << "Too high, try again." << endl;
        }
        else if (userGuess < randomNumber) {
            cout << "Too low, try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the number." << endl;
            break; // Exit the loop
        }
    }

    return 0;
}
