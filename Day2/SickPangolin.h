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

#ifndef CPLUSPLUS_SICKPANGOLIN_H
#define CPLUSPLUS_SICKPANGOLIN_H


class SickPangolin {
public:
    string _name;
    int _irritation;

    void poke() {
        std::cout << _name <<": Gnnaaap!!"<<"\n";
    }

    int irritation(int &_irritation) {
        _irritation=_irritation+1;
        return _irritation;
    }

    bool getTreat(string str) {
        if (str == "Morphine") {
            std::cout << _name <<": Ohh, I don't even feel something!"<<"\n";
            return true;
        } else if (str == "Blood") {
            std::cout << _name <<": Paang!! I lost too mustr blood!"<<"\n";
            return true;
        }
        std::cout<< _name <<": What's thaaat ?!"<<"\n";
        return false;
    }

    int getCrazy(string str) {
        irritation(_irritation);
        if (irritation(_irritation) >= 3) {
            int ln = str.length();

            for (int i = 0; i < ln; i++) {
                if (str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
                else if (str[i] >= 'A' && str[i] <= 'Z')
                    str[i] = str[i] + 32;
            }
            std::cout<< _name <<": "<<str<<'\n';
            return 0;
        }else{
            std::cout<< _name <<": Do you really want me to be upset?!"<<"\n";
            return 1;
        }
    }

};


#endif //CPLUSPLUS_SICKPANGOLIN_H
