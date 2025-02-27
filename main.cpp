#include <iostream>
using namespace std;
int main()
{ const double CUSTOMERTOTAL=16500;
    //this number will not change
    double drinkEnergy;
    double flavorCitrus;
    double amountDrink;
    double amountCitrus;
    // initialized need variables
    drinkEnergy= .15;
    flavorCitrus= .58;
    //assigns values for the percentages needed
    amountDrink= CUSTOMERTOTAL*drinkEnergy;
    amountCitrus= flavorCitrus*amountDrink;
    std::cout << "According to the survey, the amount of customers who purchased \none or more energy drinks per week is: "
    <<amountDrink<<" people. \nWithin those customers, the amount of customers who preferred "
                   "citrus flavored drinks is: "<< amountCitrus<<" people." <<std::endl;
    return 0;
}