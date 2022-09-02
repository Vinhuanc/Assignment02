//Code for Assignment02 Program#3
#include <iostream>
#include <string>
using namespace std;

int main(){
    double sharesOfStocks, pricePerShare, stock,total;
    
    cout << "Enter the number of shares: ";
    cin >> sharesOfStocks;
    if(sharesOfStocks < 0){
               cout << "Invalid. Number of shares of stocks and price per share of stocks must be greater than 0 \n";
               return 0;
           }
    
    cout << "Enter the price per share: ";
    cin >> pricePerShare;
    if(pricePerShare < 0){
        cout << "Invalid. Number of shares of stocks and price per share of stocks must be greater than 0\n";
        return 0;
    }
    
    stock = sharesOfStocks * pricePerShare;
    cout << "Stock: $" << stock <<"\n";
    
    const double commission = stock * 0.02;
    cout << "Commission: $" << commission <<"\n";
    
    total = stock + commission;
    cout << "Total: $" << total <<"\n";
    
    
}
