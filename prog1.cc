/*
 * File: prog1.cc
 * Author: Troy Gentry
 * Date: 2/10/2023
 * Description: Arithmetic Operations with Integers
 * Email:  tg767621@ohio.edu
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
  int number; // Be sure to add comments for each of these variables
      // that are declared!

  int answer; // Don't forget this one.
  do
  {
      cout << "Enter a number, and I'll compute the answer:";
      cin >> number;

    switch (number)
    {


    case 42:
      answer = 42;
      cout << "You have the answer already!\n";
      break;

    case 0:
      answer = 0;
      cout << "You've got nothing!\nTry again.\n";
      break;
    case 1:
      answer = number * 2;
      cout << "Well, at least you have something\nBut it's not enough, try again.\n";
      break;
    case 13:
      answer = 13;
      cout << "You're very unlucky aren't you.\nTry again.\n";
      break;
    case 21:
      answer = 22;
      cout << "Well, I'll give you one more, but it's still not enough.\n"
           << "Try again.\n";
      break;
    case 12345:
      answer = 12345;
      cout << "A spceial number call for a specail ~song~ ;)\n"
      << "Never gonna give you up!,Never gonna let you down! never gonna run around and desert you ~\n "
              << "Nice attempt but Try again.\n";
              break;
    case 404:
      answer = 404;
      cout << "Goodbye" << endl;
           return(0);
      break;

    default:
      cout << "That number is so bogus, I'm taking what little you have away from you.\n"
           << "Try again, and be smart about it this time.\n";
      break;
    }

  } while (answer != 42);

  cout << "You've succeeded in getting out of this dumb program!\n"
       << "Congratulations\n";

  return (EXIT_SUCCESS);
}
