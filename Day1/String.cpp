
#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;


int main(int argc, char **argv) {
    std::vector <std::string> all_arg;
    if (argc > 1) {
        all_arg.assign(argv + 1, argv + argc);
    }

    if ((all_arg[argc - 2].back() == 'Z' || all_arg[argc - 2].back() == 'z') &&
        (all_arg[0].front() == 'A' || all_arg[0].front() == 'a')) {
        std::cout << "Valid string:" << "\n";
        for(auto const& value: all_arg)
        {
            std::cout << value << " ";
        }
        std::cout << "\n";
        return 0;
    } else {
        std::cout << "Error: invalid string" << '\n';
        return 1;
    }
}