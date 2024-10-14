#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int number, guess, nGuesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // Generates a random number between 1 and 100

    do {
        std::cout << "Guess the number between 1 to 100: ";
        std::cin >> guess;

        if (guess > number) {
            std::cout << "Lower number please\n";
        } else if (guess < number) {
            std::cout << "Higher number please\n";
        } else {
            std::cout << "YAYY you got it!\nYou took " << nGuesses << " attempts\n";
        }
        nGuesses++;
    } while (guess != number);

    return 0;
}
