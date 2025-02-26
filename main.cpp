#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main()
{   double gasTank;
    double milesTown;
    double milesHigh;
    double distTown;
    double distHigh;
    //intialized variables
    gasTank=20;
    milesTown=23.5;
    milesHigh=28.9;
  distTown=gasTank*milesTown;
  distHigh=gasTank*milesHigh;
    //assigned values to variables
    cout<<"This car can travel: "<<distTown<<" miles on one tank of gas in town and: "
    <<distHigh<<" miles on one tank of gas on the highway.";





    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.