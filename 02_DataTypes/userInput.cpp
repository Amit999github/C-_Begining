#include <iostream>
#include <string>
using namespace std;

int main(){

    string userTea;
    int teaQnty;

    cout << "what would you like to order Tea ? \n";

    getline(cin , userTea);

    cout << "how many coups of " << userTea << " would you like to have ?";

    cin >> teaQnty;

    cout << teaQnty << endl;
    cout << userTea;
    return 0;
}