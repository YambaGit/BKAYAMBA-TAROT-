#include "cards.h"
#include <cstdlib>
#include <iostream>
#include <ostream>
#include <__fwd/string.h>
using namespace std;



                 Cards :: Cards(string m, string mr, string cardname) {
                meaning = m;
                Meaningreverse = mr;
                name = cardname;

            }
           void Cards :: displayTheCard() {
                cout << "card name: " << name << endl;
                if (rand()%2 == 0) {
                    cout << "meaning:" << meaning << endl;
                } else {
                    cout << "Meaningreverse:" << Meaningreverse << endl;
                }


            }

