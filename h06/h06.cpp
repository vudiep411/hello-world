/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h06.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string STUDENT = "vdiep8";  // Add your Canvas login name

// Implement your function here
string toFrenchGender(const string& country)
{
    string plain = "Israel , Madagascar , Sri Lanka , Singapore , Monaco , Cuba , Cyprus";
    string mas = "Belize , Cambodge , Honduras , Mexique , Mozambique , Costa Rica , Zimbabwe";
    bool masculine = mas.find(country);
    bool p = plain.find(country);
    string vowels = "AEIOU";
    bool first = vowels.find(country[0]);
    string island = "iles";
    auto len = country.size() - 1;
    string result;
    string last = country.substr(country.size() - 2);
    if(p )
    {
        result = country;
    }
    else if(masculine )
    {
        result = "el " + country;
    }
    else if(!first)
    {
        result = "l'" + country;
    }

    else if(country.substr(0 , 4).compare(island) == 0 || (last == "es" ||last == "is" || last == "os" || last == "as") )
    {

        result = "les " + country;
    }

    else if(country[len] == 'e' || country[len] == 'o')
    {

        result = "la " + country;
    }
    else
    {

        result = "le " + country;
    }

    return result;
}


/////////////// Optional Student Code /////////////////

int run()
{
    cout << "Student testing" << endl;
    return 0;
}