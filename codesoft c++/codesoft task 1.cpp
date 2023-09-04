#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    
    srand(static_cast<unsigned int>(time(nullptr)));
    
    int secretNumber = rand() % 100 + 1;
    
    
    int guess;
    int attempts = 0;

    
    while (true) {
        
        cout << "Guess the secret number (between 1 and 100): ";
        cin >> guess;
        
        
        attempts++;

        
        if (guess == secretNumber) {
            cout << "Congratulations! Your guessed the number " << secretNumber << " in " << attempts << " attempts." << endl;
            break;
        } else if (guess < secretNumber) {
            cout << "guessed number is low. Try again." << endl;
        } else {
            cout << "guessed number is high. Try again." << endl;
        }
    }

    return 0;
}
