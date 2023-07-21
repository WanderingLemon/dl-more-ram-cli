//
// Created by Lemon on 7/20/2023.
//
#include <string>
#include <random>

#ifndef DL_MORE_RAM_CLI_UTILS_H
#define DL_MORE_RAM_CLI_UTILS_H

extern const std::string RAM_ASCII_NP;

class Utils {
public:
    // Constructors
    Utils();
    Utils(int amountOfRam, std::string typeOfRam);
    Utils(int amountOfRam, std::string typeOfRam, char unitOfRam);

    // Misc
    int rand(int lb, int ub);

    // Output
    void loadingRAMAnim();


private:
//    int amountOfRam{};
//    std::string typeOfRam;
//    char unitOfRam{};
    std::default_random_engine randEngine;
//    std::uniform_int_distribution<int> randDist; // Look at this later
};

#endif //DL_MORE_RAM_CLI_UTILS_H
