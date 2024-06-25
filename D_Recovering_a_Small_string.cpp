#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int data[n];
    for(int j = 0; j < n; j++){
        cin >> data[j];
    }
    for (int i = 0; i < n; i++){
        int x = data[i];
        char a = 'a';

        if(x == 78){
            cout << "zzz" << endl;
        }
        else if(x > 52 && x < 78){
            a = a + (x-52-1);
            cout << a << "zz" << endl;
        }
        else if(x > 27 && x < 53){
            a = a + (x-27-1);
            cout << "a" << a << "z" << endl;
        }
        else{
            a = a + (x-2-1);
            cout << "aa" << a << endl;
        }
    }
    return 0;
}