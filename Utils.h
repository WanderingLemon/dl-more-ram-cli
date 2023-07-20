//
// Created by wisdo on 7/20/2023.
//
#include <string>
#include <random>

#ifndef DL_MORE_RAM_CLI_UTILS_H
#define DL_MORE_RAM_CLI_UTILS_H

class Utils {
public:
    Utils();
    Utils(int amountOfRam, std::string typeOfRam);
    Utils(int amountOfRam, std::string typeOfRam, char unitOfRam);
    int rand(int lb, int ub);
private:
    int amountOfRam{};
    std::string typeOfRam;
    char unitOfRam{};
    std::default_random_engine randEngine;
//    std::uniform_int_distribution<int> randDist; // Look at this later
};

#endif //DL_MORE_RAM_CLI_UTILS_H
