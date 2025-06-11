#include <iostream>

using namespace std;

int main(){
    int cups;
    cout << "Enter the number of cups you have : ";
    cin >> cups;

    if (cups >= 20)
    {
        cout << "you have more then \"20 Cups\"  you earn a \"Gold Batch\" "; 
    }
    else if (cups >=10 && cups <= 20)
    {
        cout << "you have  " << cups << " Cups you earn a \"Silver Batch\" "; 
    } 
    else{
        cout << "you have  " << cups << " Cups to earn a \"Silver Or Gold Batch Buy more Cups of Tea\" "; 
    }
    
}