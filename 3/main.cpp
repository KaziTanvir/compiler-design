#include<bits/stdc++.h>

using namespace std;

void myStrcat(char a[], char b[]){
    int n= strlen(a)+strlen(b);

    char c[n]={};
    int i;
    for(i=0; i <n ;i++){

        if(a[i]=='\0') break;
        else c[i]=a[i];
    }

    for(int k=0; k <n;k++){
        if(b[k]=='\0') break;
        else{
            c[i]=b[k];
            i++;
        }
    }

    c[i]='\0';

  for(int l = 0; c[l]!='\0';l++){
    cout<<c[l];
  }

}



int main()
{
    char a[]={'T','A','N','K','\0'};
    char b[]={'H', 'A','R','D','\0'};
    myStrcat(a,b);

}
