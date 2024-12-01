#include <iostream>
using namespace std;
int max_sum_of_subarray(int arr[], int n, int k)
{
    int max_sum = 0;
    for (int i = 0; i + k <= n; i++) {
        int temp = 0;
        for (int j = i; j < i + k; j++) {
            temp += arr[j];
        }
        if (temp > max_sum)
            max_sum = temp;
    }

    return max_sum;
}
int main()
{
    int arr[] = { 1, 4, 2, 10, 23, 1, 0, 3, 20 };
    int k = 4;
    int n = sizeof(arr) / sizeof(int);
    int max_sum;

    max_sum = max_sum_of_subarray(arr, n, k);
    cout << max_sum << endl;

    return 0;
}
