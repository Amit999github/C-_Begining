#include <iostream>
#include <string>
using namespace std;

int main (){
    int cups;
    string status;
    bool isStudent;

    cout << " Enter the number of cups you have : ";
    cin >> cups;
    cout << " Are you Student (yes or no) ?: ";
    cin >> status;
    cout << " Are you Student (1 or 0) ?: ";
    cin >> isStudent;
    cout << status ;
    
    if (isStudent || cups == 15) {
        cout << "Congratulation!  you are eligible for discount";
    } else {
        cout << "Sorry !  you are not eligible for discount";
    }
    

}