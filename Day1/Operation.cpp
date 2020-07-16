#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstdlib>
#include "ex02.hpp"

using namespace std;

int addition(int firstNumber, int secondNumber) {
    int sumOfTwoNumbers;
    sumOfTwoNumbers = firstNumber + secondNumber;
    std::cout << sumOfTwoNumbers<<'\n';
    return sumOfTwoNumbers;
}

int substraction(int firstNumber, int secondNumber) {
    int sumOfTwoNumbers;
    sumOfTwoNumbers = firstNumber - secondNumber;
    std::cout << sumOfTwoNumbers<<'\n';
    return sumOfTwoNumbers;
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cout << "NO CORRECT PARAMS ";
        return 1;
    } else {
        if(checkStrNumeric(argv[2])&&checkStrNumeric(argv[3])) {
            int firstNumber = atoi(argv[2]);
            int secondNumber = atoi(argv[3]);
            if (argv[1] == std::string("addition")) {

                addition(firstNumber, secondNumber);

            } else if (argv[1] == std::string("substraction")) {
                substraction(firstNumber, secondNumber);

            }
        }else{
            std::cout<<"NO GOOD NUMBERS";
        }

    }
}