
#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

void output_file(char filename[]) {
    ifstream in;
    char temp;

    in.open(filename);
    if (!in.good()) {
        cout << " Couldn't open file \"" << filename << "\"."
             << endl;
        exit(1);
    }

    while (in.get(temp)) {
        cout << temp;
    }

    in.close();
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        return 1;
    }
    for (int i = 1; i < argc; i++) {
        output_file(argv[i]);
    }
    return 0;
}
