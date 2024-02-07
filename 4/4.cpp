
#include <iostream>
using namespace std;

int main()
{
    
    
    int matrix1[3][3];
    int matrix2[3][3];
    int matrixResult[3][3];
    cout << "Please insert the elements in your first matrix. (3x3) \n Each elements must be on separate line." << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    cout << "Please insert the elements in your second matrix. (3x3) \n Each elements must be on separate line." << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrixResult[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    cout << "A + B = " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrixResult[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;



}

