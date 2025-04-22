#include "cards.h"
#include "helpers.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void shuffleArray(Cards arr[], int size) {
    srand(time(0)); // Seed random number generator
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1); // Random index from 0 to i
        swap(arr[i], arr[j]); // Swap elements
    }
}
