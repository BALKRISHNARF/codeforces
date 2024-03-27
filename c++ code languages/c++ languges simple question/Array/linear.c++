#include <iostream>
using namespace std;

int main() {
    int arr[100];
    for (int i = 0; i < 100; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;
    int ans = -1;
    for (int i = 0; i < 100; i++) {
        if (arr[i] == k) {
            ans = i;
            break; 
        }
    }
    cout << ans;
    return 0;
}
