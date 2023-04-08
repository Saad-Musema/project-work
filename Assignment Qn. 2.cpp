#include<iostream>

using namespace std;


int main(){
 cout<<"This is an encrypter, Please input a 4 digit number: ";
 int data, last_d;
 cin>>data;
 int nums[4];

 for( int i=3; i>=0; i--){
    last_d = data%10;
    data /= 10;
    nums[i] = last_d;
 }

  for( int i=0; i<4; i++){
    cout<<nums[i];
    cout<<endl;
 }

 for( int i=0; i<=3; i++){
    nums[i] = (nums[i] + 7)%10;
 }

 int replacer;

 replacer = nums[2];
 nums[2] = nums[0];
 nums[0] = replacer;

 replacer = nums[3];
 nums[3] = nums[1];
 nums[1] = replacer;
cout<<"The encrypted data is ";

 for( int i=0; i<4; i++){
    cout<<nums[i];
 }



return 0;
}
