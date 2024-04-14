//to store transpose in other array
#include <iostream>
#include <climits>  // Not strictly necessary in this code

using namespace std;

int main() {
    int m, n;

    cout << "enter no of rows: ";
    cin >> m;

    cout << "enter no of col: ";
    cin >> n;

    int arr[m][n]; // Declare the array with correct dimensions

    // Input elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Print elements in row-major order (original order)
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;  // Extra newline for better readability

    // Print elements in column-major order (transpose)
    int t[n][m];
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            t[j][i]=arr[i][j];
        }
        cout << endl;
    }
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            cout<<t[j][i]<<" ";
        }
        cout << endl;
    }
    

    return 0;
}
