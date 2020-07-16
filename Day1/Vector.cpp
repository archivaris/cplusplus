#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstdlib>
#include <algorithm>
#include <iterator>


using namespace std;

int Findlarge(vector<int> myVector) {
    int max = myVector[0];

    for (int i = 1; i < myVector.size(); i++)
        if (myVector[i] > max)
            max = myVector[i];
    return max;
}

int main(int argc, char *argv[]) {
    vector<int> myVector;

    int size = argc - 1;
    int *data = (int *) calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        sscanf(argv[i + 1], "%d", &data[i]);
        myVector.push_back(data[i]);
    }
    cout << endl << endl << endl << endl;

    cout << "elements in Vector = ";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;


    cout << "Largest element given vector is = " << Findlarge(myVector) << endl;
    return 0;

}