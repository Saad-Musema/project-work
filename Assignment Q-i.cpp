#include <iostream>
using namespace std;

int main(){
    int n;
cout<< "Enter a positive integer greater than or equal to one: ";
cin>>n;

if(n<1){
    cout<< "Invalid input, Nothing to print.";
}
else {
    for(int i=n; i>=1; i--){
        for(int j= n-i; j>=1; j--){
            cout<< " ";
        }
        for(int j=i; j>=1; j--){
            cout<< char(64+j);
        }
        for(int j=2; j<=i; j++){
            cout<< char(64+j);
        }
        cout<<endl;
        }
        for(int i=2; i<=n; i++){
            for(int j=n-i; j>=1; j--){
                cout<< " ";
            }
            for(int j=i; j>=1; j--){
            cout<< char(64+j);
        }
          for(int j=2; j<=i; j++){
            cout<< char(64+j);
        }
         cout<<endl;
        }

}




return 0;
}
