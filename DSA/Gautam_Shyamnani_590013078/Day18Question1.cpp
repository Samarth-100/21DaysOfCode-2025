#include <iostream>
#include <vector>
using namespace std;
void selectionSort(vector<int>& arr) {
    int n = arr.size();   
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i; 

       
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; 
            }
        }       
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}
int main() {
    vector<int> data = {29, 10, 14, 37, 13};

    cout << "Original array: ";
    printArray(data);

    selectionSort(data);

    cout << "Sorted array:   ";
    printArray(data);

    return 0;
}
