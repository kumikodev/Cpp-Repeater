#include <iostream>
#include <chrono>
#include <thread>
#include <string.h>

using namespace std;

int main()
{


    cout << "Please Type in a string or a number: ";
    string cui;
    cin >> cui;
    cout << "Please Type the time you want in milliseconds: " << endl;
    int time;
    cin >> time;


    for (int i = 0; i < time; i++)
    {
        cout << cui << endl;
    }
}