/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Julio Lopez
 */

#include "std_lib_facilities.h"

class Name_value{
public:
    Name_value(string n, int v) : name(n), value(v) {}
    string name;
    int value;
};

int main()
{
    vector<Name_value> vals;
    string s;
    int t;
    cout << "Enter name and number with a space between:\n";
    while (cin >> s >> t && s != "NoName"){
        for (int i = 0; i < vals.size(); ++i)
            if (s == vals[i].name)
                error("duplicate: ", s);
        vals.push_back(Name_value(s, t));
    }
    for (int i = 0; i < vals.size(); ++i)
        cout << '(' << vals[i].name << ',' << vals[i].value << ")\n";
}