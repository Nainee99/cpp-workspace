#include <iostream>

class Algebra {
private:
    int a;
    int b;

public:
    // Default constructor
    Algebra() {
        a = 0;
        b = 0;
    }

    // Parameterized constructor
    Algebra(int valueA, int valueB) {
        a = validatePositive(valueA);
        b = validatePositive(valueB);
    }

    // Copy constructor
    Algebra(const Algebra& other) {
        a = other.a;
        b = other.b;
    }

    // Setter functions for each data member
    void setA(int valueA) {
        a = validatePositive(valueA);
    }

    void setB(int valueB) {
        b = validatePositive(valueB);
    }

    // Output Data member function to display the data of an object
    void outputData() {
        std::cout << "a: " << a << ", b: " << b << std::endl;
    }

    // Overload arithmetic assignment operator (+)
    Algebra& operator+(const Algebra& other) {
        a += other.a;
        b += other.b;
        return *this;
    }

    // Overload stream extraction operator
    friend std::istream& operator>>(std::istream& is, Algebra& obj) {
        std::cout << "Enter value for a: ";
        is >> obj.a;

        std::cout << "Enter value for b: ";
        is >> obj.b;

        obj.a = obj.validatePositive(obj.a);
        obj.b = obj.validatePositive(obj.b);

        return is;
    }

    // Overload arithmetic minus (-) operator
    Algebra operator-(const Algebra& other) {
        Algebra result;
        result.a = a - other.a;
        result.b = b - other.b;
        return result;
    }

    // Overload unary plus (+) operator
    bool operator+() {
        return (a > 0 || b > 0);
    }

    // Member function to count equal objects
    static int countEqualObjects(Algebra arr[], int size, const Algebra& obj) {
        int count = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i].a == obj.a && arr[i].b == obj.b) {
                count++;
            }
        }
        return count;
    }

private:
    // Validate positive value
    int validatePositive(int value) {
        return (value >= 0) ? value : 0;
    }
};
#include <iostream>

int main() {
    // Create an object using default constructor
    Algebra obj1;
    std::cout << "Object 1: ";
    obj1.outputData();

    // Create an object using parameterized constructor
    Algebra obj2(5, -3);
    std::cout << "Object 2: ";
    obj2.outputData();

    // Use setter functions to change data members
    obj1.setA(7);
    obj1.setB(2);
    std::cout << "Object 1 after changes: ";
    obj1.outputData();

    // Use stream extraction operator to input data
    std::cout << "Enter values for Object 2: ";
    std::cin >> obj2;
    std::cout << "Object 2 after input: ";
    obj2.outputData();

    // Use arithmetic assignment operator to add objects
    obj1 + obj2;
    std::cout << "Object 1 + Object 2: ";
    obj1.outputData();

    // Use arithmetic minus operator to subtract objects
    Algebra obj3 = obj1 - obj2;
    std::cout << "Object 1 - Object 2: ";
    obj3.outputData();

    // Use unary plus operator to check if object has positive values
    std::cout << "Object 3 has positive values: " << +obj3 << std::endl;

    // Create an array of objects and count equal objects
    Algebra arr[5] = { Algebra(2, 3), Algebra(7, 8), Algebra(2, 3), Algebra(1, 1), Algebra(7, 8) };
    Algebra obj4(2, 3);
    int count = Algebra::countEqualObjects(arr, 5, obj4);
    std::cout << "Number of equal objects to Object 4: " << count << std::endl;

    return 0;
}
