#include "GenStack.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    GenStack myStack(12);

    cout << myStack.getSize() << endl;

    myStack.push('S');
    myStack.push('S');
    myStack.push('I');
    myStack.push('N');
    myStack.push('A');
    myStack.push('M');
    myStack.push(' ');
    myStack.push('N');
    myStack.push('A');
    myStack.push('H');
    myStack.push('T');
    myStack.push('E');
    myStack.push(' ');
    myStack.push('W');
    myStack.push('W');
    myStack.push('W');

    cout << myStack.getSize() << endl;


    while(!myStack.isEmpty())
    {
        cout << myStack.pop() << endl;
    }

    cout << myStack.pop() << endl;

    char userChoice = 'y';

    while(userChoice == 'y' || userChoice == 'Y')
    {
        int lineCount = 0;

        while(!thing.nextLine() == NULL)
        {
            lineCount++;
        }

        cout << lineCount << " lines of code in this file." << endl;

        for(int i = 0; i < lineCount; i++)
        {
            
        }

        cout << "Would you like to analyze another file?" << endl;
        cout << "Enter 'y' for yes or any other character for no." << endl;
        cin >> userChoice;
    }

    return 0;
}
