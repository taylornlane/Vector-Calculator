/* main.cpp
// Taylor Lane
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

template <typename T>
ostream& operator<<(ostream& os, const vector<T>& vector) {
    for (int k = 0; k < 3; k++) {
        os << vector[k] << " ";
    }
    os << endl;
    return os;
};

int main() {
    cout << "Enter vector 1 coordinates in the form (x, y, z): " << endl;
    vector<double> vector1;
    double i;
    while (cin >> i && vector1.size() < 3) {
        vector1.push_back(i);
    }
    int size = vector1.size();
    if (size != 3) {
        cout << "Incorrect vector size, please try again!" << endl;
        return 1;
    }
    cout << vector1;
    return 0;
}
*/