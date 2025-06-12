#include <iostream>
#include <string>

using namespace std;

int main() {

    string teaOrder;
    
    cout << "Enter your Tea Order : ";
    getline (cin,teaOrder) ;

    cout << teaOrder << endl;

    if (teaOrder == "green tea")
    {
        cout << "Your Order for " << teaOrder << " have Confirmed .";
    }
    else {
        cout << "Your Order for " << teaOrder << " have pending .";
    }   
}