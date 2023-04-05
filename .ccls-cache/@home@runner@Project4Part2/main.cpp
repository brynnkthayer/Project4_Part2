// Programming Project 4, Part 2, by Brynn Thayer, COP2334, made with Repl.it IDE. A program that takes input from the user for the value of N (the stopping point) and prints out the first N ordinals, followed by Hello.

#include <iostream>
#include <string>
using namespace std;

int main() {

  // Array used to hold the ordinal suffixes.
  string ordinal[] = {"st", "nd", "rd", "th"};

  // The max value.
  int N;

  cout << "Enter an integer: ";
  cin >> N;

  // Begins with 1, adds 1 and continues until the max value is reached.
  for (int i = 1; i <= N; i = i + 1) {

    int num = i%100;

  // This range contains exceptions to the other rules, therefore they are all "th."
    if (num > 3 && num < 21)
    cout << i << ordinal[3] << " Hello" << endl;

    else {

      // Determines which suffix depending on the digit the number ends in.
    if (num%10 == 1) 
      cout << i << ordinal[0] << " Hello" << endl;

    else if (num%10 == 2)
      cout << i << ordinal[1] << " Hello" << endl;

    else if (num%10 == 3) 
      cout << i << ordinal[2] << " Hello" << endl;

    else
      cout << i << ordinal[3] << " Hello" << endl;
  }
}
}
    