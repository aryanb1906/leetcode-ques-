#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
#include<cmath>
using namespace std;

int findMax(vector<int>& arr, int n) {
    if (n == 1) return arr[0];
    return max(arr[n - 1], findMax(arr, n - 1));
}

int findMin(vector<int>& arr, int n) {
    if (n == 1) return arr[0];
    return min(arr[n - 1], findMin(arr, n - 1));
}

int main(){
    vector<int> arr = {3, 1, 4, 1, 5, 9};
    int n = arr.size();
    int maxElement = findMax(arr, n);
    int minElement = findMin(arr, n);
    cout << "Max Element: " << maxElement << endl;
    cout << "Min Element: " << minElement << endl;
}