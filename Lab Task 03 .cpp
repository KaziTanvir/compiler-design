#include <bits/stdc++.h>


using namespace std;

string readData(string file){

    string s = file;

    ifstream in;
    in.open(s);

    string line;
    string allline;
    while(getline(in,line)){


    allline+=line+'\n';
    }

}

int main(){


string a = readData("input.cpp");

cout<<a;




return 0;
}
