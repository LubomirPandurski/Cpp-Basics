// Product Sign.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float a = 0.0f;
    float b = 0.0f;
    float c = 0.0f;
    cin >> a >> b >> c;
    int minusCount = 0;
    if (a == 0 || b == 0 || c == 0) {
        cout << "+" << endl;
        return 0;
    }
    if (a < 0) {
        minusCount++;
    }
    if (b < 0) {
        minusCount++;
    }
    if (c < 0) {
        minusCount++;
    }
    if (minusCount == 1 || minusCount == 3) {
        cout << "-" << endl;
    }
    else {
        cout << "+" << endl;
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
