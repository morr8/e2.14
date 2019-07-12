/*
 • E2.14Printing a grid. Write a program that prints the following grid to play tic-tac-toe.
 
 +--+--+--+
 |  |  |  |
 +--+--+--+
 |  |  |  |
 +--+--+--+
 |  |  |  |
 +--+--+--+
 Of course, you could simply write seven statements of the form
 
 cout << "+--+--+--+";
 You should do it the smart way, though. Define string variables to hold two kinds of patterns: a comb-shaped pattern
 
 +--+--+--+
 |  |  |  |
 and the bottom line. Print the comb three times and the bottom line once.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string comb = "+--+--+--+\n|  |  |  |";
    string bottom_line = "+--+--+--+";
    cout << comb << endl << comb << endl << comb << endl << bottom_line << endl;
}
