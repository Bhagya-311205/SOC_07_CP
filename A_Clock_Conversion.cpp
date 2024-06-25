#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string data[n];
    for(int j = 0; j < n; j++){
        cin >> data[j];
    }
    for(int i = 0; i < n; i++){
            string time = data[i];

            int hour = stoi(time.substr(0,2));

            if(hour == 0){
                cout << "12:" << time.substr(3,2) << " AM" << endl;
            }
            else if (hour == 12){
                cout << hour << ":" << time.substr(3,2) << " PM" << endl;
            }
            else if (hour >= 22){
                cout << hour-12 << ":" << time.substr(3,2) << " PM" << endl;
            }
            else if (hour > 12 && hour < 22){
                cout << "0" << hour-12 << ":" << time.substr(3,2) << " PM" << endl;
            }
            else{
                cout << time << " AM" << endl;
            }
            
    }
    return 0;
}