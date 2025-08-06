#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

  int randint = rand() % 100 + 1;
  int prediction;

  cout << "Welcome to the Number Guessing Game!" << endl;
  cout << "Try to guess the number I'm thinking of (between 1 and 100):"
       << endl;
  cout << "Enter your guess: ";
  cin >> prediction;

  while (prediction != randint) {
    if (prediction < randint) {
      cout << "Too low! Try again: ";
    } else {
      cout << "Too high! Try again: ";
    }
    cin >> prediction;
  }
  cout << "Congratulations! You've guessed the number: " << randint << endl;
}