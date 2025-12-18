#include<iostream>
using namespace std;

int main() {
    int matrix1[2][2], matrix2[2][2], sum[2][2];

    // Input for first matrix
    cout << "Enter elements of first 2x2 matrix:" << endl;
    for(int i = 0; i < 2; i++) 
    {
        for(int j = 0; j < 2; j++) 
        {
            cin >> matrix1[i][j];
        }
    }

    // Input for second matrix
    cout << "Enter elements of second 2x2 matrix:" << endl;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++) 
        {
            cin >> matrix2[i][j];
        }
    }

    // Perform matrix addition
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++) 
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the result
    cout << "Sum of the two matrices:" << endl;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++) 
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
