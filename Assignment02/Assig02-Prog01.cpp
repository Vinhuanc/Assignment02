//Code for Assignment02 Program#1
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
