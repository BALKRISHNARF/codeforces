//we pirnt transpose 
#include <iostream>
#include <climits>  // Not strictly necessary in this code

using namespace std;

int main() {
    int m;
    cout << "enter no of rows/col: ";
    cin >> m;
    int arr[m][m]; // Declare the array with correct dimensions

    // Input elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    // Print elements in row-major order (original order)
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;  // Extra newline for better readability

    // Print elements in column-major order (transpose)
        for (int i = 0; i < m; i++) {
                for (int j = i; j < m; j++) {
            if(i==j)arr[i][j]=arr[j][i];
            if(i!=j){
                int temp = arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }
     for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
