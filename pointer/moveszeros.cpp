/*
Given an unsorted array of integers, you have to move the array elements in a way such that all the zeroes are transferred to the end, and all the non-zero elements are moved to the front. Use the concept of dynamic memory allocation for taking array input.

All non zero element will remain in same order as before.

For example, if the input array is: [0, 1, -2, 3, 4, 0, 5, -27, 9, 0], then the output array must be:

[1, -2, 3, 4, 5, -27, 9, 0, 0, 0].
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int *p = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (p[j] != 0)
            {
                int temp = p[i];
                p[i] = p[j];
                p[j] = temp;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
}
