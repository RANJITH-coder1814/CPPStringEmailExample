#include<iostream>
using namespace std;
int main(){
    string email="ranjithranjith2747@gmail.com";
    int i=email.find('@');
    string urname= email.substr(0,i);
    cout<<"user name is "<<urname<<endl;
    return 0;
}