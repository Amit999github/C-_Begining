#include <iostream>

using namespace std;

int main(){
    float teaprice = 45.2;
    int roundedPrice = (int)  teaprice;
    cout << roundedPrice << endl;
    
    int teaQuantity = 2;
    int totalPrice = teaQuantity * teaprice;

    cout << totalPrice << endl; 

    float teaQty = 2;
    float TotalPrice = teaQty * teaprice;

    
    cout << TotalPrice ;
    return 0;
}