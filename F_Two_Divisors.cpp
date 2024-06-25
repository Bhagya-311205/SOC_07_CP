#include<iostream>
#include<algorithm>
using namespace std;

void problem( long long int a, long long int b){
    long long int g = __gcd(a, b);
    if( (a*b)/g == b ){
        if(a == 1){
            cout << b*b << endl;
        }
        for(int k = 2; k*k <= b; k++){
            if (b % k == 0){
                cout << b*k << endl;
                return;
            }
        }
            }
        else{
            cout << (a*b)/g << endl;
        }
}

int main(){
    int t;
    cin >> t;

    long long int first[t] , second[t];
    for(int i = 0; i < t; i++){
        cin >> first[i] >> second[i];
    }

    for(int j = 0; j < t; j++){
        problem(first[j], second[j]);
    }
    return 0;
}