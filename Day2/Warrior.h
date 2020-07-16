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


using namespace std;
#ifndef CPLUSPLUS_WARRIOR_H
#define CPLUSPLUS_WARRIOR_H


class Warrior {
public:
    string _name;
    int _hp;
    int _attack;

    Warrior(string name, int hp, int attack) {
        _name = name;
        _hp = hp;
        _attack = attack;
    }

    ~Warrior() {
        std::cout << "Ohh... I die!!"<< endl;
    }

    string getName() {
        return _name;
    }

    int getHp() {
        return _hp;
    }

    int getAttack() {
        return _attack;
    }

    int setHp(int point) {
        if (point > 0) {
            _hp = _hp + point;
            std::
            cout << "Oh! I gain health point!!"<< endl;
            return _hp;
        }
        _hp = _hp - point;
        std::
        cout << "I've been hurt!!"<< endl;
        return _hp;
    }

    int setAttack(int point) {
        if (point > 0) {
            _attack = _attack + point;
            std::cout << "I feel stronger!!"<< endl;
            return _attack;
        }
        _attack = _attack - point;
        std::cout << "I'm losing power!!"<< endl;
        return _attack;
    }

    int displayName() {
        std::cout << _name << ": " << endl;
        return 0;
    }

    int attack() {
        std::cout << "I go for a hit!! I deal attack!"<< endl;
        return 0;
    }

};


#endif //CPLUSPLUS_WARRIOR_H
