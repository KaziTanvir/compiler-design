#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
    int a;

    cin >> a;

    if(a>=90){
        cout<<"A+"<<endl;
    }
    else if(a>=85 && a<90 ){
        cout<<"A"<<endl;
    }
    else if( a>=80 && a<85){
        cout<< "B+"<<endl;
    }

    else if( a>=75 && a<80 ){
        cout<<"B"<<endl;
    }
    else if( a>=70 && a<75 ){
        cout<<"C+"<<endl;
    }
    else if( a>=65 && a<70 ){
        cout<<"C"<<endl;
    }
    else if( a>=60 && a<65 ) {
        cout<<"D+"<<endl;
    }
    else if( a>=50 && a<60 ){
        cout<<"D"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }

    return 0;
}
