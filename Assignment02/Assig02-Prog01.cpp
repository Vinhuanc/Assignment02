//Code for Assignment02 Program#1
// Program #1
// Write a program that computes the tax and tip on a restaurant bill for a meal charge. The tax should be 6.75 percent of the meal cost. The tip should be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip amount, and total bill on the screen.
// • Use a const (constant) for the tax and tip rates (0.0675 and 0.2 respectively)
// • Ask the user for the cost of the meal
// Sample Output:
// Meal: $85.45
// Tax: $5.76788
// Tip: $18.2436
// Total: $109.461
// Press any key to continue . . .
// Test Cases to try and think about:
// • How does your program respond when the values entered are negative?
// • How does your program respond when the values entered are smaller than a penny?
#include <iostream>
#include <string>
using namespace std;

int main(){
 //   double mealCost, tax, tip;
    double mealCost, total;
    cout << "Enter cost of meal: $";
    
    cin >> mealCost;
    if(mealCost < 0){
        cout << "Meal cost must be a positive integer.\n";
        return 0;
    }else if(mealCost < 0.01){
        cout << "Invalid. Please recheck the meal price. \n";
        return 0;
    }
    
    const double tax = 0.0675 * mealCost;
    cout << "Tax: $" << tax << "\n";
    
    const double tip = (mealCost + tax) * 0.20;
    cout << "Tip: $" << tip << "\n";
    
    total = mealCost + tax + tip ;
    cout << "Total: $" << total << "\n";
    
    
}
