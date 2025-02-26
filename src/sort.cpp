#include <iostream>
#include <vector>
#include <algorithm>

void selection_sort(std::vector<int>&arr){
    int n = arr.size();
    for (int i = 0; i < n - 1 ;i++){
        int min_index = i;
        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        if (min_index != i){
            std::swap(arr[min_index], arr[i]);
        }
    }
}

int main(void){
    std::vector<int> arr = {64, 25, 12, 22, 11};
    selection_sort(arr);
    for (int i = 0; i < arr.size(); i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

