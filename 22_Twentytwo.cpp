// 22. Write a program defining a class matrix with data element as two dimensional matrix , row and col
// as integer. Define the member functions read() to read the value of matrices and show() to display the
// matrix objects. Overload the operator + to add two matrix objects and also overload the operator * to
// multiply the two matrix objects. Input the two matrices object and compute sum and product of
// matrices using the operators and show the result.

#include <iostream>
#include <vector>

using namespace std;

class Matrix {
    vector<vector<int>> data;
    int row, col;

public:
    Matrix(int r, int c) : row(r), col(c) {
        data.resize(row, vector<int>(col));
    }

    void read() {
        cout << "Enter the matrix elements (" << row << "x" << col << "):\n";
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                cin >> data[i][j];
            }
        }
    }

    void show() const {
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator+(const Matrix& other) const {
        if (row != other.row || col != other.col) {
            throw invalid_argument("Matrix dimensions must match for addition.");
        }
        Matrix result(row, col);
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    Matrix operator*(const Matrix& other) const {
        if (col != other.row) {
            throw invalid_argument("col1 != row2 error.");
        }
        Matrix result(row, other.col);
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < other.col; ++j) {
                result.data[i][j] = 0;
                for (int k = 0; k < col; ++k)
                    result.data[i][j] += data[i][k] * other.data[k][j];
            }
        }
        return result;
    }
};

int main() {
    int r1, c1, r2, c2;
    
    cout << "Enter rows and columns for the first matrix: ";
    cin >> r1 >> c1;
    Matrix mat1(r1, c1);
    mat1.read();

    cout << "Enter rows and columns for the second matrix: ";
    cin >> r2 >> c2;
    Matrix mat2(r2, c2);
    mat2.read();

    try {
        cout << "Matrix Addition:\n";
        Matrix sum = mat1 + mat2;
        sum.show();
        
        cout << "Matrix Multiplication:\n";
        Matrix product = mat1 * mat2;
        product.show();
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
