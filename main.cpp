// ./calc 1 + 2.cpp
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
using namespace std;
int main(int argc, char* argv[])
{
  cout<<"z:\t"<<argc-1<<endl;
  for( int a=1; a<=argc-1; a++)
  {
      cout <<"argv\t["<<a<<"]\t=\t"<< argv[a]<<endl;}
{
  char b;
  b=argv[2][0];
  double x , y;
  x=  atof (argv[1]);
  y=  atof (argv[3]);
  switch (b)
{
        case '+':
       {
           cout << x<< "+" <<y<< "=" << x+y;
       break;}
            case '-':
       {
           cout << x<< "-"<<y<< "="<< x-y;
       break;}
            case '*':
       {
           cout << x<< "*"<< y<< "="<< x*y;
       break;}
           case '%':
       {
           cout << x<< "%"<< y<< "="<< (int)x % (int)y;
       break;}
           case '/':
       {
           cout << x<< "/"<< y<< "="<< x/y;
       break;}
           case '&':
       {
           
           cout << x<< "&"<< y<< "="<< x&&y;
       break;}
           case 'p': /*p - значит возведение в степень. */ 
        {
            cout << x<< "v stepeni"<< y<< "="<< pow (x,y) ;
        break;}
           case '^':
       {
           cout << x<< "^"<< y<< "="<< x||y ;
        break;}
           case 'c': /* c - значит сравнение. */
        {
            if (x<y) cout << "x<y" ;
            if (x>y) cout << "x>y" ;
            else cout << "x==y" ;
       break;}
      default:
      cout<<"err";}
      system("pause");
      return 0;}
}
