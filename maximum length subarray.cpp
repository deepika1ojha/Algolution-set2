#include <iostream>
using namespace std;

int lenOfLongSubarr(vector<int>& arr, int k) {
    int res = 0;

    for (int i = 0; i < arr.size(); i++) {
        int sum = 0;
        for (int j = i; j < arr.size(); j++) {
            sum += arr[j];
            if (sum == k) {
                res = max(res, j - i + 1);
            }
        }
    }

    return res;
}


    vector<int> arr = {5, 6, -5, 5, 3, 5, 3, -2, 0};
    int k = 8;
    cout << lenOfLongSubarr(arr, k);
    return 0;
}
