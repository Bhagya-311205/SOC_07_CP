/* Given an array, find the next greater element for each element in the array. 
The next greater element for an element x is the first greater element on the 
right side of x in the array. Elements for which no greater element exists, the 
next greater element is considered to be -1.*/
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> nextGreaterElements(const vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, -1);
    stack<int> s;

    // Traverse the array from right to left
    for (int i = n - 1; i >= 0; --i) {
        // Maintain elements in decreasing order in the stack
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }

        // If stack is not empty, the top is the next greater element
        if (!s.empty()) {
            result[i] = s.top();
        }

        // Push the current element onto the stack
        s.push(arr[i]);
    }

    return result;
}

int main() {
    vector<int> arr = {4, 5, 2, 10, 8};
    vector<int> result = nextGreaterElements(arr);

    cout << "Next greater elements are: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}