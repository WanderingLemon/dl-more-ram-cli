//
// Created by Lemon on 7/19/2023.
//

#include <iostream> // for writing to stdio
#include <random>
#include <unistd.h>
#include "Utils.h"


using namespace std;

int main(int argv, char** args) {
    cout << "Number of arguments input: " << argv << endl;

    // Goes through all arguments
    for(int i = 0; i < argv; args++, i++ ) {

    }

    // RNG settings
    Utils utils;

    cout << utils.rand(1,100) << endl;


    return 0;
}
