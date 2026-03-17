#include <iostream>
using namespace std;

int main() {

    float M1, M2, M3, M4, GRADE;

    // Step 1: Input marks
    cout << "Enter mark 1: ";
    cin >> M1;

    cout << "Enter mark 2: ";
    cin >> M2;

    cout << "Enter mark 3: ";
    cin >> M3;

    cout << "Enter mark 4: ";
    cin >> M4;

    // Step 2: Calculate average
    GRADE = (M1 + M2 + M3 + M4) / 4;

    // Step 3: Check pass or fail
    if (GRADE < 50)
    {
        cout << "FAIL";
    }
    else
    {
    	cout << "PASS";
    }

    return 0;
}
