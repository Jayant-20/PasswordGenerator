#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
  int length;
  string password;
  const string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()_+-=[]{}|;:',./<>?"; // string of all possible characters

  cout << "Enter the length of the password: ";
  cin >> length;

  srand(time(0)); // seed the random number generator

  cout << "Your password is: ";

  for (int i = 0; i < length; i++) {
    int index = rand() % characters.length(); // get a random index in the string of characters
    password += characters[index]; // add the randomly selected character to the password string
  }

  cout << password << endl;

  return 0;
}
