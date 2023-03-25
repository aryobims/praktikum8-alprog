#include <iostream>
using namespace std;

int main(){
    //membuat dan memberi nilai array 3 dimensi 
    int a[2][3][4] = {{{1,2,3,4},{5,6,7,8},{9,10,11,12}},
                      {{13,14,15,16},{17,18,19,20},{21,22,23,24}}};
                      
    //mencetak salah satu isi array 
    cout<<"Nilai index ke-[1][2][3] : "<<a[1][2][3]<<endl;
}