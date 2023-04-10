#include<iostream>

using namespace std;

int main(){

 int data,choice;// data is the number the user wants to change
    cout<<"Greetings, this is a data encrypter"<<endl;
    cout << "Please enter 1 for Encryption and 2 for Decryption: ";

    cin >> choice;//choice is what the user wants to be done:encryption or decryption

switch(choice){
    case 1:{
     cout<<"This is an Encrypter, Please input a 4 digit number: ";
     int last_d;

     cin>>data;
     int nums[4];

//The following loop pushes each digit to the array
    for( int i=3; i>=0; i--){
    last_d = data%10;
    nums[i] = last_d;
    data /= 10;
    }

//the following loop updates each array value
    for( int i=0; i<=3; i++){
    nums[i] = (nums[i] + 7)%10;
    }

     int replacer;//Variable used to exchange values

     replacer = nums[2];
     nums[2] = nums[0];
     nums[0] = replacer;

     replacer = nums[3];
     nums[3] = nums[1];
     nums[1] = replacer;

    cout<<"The encrypted data is ";

    //prints each value in array
     for( int i=0; i<4; i++){
        cout<<nums[i];
     }
     break;
 }


case 2:
        {

    cout << "This is a Decrypter. Please enter a four-digit integer : ";
    cin >> data;
    int first, second, third, fourth, value;
    int* decrypted_data;

       first = ((data / 1000) + 3) % 10;
       second = ((data / 100) % 10 + 3) % 10;
       third = ((data / 10) % 10 + 3) % 10;
       fourth = (data % 10 + 3) % 10;
        value = third * 1000 + fourth * 100 + first * 10 + second;
        decrypted_data = &value;

    cout << "Decrypted data: " << *decrypted_data<<endl;
         break;
    }

    default:
        cout<<"Invalid input! "; }


return 0;
}
