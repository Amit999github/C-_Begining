#include <iostream>
#include <string>

using namespace std;

int main() {
     int currTime ;

     cout << " Enter the Current hour (0 - 23) : ";
     cin >> currTime ;
     
     if (currTime >= 8 && currTime <= 18){
          cout << " Tea shop is Open !";
     } else{
          cout << " Tea shop is Closed !";
     }
}