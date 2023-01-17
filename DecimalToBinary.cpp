#include<iostream>
#include<math.h>
#include<typeinfo>
using namespace std;
// int main(){
//     int n;
//     cout<<"Enter Decimal Number: ";
//     cin>>n;
//     int power=0;
//     int BinNum=0;
//     while(n>0){
//         int r=n%2;
//         n=n/2;
//         BinNum =(BinNum +r*(pow(10,power)));
//         power++;
//         cout<<"r= "<<r<<" ,n= "<<n<<" ,BinNum= "<<BinNum<<" ,Power = "<<pow(10,power)<<endl;
//     }
//     cout<<BinNum<<endl;
// }


int main(){
    int n;
    cout<<"Enter Decimal Number: ";
    cin>>n;
    int power=1;
    int BinNum=0;
    while(n>0){
        int r=n%2;
        BinNum=BinNum +r*power;
        power=power*10;
        n=n/2;
    }
    cout<<typeid(BinNum).name();

    cout<<typeid('A').name();
}