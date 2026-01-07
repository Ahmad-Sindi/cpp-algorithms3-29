#include <iostream>
#include <string>
#include <cctype>

using namespace std;

/*
 * Algorithm Challenge & Problem Solving. Level 3 – Challenge #29 Count Small and Capital Letters in a String
 *
 * This program reads a string from the user and counts:
 * - The number of uppercase (capital) letters
 * - The number of lowercase (small) letters
 *
 * The challenge focuses on:
 * - Character classification
 * - String traversal
 * - Counting-based algorithms
 * - Writing clear and maintainable C++ code
 */

// Reads a full string from the user
string ReadString()
{
    string Text;
    cout << "Enter a string:\n";
    getline(cin, Text);
    return Text;
}

// Counts uppercase letters in the string
short CountCapitalLetters(string S1)
{
    short CounterUp = 0;

    for (int i = 0; i < S1.length(); i++)
    {
        // Check if the current character is uppercase
        if (isupper(S1[i]))
            CounterUp++;
    }

    return CounterUp;
}

// Counts lowercase letters in the string
short CountSmallLetters(string S1)
{
    short CounterDown = 0;

    for (int i = 0; i < S1.length(); i++)
    {
        // Check if the current character is lowercase
        if (islower(S1[i]))
            CounterDown++;
    }

    return CounterDown;
}

int main()
{
    string S1 = ReadString();

    cout << "\nString Length = " << S1.length() << endl;
    cout << "Capital Letters Count = " << CountCapitalLetters(S1) << endl;
    cout << "Small Letters Count   = " << CountSmallLetters(S1) << endl;

    return 0;
}
