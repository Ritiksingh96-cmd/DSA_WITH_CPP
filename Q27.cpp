/*/* ============================================================================
 * C++ STL QUICK REFERENCE: <vector> & <algorithm>
 * ============================================================================
 * 1. <vector> -> Dynamic array that resizes automatically when elements are
 *    added or removed.
 *
 *    Common vector member functions:
 *    - v.push_back(val)      : Appends 'val' to the end of the vector.
 *    - v.pop_back()          : Removes the last element (does not return it).
 *    - v.size()              : Returns current number of elements (size_t).
 *    - v.empty()             : Returns true if vector has 0 elements.
 *    - v.clear()             : Removes all elements; size becomes 0.
 *    - v.front() / v.back()  : Accesses the first / last element.
 *    - v[i] / v.at(i)        : Accesses element at index i; at() throws
 *                              out_of_range if index is invalid.
 *    - v.insert(pos, val)    : Inserts 'val' at iterator 'pos' (O(n)).
 *    - v.erase(pos)          : Removes element at iterator 'pos' (O(n)).
 *    - v.begin() / v.end()   : Iterators to first element and past-the-end.
 *
 * 2. <algorithm> -> Built-in functions operating on iterator ranges
 *    [first, last), typically v.begin() to v.end().
 *
 *    Common algorithm functions:
 *    - sort(v.begin(), v.end())               : Sorts ascending in O(n log n).
 *    - sort(v.begin(), v.end(), greater<int>()) : Sorts descending.
 *    - reverse(v.begin(), v.end())            : Reverses elements in-place.
 *    - find(v.begin(), v.end(), val)          : Linear search; returns iterator
 *                                               to 'val' or v.end() if absent.
 *    - binary_search(v.begin(), v.end(), val) : Returns bool; REQUIRES a
 *                                               sorted range (O(log n)).
 *    - lower_bound(v.begin(), v.end(), val)   : Iterator to first element >=
 *                                               'val' (requires sorted range).
 *    - upper_bound(v.begin(), v.end(), val)   : Iterator to first element >
 *                                               'val' (requires sorted range).
 *    - max_element(v.begin(), v.end())        : Iterator to largest element
 *                                               (dereference with * to get value).
 *    - min_element(v.begin(), v.end())        : Iterator to smallest element
 *                                               (dereference with * to get value).
 *    - count(v.begin(), v.end(), val)         : Counts occurrences of 'val'.
 * ============================================================================ */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(vector<int>&arr,int key){
    int low = 0;
    int high = arr.size() - 1;
    int mid = low + (high-low) /2;
    while(low <= high){
        int mid = low + (high-low) /2;

        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] < key){
            low = mid + 1;

        }
        else{
            high = mid - 1;
        }
        return -1;
    }
    
}
int main(){
    vector<int> arr = {4,5,2,3,65,43,53,35};
    sort(arr.begin(),arr.end());
    int key = 5;
    int result = binarySearch(arr,key);
    if(result == -1){
        cout<<"Elemet not found";
    }
    else{
        cout<<"Element found at index"<<result;
    }
}