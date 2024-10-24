#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // solution comes here
    int n;
    int k;
    
    cin >> n;
    cin >> k;

    int counter =0;

    int numbers[n];
    
    while (counter < n) {
        cin >> numbers[counter];
        counter++;
    }

    int score = numbers[k-1];
    int result = 0;

    counter =0;
    while (counter < n) {
        if(numbers[counter]>=score && numbers[counter] > 0){
            result++;
        }
        counter++;
    }
    cout << result;
    return 0;
}