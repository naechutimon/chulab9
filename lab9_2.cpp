#include <iostream>
using namespace std ;

void printO(int N ,int M){
    if (N<=0 || M<=0){
        cout<< "Invalid input";
        return;
    }
    
    for (int a=0 ; a<N ; a++){
    for (int b=0 ; b<M ; b++){

        cout<<"O";
    }
        cout<<"\n";
    }
}