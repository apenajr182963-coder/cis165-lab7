#include <iostream>
using namespace std;

int main() {
    const int SENTINEL = -99;

    int number;
    int smallest;
    int largest;
    bool has_data = false;

    cout << "Enter integers (-99 to stop): ";
    cin >> number;

    while (number != SENTINEL) {
        if (!has_data) {
            
            smallest = number;
            largest = number;
            has_data = true;
        }
  else {
            
            if (number < smallest) {
                smallest = number;
            }

            if (number > largest) {
                largest = number;
            }
        }

        cin >> number;
    }

    if (!has_data) {
        cout << "No data values were entered." << endl;
    }
    else {
        cout << "Smallest value: " << smallest << endl;
        cout << "Largest value: " << largest << endl;
    }
  return 0;
}
