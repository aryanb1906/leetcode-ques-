#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& arr, int low, int high, int target) {
    if (low > high) return -1;  

    int mid = low + (high - low) / 2;

    if (arr[mid] == target)
        return mid; 
    else if (arr[mid] < target)
        return binarySearch(arr, mid + 1, high, target);  
    else
        return binarySearch(arr, low, mid - 1, target);   
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 5;

    int result = binarySearch(arr, 0, arr.size() - 1, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
}
