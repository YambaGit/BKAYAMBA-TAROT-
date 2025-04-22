#ifndef CARDS_H
#define CARDS_H
#include <iostream>
using namespace std;
class Cards {
    public:
    Cards(string m, string mr, string cardname);

    void displayTheCard();
     private:
    string name;
    string meaning;
    string Meaningreverse;

};

#endif