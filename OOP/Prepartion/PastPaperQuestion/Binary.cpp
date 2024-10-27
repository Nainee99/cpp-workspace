 #include<iostream>
using namespace std;

class Binary {
private:
    int a;
    int b;

    int validateNo(int x) {
        if (x == 0 || x == 1) {
            return x;
        } else {
            return 0;
        }
    }

public:
    // Default constructor
    Binary() {
        a = 0;
        b = 0;
    }

    // Parameterized constructor
    Binary(int valueA, int valueB) {
        a = validateNo(valueA);
        b = validateNo(valueB);
    }

    // Copy constructor
    Binary(Binary& other) {
        a = other.a;
        b = other.b;
    }

    // Overload insertion operator (<<)
    friend ostream& operator<<(ostream& os, Binary& obj) {
        os << "a: " << obj.a << ", b: " << obj.b << endl;
        return os;
    }

    // Overload addition operator (+)
    Binary operator+(Binary& other) {
        Binary result;
        result.a = a + other.a;
        result.b = b + other.b;
        return result;
    }

    // Setter functions for each data member
    void setA(int valueA) {
        a = validateNo(valueA);
    }

    void setB(int valueB) {
        b = validateNo(valueB);
    }

    // Getter function for both data members
    void getValue() {
        cout << "Enter the value of a (0 or 1): ";
        cin >> a;
        a = validateNo(a);

        cout << "Enter the value of b (0 or 1): ";
        cin >> b;
        b = validateNo(b);
    }

    // Overload unary not operator (!)
    bool operator!() {
        return (a == 0 && b == 0);
    }

    // Static member function to get the index of an equal object in an array
    static int getEqualIndex(Binary arr[], int size, Binary& index) {
        for (int i = 0; i < size; i++) {
            if (arr[i].a == index.a && arr[i].b == index.b) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Binary b1(1, 0);
    Binary b2(0, 1);

    Binary b3 = b1 + b2;
    cout << b3 << endl;

    b1.setA(0);
    cout << b1 << endl;

    b2.setB(0);
    cout << b2 << endl;

    cout << !b3 << endl;

    Binary b4;
    b4.getValue();
    cout << b4 << endl;

    Binary arr[3] = { b1, b2, b3 };
    Binary b5(1, 0);

    int index = Binary::getEqualIndex(arr, 3, b5);
    if (index != -1) {
        cout << "Equal object found at index " << index << endl;
    } else {
        cout << "Equal object not found" << endl;
    }

    return 0;
}
