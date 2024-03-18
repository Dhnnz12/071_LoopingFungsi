#include <iostream>
using namespace std;

int main(){

    int i;
    int arr[5];
    
    for(i = 0; i <5; i++)
    {
        cout << i << " : " << "Hibrizi Fathin Dhonan" << endl;
    }

    for (i = 0; i < 5; i ++){
        cout << "Masukkan Nilai = ";
        cin >> arr[i];
    }

    for (i = 0; i < 5; i++){
        cout << "Element ke - " << i << " : " << arr[i] << endl;
    }
}