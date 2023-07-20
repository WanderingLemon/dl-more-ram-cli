//
// Created by Lemon on 7/19/2023.
//

#include <iostream> // for writing to stdio
#include <random>
#include <unistd.h>

using namespace std;

int main(int argv, char** args) {
    cout << "Number of arguments input: " << argv << endl;

    // Goes through all arguments
    for(int i = 0; i < argv; args++, i++ ) {

    }

    // RNG settings
    random_device rd;
    default_random_engine engine(rd());
    uniform_int_distribution<int> distribution(100,2000);

    int rand = distribution(engine);
    cout << rand << endl;


    return 0;
}
