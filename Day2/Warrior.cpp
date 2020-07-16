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

int main(int argc, char *argv[]) {
    Warrior warrior("WarTooth", 100, 100);
    warrior.displayName();
    warrior.setHp(-5);
    warrior.setHp(10);
}