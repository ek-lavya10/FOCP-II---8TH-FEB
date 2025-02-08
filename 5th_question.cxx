#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "write the size of matrix: ";
    cin >> n;

    int arr[n][n];

    cout << "enter elements of matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "matrix rotated clockwise:" << endl;
    for (int j = 0; j < n; j++) {
        for (int i = n - 1; i >= 0; i--) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}