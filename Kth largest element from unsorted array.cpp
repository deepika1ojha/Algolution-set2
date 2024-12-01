#include <iostream>
using namespace std;
#include <vector>
#include <algorithm> // For sort()

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    if (k <= 0 || k > n) {
        cout << "Invalid value of k.\n";
        return 0;
    }

    sort(nums.begin(), nums.end(), greater<int>());

    cout << "The " << k << "-th largest element is: " << nums[k - 1] << std::endl;

    return 0;
}
