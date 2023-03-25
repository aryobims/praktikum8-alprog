#include <iostream>
using namespace std;

int main(){
    int a[2][3]; //Membuat ordo matriks 2x3
    int b[2][3]; //Membuat ordo matriks 2x3
   
   //mengisi nilai matrik A
    cout<<"Inputkan nilai matrik A"<<endl;
    for (int i=0; i<=1; i++){
        for (int j=0; j<=2; j++){
            cout<<"Inputkan nilai index ke-["<<i<<"]["<<j<<"] : ";
            cin>>a[i][j];
        }
    }
    
    cout<<endl;
    
    //Mengisi nilai matrik B
    cout<<"Inputkan nilai matrik B"<<endl;
    for (int i=0; i<=1; i++){
        for (int j=0; j<=2; j++){
            cout<<"Inputkan nilai index ke-["<<i<<"]["<<j<<"] : ";
            cin>>b[i][j];
        }
    }

    cout<<endl;
    cout<<endl;
    
    //Menampilkan matrik A
    cout<<"\nNilai matrik A";
    for (int i=0; i<=1; i++){
        cout<<endl;
        for (int j=0; j<=2; j++){
            cout<<a[i][j]<<"    ";
        }
    }
    
    cout<<endl;
    
    //Menampilkan matrik B
    cout<<"\nNilai matrik B";
    for (int i=0; i<=1; i++){
        cout<<endl;
        for (int j=0; j<=2; j++){
            cout<<b[i][j]<<"    ";
        }
    }
    
    cout<<endl;
    
    //Menjumlahkan matrik A dan B
    cout<<"\nHasil penjumlahan matrik A+B adalah";
    for (int i=0; i<=1; i++){
        cout<<endl;
        for (int j=0; j<=2; j++){
            cout<<a[i][j]+b[i][j]<<"    ";
        }
    }
}