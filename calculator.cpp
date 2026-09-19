#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string operation;
    double number1, number2;

    cout<<"Enter First Number: ";
    cin>>number1;
    cout<<"Enter Operation(+, -, *, /): ";
    cin>>operation;
    cout<<"Enter Second Number: ";
    cin>>number2;

    if(operation == "+")
    {
        cout<< number1 + number2 << endl;
    }
    else if (operation == "-")
    {
        cout<< number1 - number2 << endl;
    }
    else if (operation == "*")
    {
        cout<< number1 * number2 << endl;
    }
    else if(operation == "/")
    {
        if(number2 != 0)
        {
            cout<< number1 / number2 <<endl;
        }
        else{
            cout<<"Invalid: You cannot divide by a zero"<<endl;
        }
    }
    else
    {
        cout<<"Not a recognised Operation"<<endl;
    }
    
    return 0;
}