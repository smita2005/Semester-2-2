
#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " numbers in sorted order: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the key to search: ";
    cin >> key;

    int low = 0, high = n - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            cout << "Key " << key << " found at position " << mid + 1 << endl;
            return 0;
        }
        else if (arr[mid] < key) {
            low = mid + 1;  // search in right half
        }
        else {
            high = mid - 1; // search in left half
        }
    }

    cout << "Key " << key << " not found." << endl;
    return 0;
}




or ,



  #include <iostream>
using namespace std;

int main() {
    int n, item;

    // Taking array size input
    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];
    
    // Taking array elements input (must be sorted)
    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Taking item input
    cout << "Enter item to search: ";
    cin >> item;

    // Binary search
    int left = 0, right = n - 1, middle;
    bool found = false;

    while (left <= right) {
        middle = (left + right) / 2;

        if (a[middle] == item) {
            cout << "Item found at index: " << middle << endl;
            found = true;
            break;
        } 
        else if (a[middle] < item) {
            left = middle + 1;
        } 
        else {
            right = middle - 1;
        }
    }

    if (!found)
        cout << "Item not found" << endl;

    return 0;
}
