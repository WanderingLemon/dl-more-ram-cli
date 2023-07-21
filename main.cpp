//
// Created by Lemon on 7/19/2023.
//

#include <iostream> // for writing to stdio
//#include <random>
//#include <unistd.h>
#include <regex>
#include "Utils.h"


using namespace std;

int main(int argv, char** args) {
    // Command format: dl-more-ram-cli [int amount] [string type] {-U(nit) K|M|G}
    if(argv < 3){
        int input = argv-1;
        cerr << "ERROR: Was expecting 2 arguments but got " << input << "!\n";
        return -101;
    }

    int amtOfRam = atoi(*++args);
    cout << amtOfRam << endl;
    if(amtOfRam == 0){
        cerr << "ERROR: The entered amount of RAM is invalid. Make sure that it is an integer that is greater than 0!\n";
        return -102;
    }

    string type = string(*++args);
    cout << "Type: "+type << endl;

    regex reg("DDR[3-5]");
    if(!regex_match(type,reg)){
        cerr << "ERROR: The entered RAM type is invalid it must be DDR3/4/5!\n";
        return -103;
    }

    char unit = 'G';

    for(int i = 3; i < argv; i++){
        ++args;
        string arg = string(*args);
        if(arg[0] == '-'){
            // Checks for various flags starting with '-'
            switch (arg[1]) {
                case 'U':
                    i++;
                    // Checks that the -U flag has an argument/value
                    if(argv-i == 0){
                        cerr << "ERROR: Expected a value associated with the -U flag!\n";
                        return -105;
                    }
                    args++;
                    // Checks for the unit of measures
                    switch(**args){
                        case 'K':
                            unit = 'K';
                            break;
                        case 'M':
                            unit = 'M';
                            break;
                        case 'G':
                            unit = 'G';
                            break;
                        default:
                            cerr << "ERROR: The letter " << **args << "is not a valid unit of measure" <<
                                    " it needs to be K,M, or G!";
                            return -106;
                    }
                    break;
                default:
                    cerr << "ERROR:Unknown option flag '-" << arg[1] << "'!\n";
                    return -104;
            }
        }
    }

    cout << unit << endl;

    Utils utils;
    utils.loadingRAMAnim();

    return 0;
}
