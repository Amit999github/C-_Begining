#include <iostream>

using namespace std;

int main(){

    int cups;
    double price, totalprice , pricePerCups , discountPrice ;
    cout << "enter the number of tea cups : ";
    cin >> cups ;
    cout << "Enter the Price Per Cups : ";
    cin >> pricePerCups ;

    price = cups * pricePerCups ;
    totalprice = price /10 ;

    if (price > 100) {
        cout << "Total Price (service charges included) " << totalprice + price << " more then 100 you gain 5\% Discount \n";
        discountPrice = price - (price / 20);
        discountPrice += discountPrice /10;
        cout << " Total Price (without Discount )" << totalprice + price << endl;
        cout << " Total price (with Discount )" << discountPrice ;
    }
    else {
        price += price /10;
        cout << " Total Price (Services Charges included ) " << price ;
    }
    

    return 0;
    
}