#include <iostream>
using namespace std;

int main()
{
    double currentSealevel;
    double levelRise = 1.5;
    double levelFive;
    double levelSeven;
    double levelTen;
    // intialized needed variables for program//
    currentSealevel= 103;
    levelFive = currentSealevel + levelRise*5;
    levelSeven = currentSealevel + levelRise*7;
    levelTen = currentSealevel + levelRise*10;
    //assigned values to variables for requested values//
    cout << "The current sea Level is: "<< currentSealevel<<" mm. "<< endl;
    cout<< "In five years it will be: "<< levelFive<<" mm. "<< endl;
    cout<< "In seven years it will be: " << levelSeven<<" mm. "<< endl;
    cout<< "In ten years it will be: "<< levelTen<<" mm.";
    //displays information


    {

    }

    return 0;
}

