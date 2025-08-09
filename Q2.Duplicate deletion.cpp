#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[100];

    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++)
        cin >> arr[i];

    // Removing duplicates with nested loop
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; ) {
            if(arr[i] == arr[j]) {
                // Shift elements left
                for(int k = j; k < size - 1; k++)
                    arr[k] = arr[k + 1];
                size--;  // DEcrease the size after deletion
            } else {
                j++;  // Only increment if no deletion done
            }
        }
    }

    // Print updated array
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}


