//   ****** K'th Smallest Element ******

// Given an array and a number k where k is smaller than size of array, 
// we need to find the k’th smallest element in the given array. 
// It is given that all array elements are distinct.

// Example:
// Input: arr[] = {7, 10, 4, 3, 20, 15}
// k = 3
// Output: 7


#include<bits/stdc++.h>
using namespace std;

int kthSmallestEle(vector<int>& arr, int k)
{
    priority_queue<int> maxH;
    for(int i : arr)
    {
        maxH.push(i);
        if(maxH.size()>k)
            maxH.pop();
    }
    return maxH.top();

}

int main()
{
    vector<int> arr = {7, 10, 4, 3, 20, 15};
    int k = 3;
    cout << kthSmallestEle(arr,k);
}

