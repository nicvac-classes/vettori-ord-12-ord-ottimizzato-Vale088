#include <iostream>
using namespace std;

int main() {
    int N,i,j;
    cout<<"Quante cifre vuoi inserire?"<<endl;
    cin>>N;
    while(N<=0) {
        cout<<"inserire un valore maggiore di 0"<<endl;
        cin>>N;
        cout<<i+1<<"Numero:"<<R[i]<<endl;

    }   
    int R[N];
    i=0;
    while(i<N) {
        R[i]=random(n*10);
        i=i+1;
    } 
    bool scambio;
    scambio=true;
    i=0;
    while(i<=N-1 and scambio ) {
        scambio=false;
        j=0;
        while(j<=(n-2)-i) {
            if(R[j]>R[j+1]) {
                t=R[i]
                R[j]=R[j+1];
                R[j+1]=t;


            } 
            j=j+1;
        }  
        i=i+1; 


    } 
    i=0;
    while(i<N) {
        cout<<"R[i]"<<endl;
        i=i+1;
    } 
     }
//LEGGERE LE ISTRUZIONI NEL FILE README.md
