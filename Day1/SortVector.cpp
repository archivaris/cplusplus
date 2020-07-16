#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstdlib>
#include <algorithm>
#include <iterator>


using namespace std;



int main(int argc, char *argv[]) {
    vector<int> myVector;

    int size = argc - 1;
    int *data = (int *) calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        sscanf(argv[i + 1], "%d", &data[i]);
        myVector.push_back(data[i]);
    }
    cout << "elements in Vector = ";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout<<'\n';

    sort(myVector.begin(), myVector.end());

    cout << "Sorted \n";
    for (auto x : myVector)
        cout << x << " ";

    return 0;
    return 0;

}