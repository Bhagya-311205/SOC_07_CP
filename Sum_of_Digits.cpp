#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int num;
        cin >> num;
        int sum = 0;
        while(num != 0){
            sum = sum + (num % 10);
            num = num / 10;
        }
        cout << sum << endl;
    }
    return 0;
}