#ifndef PRIMALS_H
#define PRIMALS_H

#include<iostream>
#include<string>

using namespace std;
//Base Class
class primal {
    private:
    //Name of the primal and the cuts it contains
        string name;
        string cuts;
    public:
    //Create a string containing the cuts
        string create_explanation() {
            string list;
            int list_length = sizeof(cuts)/sizeof(cuts[0]);
            //add each cut and a comma to the string unless it is the last cut on the list
            for (int i = 0; i < list_length; i++) {
                if (i < list_length - 1) {
                    list = list + cuts[i] + ", ";
                }
            //omit the comma if this is the last cut in the list
                else {
                    list = list + cuts[i];
                }
            }
            return list;
        }
        string explain() {
            return name + " contains:\n" + create_explanation();
        }

};

class chuck_roll: primal {
    private:
        string name = "Chuck Roll";
        string cuts[3] = {"Chuck Roast", "Chuck Steak", "Center Eye Steak"};
    public:
        string create_explanation() {
            string list;
            int list_length = sizeof(cuts)/sizeof(cuts[0]);
            for (int i = 0; i < list_length; i++) {
                if (i < list_length - 1) {
                list = list + cuts[i] + ", ";
                }
                else {
                list = list + cuts[i];
                }
            }
            return list;
        }
        string explain(){
            return name + " contains:\n" + create_explanation();
        }
};

class chuck_clod: primal {
    private:
    //Name of the primal and the cuts it contains
        string name = "Chuck Shoulder Clod";
        string cuts[3] = {"English Roast", "Flat Iron Steak", "Ranch Steak"};
    public:
    //Create a string containing the cuts
        string create_explanation() {
            string list;
            int list_length = sizeof(cuts)/sizeof(cuts[0]);
            //add each cut and a comma to the string unless it is the last cut on the list
            for (int i = 0; i < list_length; i++) {
                if (i < list_length - 1) {
                    list = list + cuts[i] + ", ";
                }
            //omit the comma if this is the last cut in the list
                else {
                    list = list + cuts[i];
                }
            }
            return list;
        }
        string explain() {
            return name + " contains:\n" + create_explanation() ;
        }

};

class ribeye: primal {
    private:
    //Name of the primal and the cuts it contains
        string name = "Ribeye";
        string cuts[5] = {"Boneless Ribeye Steak", "Bone-in Rib Steak", "Tomahawk Steak", "Cowboy Steak", "Standing Rib Roast"};
    public:
    //Create a string containing the cuts
        string create_explanation() {
            string list;
            int list_length = sizeof(cuts)/sizeof(cuts[0]);
            //add each cut and a comma to the string unless it is the last cut on the list
            for (int i = 0; i < list_length; i++) {
                if (i < list_length - 1) {
                    list = list + cuts[i] + ", ";
                }
            //omit the comma if this is the last cut in the list
                else {
                    list = list + cuts[i];
                }
            }
            return list;
        }
        string explain() {
            return name + " contains:\n" + create_explanation();
        }

};

class short_loin: primal {
    private:
    //Name of the primal and the cuts it contains
        string name = "Short Loin";
        string cuts[5] = {"Tenderloin Roast", "Filet Mignon", "New York Strip", "T-bone Steak", "Porterhouse Steak"};
    public:
    //Create a string containing the cuts
        string create_explanation() {
            string list;
            int list_length = sizeof(cuts)/sizeof(cuts[0]);
            //add each cut and a comma to the string unless it is the last cut on the list
            for (int i = 0; i < list_length; i++) {
                if (i < list_length - 1) {
                    list = list + cuts[i] + ", ";
                }
            //omit the comma if this is the last cut in the list
                else {
                    list = list + cuts[i];
                }
            }
            return list;
        }
        string explain() {
            return name + " contains:\n" + create_explanation();
        }

};

