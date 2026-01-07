#include <iostream>
#include <string>
#include <cctype>

using namespace std;

/*
 * Algorithm Challenge & Problem Solving  Level 3 – Challenge #29 Count Letters Using Enum (Method 2)
 *
 * This approach uses:
 * - An enumeration to control behavior
 * - A single generalized counting function
 *
 * Focus:
 * - Code reuse
 * - Flexibility
 * - Design-oriented thinking
 */

// Reads a full string from the user
string ReadString()
{
    string Text;
    cout << "Enter a string:\n";
    getline(cin, Text);
    return Text;
}

// Enumeration to specify counting behavior
enum EnToCountLetter
{
    CapitalLetter = 1,
    SmallLetter   = 2,
    AllLetters    = 3
};

// Generalized letter counting function
short CountLetter(string S1, EnToCountLetter CheckLetter = EnToCountLetter::AllLetters)
{
    if (CheckLetter == EnToCountLetter::AllLetters)
        return S1.length();

    short Counter = 0;

    for (int i = 0; i < S1.length(); i++)
    {
        if (CheckLetter == EnToCountLetter::CapitalLetter && isupper(S1[i]))
            Counter++;

        if (CheckLetter == EnToCountLetter::SmallLetter && islower(S1[i]))
            Counter++;
    }

    return Counter;
}

int main()
{
    string S1 = ReadString();

    cout << "\nString Length = " << CountLetter(S1) << endl;
    cout << "Capital Letters Count = " 
         << CountLetter(S1, EnToCountLetter::CapitalLetter) << endl;
    cout << "Small Letters Count   = " 
         << CountLetter(S1, EnToCountLetter::SmallLetter) << endl;

    return 0;
}
