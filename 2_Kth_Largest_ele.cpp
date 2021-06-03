//   ******  Kth Largest Element ******

// rite an efficient program for printing k largest elements in an array. 
// Elements in array can be in any order.

// For example, if given array is [1, 23, 12, 9, 30, 2, 50] and you are asked for the largest 3 elements 
// i.e., k = 3 then your program should print 50, 30 and 23.

#include<bits/stdc++.h>
using namespace std;

int kthLargestEle(vector<int>& arr, int k)
{
    priority_queue<int,vector<int>, greater<int>> minH;
    for(int i : arr)
    {
        minH.push(i);
        if(minH.size()>k)
            minH.pop();
    }
    return minH.top();
}
int main()
{
    vector<int> arr = {7, 10, 4, 3, 20, 15};
    int k = 3;
    cout << kthLargestEle(arr,k);
}
