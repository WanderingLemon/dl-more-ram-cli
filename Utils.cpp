//
// Created by Lemon on 7/20/2023.
//

#include "Utils.h"
#include <iostream>
#include <random>
#include <string>
#include <utility>
#include <thread>
#include <chrono>

using namespace std;

const string RAM_ASCII_NP = " ____________________________________________________ \n"
                            "|    ____      ____      ____      ____      ____    |\n"
                            "| ..|    |  . |    |  . |    |  . |    | .  |    |  .|\n"
                            "| . |    | .. |    | .  |    | .. |    |. . |    |.  |\n"
                            "|. .|____| . .|____|  . |____| . .|____| .  |____| . |\n"
                            "|____________________________________________________|\n";

Utils::Utils(){
    random_device randomDevice;
    randEngine = default_random_engine(randomDevice());
    //    randDist = uniform_int_distribution<int>(100,2000); // look at this later
}

Utils::Utils(int amountOfRam, string typeOfRam) {
//    this->amountOfRam = amountOfRam;
    this->typeOfRam = std::move(typeOfRam);
//    this->unitOfRam = 'G';

    random_device randomDevice;
    randEngine = default_random_engine(randomDevice());
//    randDist = uniform_int_distribution<int>(100,2000); // look at this later
}

Utils::Utils(int amountOfRam, string typeOfRam, char unitOfRam) {
//    this->amountOfRam = amountOfRam;
    this->typeOfRam = std::move(typeOfRam);
//    this->unitOfRam = unitOfRam;

    random_device randomDevice;
    randEngine = default_random_engine(randomDevice());
    //    randDist = uniform_int_distribution<int>(100,2000); // look at this later
}

int Utils::rand(int lb, int ub) {
    uniform_int_distribution<int> distribution(lb,ub);
    return distribution(randEngine);
}

void Utils::loadingRAMAnim() {
    cout << RAM_ASCII_NP;
    char current;
    int lb = 50;
    int ub = 1000;
    string pins = "||||||||||||||||  ||||||||||||||||||||||||||||||||||||"; // len = 54
    while(!pins.empty()){
        switch (pins.length()){
            case 40:
                lb = 100;
                ub = 1500;
                break;
            case 30:
                lb = 150;
                ub = 2000;
                break;
            case 14:
                lb = 200;
                ub = 2200;
                break;
            case 3:
                lb = 1000;
                ub = 3000;
        }

        this_thread::sleep_for(chrono::milliseconds(rand(lb,ub)));
        current = pins[0];
        pins.erase(0,1);
        cout << current;
//        cout << pins << endl;
    }


}

