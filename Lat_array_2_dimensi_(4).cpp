#include <iostream>
using namespace std;

int main(){
    //Membuat dan mengisi array 2 dimensi kosong
    int a[2][3] = {{5,10,15},{20,25,30}};//2 baris dan 3 kolom
   
    for (int i=0; i<=1; i++){
        for (int j=0; j<=2; j++){
            cout<<"Inputkan nilai index ke-["<<i<<"]["<<j<<"] : ";
            cin>>a[i][j];
        }
    }

    cout<<"\n";
    
    //Menampilkan array 2 dimensi
    for (int i=0; i<=1; i++){
        for (int j=0; j<=2; j++){
            cout<<"Nilai index ke-["<<i<<"]["<<j<<"] : "<<a[i][j]<<endl;
        }
    }
}