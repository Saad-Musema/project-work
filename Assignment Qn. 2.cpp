#include<iostream>

using namespace std;

int main(){

 int data,choice;// data is the number the user wants to change

    cout << "please enter 1 for encryption and 2 for decryption";
    cin >> choice;//choice is what the user wants to be done:encryption or decription
   switch(choice){
    case 1:
{
     cout<<"This is an Encrypter, Please input a 4 digit number: ";
    int last_d;
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
 }
    case 2:
        {

    cout << "This is a decrypter please enter a four-digit integer : ";
    cin >> data;
int first,second,third,fourth;
        first = ((data / 1000) + 3) % 10;
       second = ((data / 100) % 10 + 3) % 10;
       third = ((data / 10) % 10 + 3) % 10;
       fourth = (data % 10 + 3) % 10;
        cout << "Decrypted number: " << third * 1000 + fourth * 100 + first * 10 + second << endl;
         break;
    } default:
        cout<<" Invalid choice"; }


return 0;
}
