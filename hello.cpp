#include <iostream>
#include <vector>
using namespace std;

#define     x_res   128
#define     y_res   128

struct vec2F {
    float x;
    float y;
};

vector<vector<int>> pixelMatrix(y_res, vector<int>(x_res, 0));


void printDisplayMatrix() {
    for (int i = 0; i < y_res; i++) {
        for (int k = 0; k < x_res; ++k) {
            cout << pixelMatrix[i][k] << "";
        }
        cout << endl; // New line at the end of each row
    }
}

int main(int argc, char const *argv[]) {
    printDisplayMatrix();
    return 0;
}
