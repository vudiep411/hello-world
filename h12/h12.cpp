/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h12.cpp
 */
#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

string STUDENT = "vdiep8"; // Add your Canvas/occ-email ID

// Write your function here
void expense()
{
    double num ;
    double total ;
    char ch;
     while(cin.peek() != EOF)
     {
     while(cin.get(ch))
     {
         if(ch == ' ' && cin.peek() == ' ')
         {
             continue;
         }
         else if(isdigit(cin.peek()))
         {
             break;
         }
         cout.put(ch);
     }
       cout << ", ";
       num = 0.0;
       total = 0.0;
    while(cin.get(ch))
    {
        if(isdigit(ch))
        {
            cin.unget();
            cin >> num;
            total += num;
        }
        if(ch == '\n')
        {
            break;
        }


    }


cout << fixed << setprecision(2) << total << endl;




     }




}

//////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    expense();
    return 0;
}
