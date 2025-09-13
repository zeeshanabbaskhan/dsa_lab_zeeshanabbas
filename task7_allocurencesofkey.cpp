#include <iostream>
#include <vector>
using namespace std;

vector<int> findAllIndices(const vector<int>& arr, int key) {
    vector<int> indices;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    vector<int> arr = {1, 3, 5, 3, 7, 3};
    int key = 3;

    vector<int> result = findAllIndices(arr, key);
    
    if (result.empty()) {
        cout << "Key not present." << endl;
    } else {
        cout << "Indices of key " << key << ": ";
        for (int idx : result) {
            cout << idx << " ";
        }
        cout << endl;
    }

    // Test cases
    vector<int> emptyArr;
    vector<int> result2 = findAllIndices(emptyArr, 5); // Empty array
    cout << "Empty array test, size of result: " << result2.size() << endl;

    vector<int> arr2 = {1, 2, 3};
    vector<int> result3 = findAllIndices(arr2, 10); // Key not present
    cout << "Key not present test, size of result: " << result3.size() << endl;

    return 0;
}
