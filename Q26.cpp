/*
1. Containers (Data Structures)

Provides classes and member functions (.push_back(), .insert(), .find(), .size()) to store and manage data:
• Sequence Containers (<vector>, <deque>, <list>, <array>): Dynamic arrays, double-ended queues, and linked lists.
• Associative Containers (<set>, <map>, <multiset>, <multimap>): Sorted, tree-based sets and key-value dictionaries.
• Unordered Containers (<unordered_set>, <unordered_map>): Hash-table implementations for O(1) average lookups.
• Container Adaptors (<stack>, <queue>, <priority_queue>): LIFO stacks, FIFO queues, and heaps.

2. Algorithms & Iterators (<algorithm>, <numeric>, <iterator>)

Provides ready-to-use functions that operate on ranges of data:
• Sorting & Searching: sort(), stable_sort(), binary_search(), lower_bound(), upper_bound().
• Modifying Sequences: reverse(), rotate(), unique(), fill(), swap(), next_permutation().
• Querying & Math: min(), max(), minmax_element(), count(), find(), accumulate(), gcd(), lcm().

3. Input & Output (<iostream>, <cstdio>, <iomanip>, <fstream>)

Handles reading from and writing to the console or files:
• C++ Streams: cin, cout, cerr, getline(), setprecision(), fixed.
• C-Style Fast I/O: scanf(), printf(), getchar(), puts().
• File Streams: ifstream, ofstream, fstream.

4. Strings & Character Handling (<string>, <cstring>, <cctype>, <sstream>)

Provides text manipulation and parsing tools:
• C++ Strings: substr(), find(), replace(), to_string(), stoi(), stoll().
• C-Strings & Memory: strlen(), strcmp(), strcpy(), memset(), memcpy().
• Character Checks: isalpha(), isdigit(), tolower(), toupper().
• String Streams: stringstream for splitting strings into words or numbers.

5. Mathematics & Random Numbers (<cmath>, <cstdlib>, <random>, <complex>)

• Basic & Trig Math: abs(), sqrt(), pow(), cbrt(), sin(), cos(), tan(), log(), log2(), exp().
• Rounding: ceil(), floor(), round().
• Randomness: rand(), srand(), mt19937 (Mersenne Twister generator).

6. Utilities, Pairs & Tuples (<utility>, <tuple>, <bitset>, <functional>)

• Data Grouping: pair, make_pair(), tuple, make_tuple(), tie().
• Bit Manipulation: bitset (.count(), .set(), .flip(), .to_ulong()).
• Function Objects: greater<>(), less<>(), function.

7. Time, Limits & Diagnostics (<chrono>, <climits>, <cfloat>, <cassert>)

• Constants: INT_MAX, INT_MIN, LLONG_MAX, DBL_MAX.
• Debugging & Timing: assert(), chrono::high_resolution_clock.

What It Does Not Include

A few specialized or system-level headers are intentionally left out to avoid bloat or platform conflicts, including:
• Concurrency/Multithreading (in some older configurations, though modern GCC includes <thread> and <mutex>).
• Low-level C headers like <cuchar> or platform-specific OS headers (such as <windows.h> or <unistd.h>).
If you're learning C++ for competitive programming, interviews, or a specific project, let me know which topic you're focusing on (like STL containers, sorting/searching, or fast I/O) and I can give you a focused cheat sheet with code examples.

*/

#include<bits/stdc++.h>
using namespace std;

void linear(vector<int>&nums,int key){
    for(int i = 0; i < nums.size();i++){
        if(nums[i] == key){
            cout<<"Element found at index : "<<i;
            return;
        }
    }
    cout<<"Element not found";
}
int main(){
    int n,key;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0; i < n;i++){
        cin>>nums[i];
    }
    cout<<"Enter Element Your need to search : ";
    cin>>key;
    linear(nums,key);
    return 0;
}
