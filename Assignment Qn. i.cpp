#include<iostream>

using namespace std;

int main(){
    int n, i,j,k, x;

for( i = 65; i<=72; i++){

    for(x = 72; x>=i; x--){
        cout<<char(x);
    }/*
    for(j=i+1; j<9; j++){
        cout<<" ";
    }
    for(k =9-i; k>0; k--){
        cout<<" ";
    }
    for( n = i; n>=0; n--){

        cout<<n;
    }*/
    cout<<endl;
}



return 0;
}