class top_sirloin: primal {
    private:
    //Name of the primal and the cuts it contains
        string name = "Top Sirloin";
        string cuts[8] = {
            "Top Sirloin Steak", 
            "Top Sirloin Filet", 
            "Top Sirloin Filet Roast", 
            "Top Sirloin Strip Steak",
            "Top Sirloin Brazilian Roast",
            "Top Sirloin Petite Steak",
            "Top Sirloin Petite Roast",
            "Breakfast Steak"};
    public:
    //Create a string containing the cuts
        string create_explanation() {
            string list;
            int list_length = sizeof(cuts)/sizeof(cuts[0]);
            //add each cut and a comma to the string unless it is the last cut on the list
            for (int i = 0; i < list_length; i++) {
                if (i < list_length - 1) {
                    list = list + cuts[i] + ", ";
                }
            //omit the comma if this is the last cut in the list
                else {
                    list = list + cuts[i];
                }
            }
            return list;
        }
        string explain() {
            return name + " contains:\n" + create_explanation();
        }

};

class bottom_sirloin: primal {
    private:
    //Name of the primal and the cuts it contains
        string name = "Bottom Sirloin/Sirloin Tip";
        string cuts[3] = {"Sirloin Tip Steak", "Sirloin Tip Roast", "Breakfast Steak"};
    public:
    //Create a string containing the cuts
        string create_explanation() {
            string list;
            int list_length = sizeof(cuts)/sizeof(cuts[0]);
            //add each cut and a comma to the string unless it is the last cut on the list
            for (int i = 0; i < list_length; i++) {
                if (i < list_length - 1) {
                    list = list + cuts[i] + ", ";
                }
            //omit the comma if this is the last cut in the list
                else {
                    list = list + cuts[i];
                }
            }
            return list;
        }
        string explain() {
            return name + " contains:\n" + create_explanation();
        }

};

class top_round: primal {
    private:
    //Name of the primal and the cuts it contains
        string name = "Top Round";
        string cuts[3] = {"Top Round Steak", "Top Round Roast/London Broil", "Swissed Steak"};
    public:
    //Create a string containing the cuts
        string create_explanation() {
            string list;
            int list_length = sizeof(cuts)/sizeof(cuts[0]);
            //add each cut and a comma to the string unless it is the last cut on the list
            for (int i = 0; i < list_length; i++) {
                if (i < list_length - 1) {
                    list = list + cuts[i] + ", ";
                }
            //omit the comma if this is the last cut in the list
                else {
                    list = list + cuts[i];
                }
            }
            return list;
        }
        string explain() {
            return name + " contains:\n" + create_explanation();
        }

};

class eye_of_round: primal {
    private:
    //Name of the primal and the cuts it contains
        string name = "Eye of Round";
        string cuts[2] = {"Eye Of Round Steak", "Eye of Round Roast"};
    public:
    //Create a string containing the cuts
        string create_explanation() {
            string list;
            int list_length = sizeof(cuts)/sizeof(cuts[0]);
            //add each cut and a comma to the string unless it is the last cut on the list
            for (int i = 0; i < list_length; i++) {
                if (i < list_length - 1) {
                    list = list + cuts[i] + ", ";
                }
            //omit the comma if this is the last cut in the list
                else {
                    list = list + cuts[i];
                }
            }
            return list;
        }
        string explain() {
            return name + " contains:\n" + create_explanation();
        }

};

class bottom_round: primal {
    private:
    //Name of the primal and the cuts it contains
        string name = "Bottom Round";
        string cuts[4] = {"Rump Roast", "Bottom Round Steak", "Cubed Steak", "Stew Meat"};
    public:
    //Create a string containing the cuts
        string create_explanation() {
            string list;
            int list_length = sizeof(cuts)/sizeof(cuts[0]);
            //add each cut and a comma to the string unless it is the last cut on the list
            for (int i = 0; i < list_length; i++) {
                if (i < list_length - 1) {
                    list = list + cuts[i] + ", ";
                }
            //omit the comma if this is the last cut in the list
                else {
                    list = list + cuts[i];
                }
            }
            return list;
        }
        string explain() {
            return name + " contains:\n" + create_explanation();
        }

};



#endif