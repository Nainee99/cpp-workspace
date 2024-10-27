#include <iostream>

class Matrix {
private:
    int noOfRows;        // Total number of rows
    int noOfColumns;     // Total number of columns
    int** data;          // Matrix data

public:
     Matrix()
     {

     }
    // Constructor
    Matrix(int noOfRows, int noOfColumns) {
        if (noOfRows > 0 && noOfColumns > 0) {
            this->noOfRows = noOfRows;
            this->noOfColumns = noOfColumns;

            // Allocate memory for rows
            data = new int*[noOfRows];

            // Allocate memory for each column in a row
            for (int i = 0; i < noOfRows; i++) {
                data[i] = new int[noOfColumns];
            }
        }
        else {
            this->noOfRows = 0;
            this->noOfColumns = 0;
            data = nullptr;
        }
    }

    // Display all records present in data
    void displayData() {
        if (data == nullptr) {
            std::cout << "No data to display." << std::endl;
            return;
        }

        for (int i = 0; i < noOfRows; i++) {
            for (int j = 0; j < noOfColumns; j++) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    // Destructor
    ~Matrix() {
        // Deallocate memory for each row
        for (int i = 0; i < noOfRows; i++) {
            delete[] data[i];
        }

        // Deallocate memory for rows
        delete[] data;
    }

    // Copy constructor
    Matrix(const Matrix& ref) {
        noOfRows = ref.noOfRows;
        noOfColumns = ref.noOfColumns;

        // Allocate memory for rows
        data = new int*[noOfRows];

        // Copy data from ref to the new matrix
        for (int i = 0; i < noOfRows; i++) {
            data[i] = new int[noOfColumns];
            for (int j = 0; j < noOfColumns; j++) {
                data[i][j] = ref.data[i][j];
            }
        }
    }
};

int main() {
    Matrix matrix1(2, 2);
    matrix1.displayData();

    Matrix matrix2(3, 3);
    matrix2.displayData();

    Matrix matrix3 = matrix2;
    matrix3.displayData();

    return 0;
}
