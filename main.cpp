#include <iostream>
using namespace std;
#include "cards.h"





int main() {
    srand(time(0));
    Cards grilledcheesesandwich("you are all about your bread, never negletimg the cheese", "you get dry and crusty after a while", "grilled cheese sandwich card");
    Cards pizza ("everybody loves you", "you are mad cheesy", "pizza card");
    Cards icecream ("you have manu different flavors to your personality", "you melt under pressure", "ice cream card");
    Cards pestopasta ("you have sauce", "you tend to get messy", "pestopasta card");
    Cards chickenwings("you are fly", "you tend to get dry after a while", "chicken wing card");
    Cards burrito ("you never fold under pressure", "you tend to get messy ", "burrito card");
    Cards friedrice("hot and steamy!", "you tend to be left out alot", "fried rice card");
    Cards sushi("you are raw and genuine in conversation", "you are a risk when left out for a long time", "sushi card");
    Cards allcards [8] = {grilledcheesesandwich, pizza, icecream, pestopasta, chickenwings, burrito, friedrice, sushi};

    string cardname [8] = {"grilled cheese sandwich card", "pizza card", "ice cream card", "pestopasta card", "chicken wing card", "burrito card", "fried rice card", "sushi card"};

    int random = rand() % 8;

    cout <<"TOP THREE CARDS FROM YOUR DECK:"  << endl;
    cout<<"[THIS REPRESENTS YOUR PAST]" <<endl;
    allcards[random].displayTheCard();
   random = rand() % 8;
    srand(time(0));
    cout<<"[THIS REPRESENTS YOUR PRESENT]" <<endl;
    allcards[random].displayTheCard();
    random = rand() % 8;
    srand(time(0));
    cout<<"[THIS REPRESENTS YOUR FUTURE]" <<endl;
    allcards[random].displayTheCard();




    return 0;

};

