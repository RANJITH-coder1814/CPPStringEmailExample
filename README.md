Email Username Extractor (C++)

This repository contains a simple C++ program that extracts the username from an email address using string functions.

Concept Used

string

find() function

substr() function

Basic input/output in C++

🛠️ Program Description

The program:

1.Stores an email address in a string

2.Finds the position of the @ symbol

3.Extracts the username (text before @)

4.Displays the username
Source Code

#include<iostream>
using namespace std;
int main(){
    string email = "ranjithranjith2747@gmail.com";
    int i = email.find('@');
    string username = email.substr(0, i);
    cout << "User name is " << username << endl;
    return 0;
}
