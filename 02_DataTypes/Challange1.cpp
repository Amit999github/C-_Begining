#include <iostream>
#include <string>

using namespace std;

int main(){
    string userTea;
    int teaQty;
    float basePrice;

    cout << "what would you like to order Tea ? \n";

    getline(cin , userTea);

    cout << "how many coups of " << userTea << " would you like to have ? \n";

    cin >> teaQty;

    cout << "What would you set the Price of tea. ";

    cin >> basePrice ; 

    cout << "\"name\"" << userTea << endl;
    cout << "Quantity : " << teaQty << endl;
    cout << "Base Price " << basePrice;
    basePrice += basePrice / 10 ;
    cout << "Total Price (service charges included) :" << basePrice;
    return 0;
}
