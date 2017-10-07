// ./calc 1 + 2.cpp
#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
int main()
{
    int x;
    int y;
    char d;
    while (true)
    {
        cout << "\nEnter the operation:\n +, -, *, /, &, |, ^ , c, <, >, !, %\n";
        cin >> d;
        cout << ("first number\t");
        cin >> (x);
        if (d != '!')
        {
            cout << ("second number\t");
            cin >> (y);
        }
        switch (d)
        {
            case '+':
            {
                cout << x << "+" << y << "=" << x + y;
                break;
            }
            case '-':
            {
                cout << x << "-" << y << "=" << x - y;
                break;
            }
            case '*':
            {
                cout << x << "*" << y << "=" << x * y;
                break;
            }
            case '/':
            {
                if (y == 0)
                    cout << "err: you can't divide by zero";
                else
                    cout << x << "/" << y << "=" << (double)(x / y);
                break;
            }
            case '&':
            {
                cout << x << "&" << y << "=" << x & y;
                break;
            }
            case '^':
            {
                cout << x << "^" << y << "=" << pow(x, y);
                break;
            }
            case '|':
            {
                cout << x << "|" << y << "=" << x | y;
                break;
            }
            case 'c': /* c - значит сравнение. */
            {
                if (x < y)
                    cout << "x<y";
                if (x > y)
                    cout << "x>y";
                else
                    cout << "x==y";
                break;
            }
            case '<':
            {
                if (y >= 0)
                    cout << x << "<" << y << "=" << (x << y);
                else
                    cout << "err";
                break;
            }
            case '>':
            {
                if (y >= 0)
                    cout << x << ">" << y << "=" << (x >> y);
                else
                    cout << "err";
                break;
            }
            case '!':
            {
                cout << x << "!\t=" << (!x);
                break;
            }
            case '%':
            {
                int m;
                cout << "enter the module";
                cin >> m;
                cout << x << "-%" << y << "=" << (x - y) % m;
                break;
            }
            default:
                cout << "err";
        }
    }
    return 0;
}
