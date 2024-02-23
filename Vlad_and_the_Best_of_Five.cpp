                                            A. Vlad and the Best of Five
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vladislav has a string of length 5
, whose characters are each either A
 or B
.

Which letter appears most frequently: A
 or B
?

Input
The first line of the input contains an integer t
 (1≤t≤32
) — the number of test cases.

The only line of each test case contains a string of length 5
 consisting of letters A
 and B
.

All t
 strings in a test are different (distinct).

Output
For each test case, output one letter (A
 or B
) denoting the character that appears most frequently in the string.




#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        string s;
        cin >> s;

        int count_A = 0, count_B = 0;
        for (char c : s) {
            if (c == 'A') {
                count_A++;
            } else {
                count_B++;
            }
        }

        if (count_A > count_B) {
            cout << 'A' << endl;
        } else {
            cout << 'B' << endl;
        }
    }

    return 0;
}
