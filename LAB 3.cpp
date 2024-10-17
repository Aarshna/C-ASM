
#include <iostream>
using namespace std;

int main() {
    long long sum = 0;
    int num, i = 0;

    while (i < 8) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        sum += num;
        i++;
    }

    cout << "Sum of the numbers: " << sum << endl;
    cout << "Average of the numbers: " << sum / 8.0 << endl;

    return 0;
}
