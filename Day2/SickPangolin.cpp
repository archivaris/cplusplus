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

#include "SickPangolin.h"
int main(int argc, char *argv[]) {
SickPangolin pangolin;
pangolin._name="Pangolin";
pangolin._irritation=0;
pangolin.poke();
pangolin.getTreat("Test");
pangolin.getTreat("Morphine");
pangolin.getTreat("Blood");
pangolin.getCrazy("HELLO!");
pangolin.getCrazy("BYE!");
pangolin.getCrazy("BYE!");
pangolin.getCrazy("BYE!");
}