#include <iostream>
using namespace std;

int findEquilibrium(int arr[], int n) {
    int totalSum, leftSum;
    totalSum = 0;
    leftSum = 0;

    for(int i=0; i<n; i++){
        totalSum += arr[i];
    }
    for(int i=0; i<n; i++){
        int rightSum = totalSum - leftSum - arr[i];
        if(leftSum == rightSum){
            return i+1;
        }
        leftSum += arr[i];
    }
    return -1;
}
int main() {
    int n = 5;
    int arr[] = {1, 3, 5, 7, 3};
    std::cout << findEquilibrium(arr, n) << std::endl;
    return 0;
}