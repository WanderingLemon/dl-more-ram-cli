//
// Created by wisdo on 7/20/2023.
//

#include "Utils.h"
#include <iostream>
#include <random>
#include <string>
#include <utility>

using namespace std;

Utils::Utils(){
    random_device randomDevice;
    randEngine = default_random_engine(randomDevice());
    //    randDist = uniform_int_distribution<int>(100,2000); // look at this later
}

Utils::Utils(int amountOfRam, string typeOfRam) {
    this->amountOfRam = amountOfRam;
    this->typeOfRam = std::move(typeOfRam);
    this->unitOfRam = 'G';

    random_device randomDevice;
    randEngine = default_random_engine(randomDevice());
//    randDist = uniform_int_distribution<int>(100,2000); // look at this later
}

Utils::Utils(int amountOfRam, string typeOfRam, char unitOfRam) {
    this->amountOfRam = amountOfRam;
    this->typeOfRam = std::move(typeOfRam);
    this->unitOfRam = unitOfRam;

    random_device randomDevice;
    randEngine = default_random_engine(randomDevice());
    //    randDist = uniform_int_distribution<int>(100,2000); // look at this later
}

int Utils::rand(int lb, int ub) {
    uniform_int_distribution<int> distribution(lb,ub);
    return distribution(randEngine);
}

