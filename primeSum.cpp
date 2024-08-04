#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int calculatePrimeSum(int m, int n){
    int sum = 0;

    for(int i=m; i<=n; i++){
        if(isPrime(i)){
            sum += i;
        }
    }
    return sum;
}

int main(){
    int m = 10, n = 50;
    cout << calculatePrimeSum(m,n);

    return 0;
}