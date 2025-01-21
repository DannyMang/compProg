//2. Given a list of integers L of size up to 1M items, determine whether a value v exists in L by
//not using more than 20 comparisons? (More details in Section 2.2.1).

#include <string>
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

//assume list is sorted
bool binarySearch(vector<int> list, int target){

    if (list.empty()) return false;
    
    int left = 0;
    int right = list.size() - 1;
    while (left < right){
        int mid = left + (right-left)/2;
        if (list[mid] == target) {  // Add this check inside loop
            return true;
        }
        if (list[mid] > target){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    return list[left] == target;
}
void testBinarySearch() {
    vector<int> list = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    
    // Test case 1: Target exists in the list
    cout << "Test case 1: Target exists in the list" << endl;
    assert(binarySearch(list, 7) == true);
    
    // Test case 2: Target does not exist in the list
    cout << "Test case 2: Target does not exist in the list" << endl;
    assert(binarySearch(list, 8) == false);
    
    // Test case 3: Target is the first element
    cout << "Test case 3: Target is the first element" << endl;
    assert(binarySearch(list, 1) == true);
    
    // Test case 4: Target is the last element
    cout << "Test case 4: Target is the last element" << endl;
    assert(binarySearch(list, 19) == true);
    
    // Test case 5: Empty list
    cout << "Test case 5: Empty list" << endl;
    vector<int> emptyList = {};
    assert(binarySearch(emptyList, 5) == false);
    
    // Test case 6: Single element list, target exists
    cout << "Test case 6: Single element list, target exists" << endl;
    vector<int> singleElementList = {5};
    assert(binarySearch(singleElementList, 5) == true);
    
    // Test case 7: Single element list, target does not exist
    cout << "Test case 7: Single element list, target does not exist" << endl;
    assert(binarySearch(singleElementList, 3) == false);
    
    cout << "All test cases passed!" << endl;
}

int main() {
    testBinarySearch();
    return 0;
}


