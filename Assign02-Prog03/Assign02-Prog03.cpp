//Code for Assignment02 Program#3
// Program #3
// Kathryn bought 750 shares of stock at a price of $35.00 per share. She must pay her stockbroker a 2 percent commission for the transaction. Write a program that calculates and displays the following: The amount paid for the stock alone (without the commission); The amount of the commission; and the total amount paid (for the stock plus the commission). Generalize the program so that Kathryn can use it for other situations as well.
// • Have your program ask the user for the number of shares and the price per share
// • Use a const for the commission (0.02)
// Sample Output:
// Enter the number of shares: 25152
// Enter the price per share: 12.5
// Stock: $314400
// Commission: $6288
// Total: $320688
// Press any key to continue . . .
// Test Cases to try and think about:
// • How does your program respond when the values entered are negative?
// • How does your program respond when the values entered are smaller than a penny?
// • Can you enter a fractional number of shares?
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
