//Sort a K Sorted Array | Sort Nearly Sorted Array

// Given an array of n elements, where each element is at most k away from its target position, 
// devise an algorithm that sorts in O(n log k) time. For example, let us consider k is 2, 
// an element at index 7 in the sorted array, can be at indexes 5, 6, 7, 8, 9 in the given array.

// Example:
// Input : arr[] = {6, 5, 3, 2, 8, 10, 9}
// k = 3 
// Output : arr[] = {2, 3, 5, 6, 8, 9, 10}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {6,5,3,2,8,10,9};
    int n = arr.size();
    int k = 3;

    priority_queue<int,vector<int>,greater<int>> minH;
    vector<int> ans;
    for(int i : arr)
    {
        minH.push(i);
        if(minH.size()>k)
        {
            ans.push_back(minH.top());
            minH.pop();
        }
    }
    while(!minH.empty()){
         ans.push_back(minH.top());
         minH.pop();
    }
    for(int i : ans)
        cout << i << " ";
}


