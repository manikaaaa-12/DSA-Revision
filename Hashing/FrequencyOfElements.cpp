#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    int arr[] = {2, 5, 2, 3, 5, 2};
    int n = 6;

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (auto it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}