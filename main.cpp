#include <iostream>
#include <cassert>
#include <string>
#include "primals.h"

using namespace std;

int main() {
    //Say hi to the world
    cout << "Hello World!" << endl;
    //create an instance of our chuck_roll class
    chuck_roll chuck_roll;
    chuck_clod chuck_clod;
    //use cout to describe that class to the user
    cout << chuck_roll.explain() << endl;

    cout << chuck_clod.explain() << endl;

    ribeye ribeye;

    cout << ribeye.explain() << endl;

    short_loin short_loin;

    cout << short_loin.explain() << endl;

    top_sirloin top_sirloin;

    cout << top_sirloin.explain() << endl;

    bottom_sirloin bottom_sirloin;

    cout << bottom_sirloin.explain() << endl;

    top_round top_round;

    cout << top_round.explain() << endl;

    eye_of_round eye_of_round;

    cout << eye_of_round.explain() << endl;

    bottom_round bottom_round;

    cout << bottom_round.explain() << endl;


    return 0;
}