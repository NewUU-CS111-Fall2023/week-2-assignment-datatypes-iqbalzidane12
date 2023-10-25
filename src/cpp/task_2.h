#include <iostream>
#include <random>

using namespace std;

int guessing_file() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 100);
    int secret_number = dist(gen);
    int guess, num_guesses = 0;
       do {
        cout << "Enter a guess: ";
        cin >> guess;
        num_guesses++;
        if (guess == secret_number) {
            cout << "Correct! You guessed the number in " << num_guesses << " guesses." << endl;
            break;
        } else if (guess < secret_number) {
            cout << "Too low." << endl;
        } else {
            cout << "Too high." << endl;
        }
    } while (true);

    return 0;
}
