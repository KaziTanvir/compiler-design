#include<bits/stdc++.h>

using namespace std;


string readFile(string file){

    ifstream infile;
    infile.open(file);

    string line;
    string s;


    while(getline(infile,line)){
        s += line + "\n";
    }

    return s;
}

int main(){

    cout<< readFile("in.txt");

    cout<< "Hello";
}
