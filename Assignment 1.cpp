#include<iostream>

using namespace std;

//trial comment

int main(){
    int n, i,j,k, x;

for( i = 0; i<=9; i++){
    for(x = 0; x<=i; x++){
        if(x==9){
                break;
            }
        cout<<x;
    }
    for(j=i+1; j<9; j++){
        cout<<" ";
    }
    for(k =9-i; k>0; k--){
        cout<<" ";
    }
    for( n = i; n>=0; n--){

        cout<<n;
    }
    cout<<endl;
}
for( i = 8; i>=0; i--){
    for(x = 0; x<=i; x++){
        cout<<x;
    }
    for(j=9-i; j>0; j--){
        cout<<" ";
    }
    for(k=9-i; k>1; k--){
        cout<<" ";
    }
    for( n = i; n>=0; n--){
        cout<<n;
    }
    cout<<endl;
}

return 0;
}
