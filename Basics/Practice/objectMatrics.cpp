#include<iostream>
using namespace std;


class Square {
public:
    int side;
    int area() {
        return side * side;
    }
};

int main() {
    Square matrix[3][3];
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            matrix[i][j].side = i+j+1;
            cout << "Area of Square (" << i << "," << j << "): " << matrix[i][j].area() << endl;
        }
    }
    return 0;
}
