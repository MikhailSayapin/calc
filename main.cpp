// ./calc 1 + 2.cpp
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
using namespace std;
int main(int argc, char* argv[])
{
    cout << "z:\t" << argc - 1 << endl;
    for (int a = 1; a <= argc - 1; a++)
    {
        cout << "argv\t[" << a << "]\t=\t" << argv[a] << endl;
    }
    {
        char b;
        b = argv[2][0];
        int x, y;
        x = atoi(argv[1]);
        y = atoi(argv[3]);
        if (argc == 4)
        {
            switch (b)
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
                        cout << "err";
                    else
                        cout << x << "/" << y << "=" << (double)(x / y);
                    break;
                }
                case '&':
                {
                    cout << x << "&" << y << "=" << x && y;
                    break;
                }
                case 'p': /*p - значит возведение в степень. */
                {
                    cout << x << "v stepeni" << y << "=" << pow(x, y);
                    break;
                }
                case '^':
                {
                    cout << x << "^" << y << "=" << x || y;
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
                    cout << x << "<\t =" << (x << 1);
                    break;
                }
                case '>':
                {
                    cout << x << ">\t =" << (x >> 1);
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
        else
            cout << "err";
    }
    return 0;
}
