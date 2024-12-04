#include <iostream>

using namespace std;

int main()
{
    int number,r;
cout << " Enter your number : ";
cin >> number;

if (number==1||number==2){
     cout << " Number " << number << " is prime. " <<endl;
}
else {

for(int i=2; i<=number/2; i++){
    r=number%i;
    if(r==0){
        cout << " Number " << number << " is not prime. " <<endl;
        i=(number/2)+1;
    }
    else {
                cout << " Number " << number << " is prime. " <<endl;
                i=(number/2)+1;
    }
  }
}

     return 0;
}
