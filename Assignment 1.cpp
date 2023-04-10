#include<iostream>

using namespace std;



int main(){
    int n, i,j,k, x, m;



cout<<"Please input number of your liking ";
cin>>m;

for( i = 0; i<=m; i++){
    for(x = 0; x<=i; x++){
        if(x==m){
                break;
            }
        cout<<x;
    }
    for(j=i+1; j<m; j++){
        cout<<" ";
    }
    for(k =m-i; k>0; k--){
        cout<<" ";
    }
    for( n = i; n>=0; n--){

        cout<<n;
    }
    cout<<endl;
}
for( i = m-1; i>=0; i--){
    for(x = 0; x<=i; x++){
        cout<<x;
    }
    for(j=m-i; j>0; j--){
        cout<<" ";
    }
    for(k=m-i; k>1; k--){
        cout<<" ";
    }
    for( n = i; n>=0; n--){
        cout<<n;
    }
    cout<<endl;
}

return 0;
}
