#include <iostream>
#include <cassert>
#include <string>
#include "primals.h"

using namespace std;

int main() {
    //Say hi to the world
    cout << "Please choose a primal from the list below" << endl;
    string primals = "Chuck Roll, Chuck Shoulder Clod, Ribeye, Short Loin, Top Sirloin, Bottom Sirloin, Top Round, Eye of Round, Bottom Round";
    cout << primals << endl;
    string input;
    getline(cin, input);
    while (input != "quit") {
        cout << "Please enter a new input from " << primals << " or 'quit' to quit\n";
        getline(cin, input);
        if (input == "Chuck Roll") {
            chuck_roll chuck_roll;
            cout << chuck_roll.explain() << endl << endl;
        }
        else if (input == "Chuck Shoulder Clod") {
            chuck_clod chuck_clod;
            cout << chuck_clod.explain() << endl << endl;
        }
        else if (input == "Ribeye") {
            ribeye ribeye;
            cout << ribeye.explain() << endl << endl;
        }
        else if (input == "Short Loin") {
            short_loin short_loin;
            cout << short_loin.explain() << endl << endl;
        }
        else if (input == "Top Sirloin") {
            top_sirloin top_sirloin;
            cout << top_sirloin.explain() << endl << endl;
        }
        else if (input == "Bottom Sirloin") {
            bottom_sirloin bottom_sirloin;
            cout << bottom_sirloin.explain() << endl << endl;
        }
        else if (input == "Top Round") {
            top_round top_round;
            cout << top_round.explain() << endl << endl;
        }
        else if (input == "Eye of Round") {
            eye_of_round eye_of_round;
            cout << eye_of_round.explain() << endl << endl;
        }
        else if (input == "Bottom Round") {
            bottom_round bottom_round;
            cout << bottom_round.explain() << endl << endl;
        }
        else if (input == "quit") {
            cout << "Program exiting" << endl;
        }
        else {
            cout << "Selection invalid" << endl << endl;
        }
    }
    


    return 0;
}