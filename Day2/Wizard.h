//
// Created by vulgaris on 7/16/20.
//
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include "Warrior.h"


using namespace std;

#ifndef CPLUSPLUS_WIZARD_H
#define CPLUSPLUS_WIZARD_H


class Wizard : public Warrior {
public:
    string _name;

    string getName() {
        return _name;
    }

    int displayName() {
        std::cout << _name << ": " << endl;
        return 0;
    }

    int modifyAttack(int point) {
        _attack = _attack - point;
        std::cout<<"Hehh! I can change your power";
        return 0;
    }
};


#endif //CPLUSPLUS_WIZARD_H
