#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Binary Number: "<<endl;
    cin>>n;
    // int i=0;
    // int decNum=0;
    // while(n>0){
    //     int digit=n%10;
    //     n=n/10;
    //     decNum = decNum + digit*(pow(2,i));
    //     i++;
        

    // }
    // cout<<decNum;

    int power=0;
    int decNum=0;
    while(n>0){
    int lastdigit=n%10;
    n=n/10;
    decNum=decNum+lastdigit*(pow(2,power));//Try writing int decNum=decNum+lastdigit*(pow(2,power))
    power++;

    
    }
    cout<<decNum;
}