#include <bits/stdc++.h>

using namespace std;

string readFile(string file)
{
    ifstream infile;
    infile.open(file);

    string line;
    string s;

    while(getline(infile,line)){

        s+=line+'\n';
    }
    return s;

}

string removeComments(string codewithcomments){

    int n = codewithcomments.length();
    string withoutComment;

    bool single_line = false;
    bool multi_line = false;

    for (int i=0; i<n; i++)
    {
        // If single line comment flag is on, then check for end of it
        if (single_line == true && codewithcomments[i] == '\n')
            single_line= false;

        // If multiple line comment is on, then check for end of it
        else if  (multi_line == true && codewithcomments[i] == '*' && codewithcomments[i+1] == '/')
            multi_line = false,  i++;

        // If this character is in a comment, ignore it
        else if (single_line || multi_line)
            continue;

        // Check for beginning of comments and set the appropriate flags
        else if (codewithcomments[i] == '/' && codewithcomments[i+1] == '/')
            single_line = true, i++;
        else if (codewithcomments[i] == '/' && codewithcomments[i+1] == '*')
            multi_line = true,  i++;

        // If current character is a non-comment character, append it to res
        else  withoutComment += codewithcomments[i];
    }
    return withoutComment;


}

vector<string> mystrtok(string str, char delim){

    vector<string> tokens;
    string temp = "";
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == delim)
        {
            tokens.push_back(temp);
            temp = "";
        }
        else
            temp += str[i];
    }
        tokens.push_back(temp);
    return tokens;

}



int main()
{
    string s = readFile("input.cpp");
        //cout<<s;
    string withoutComments = removeComments(s);

    vector<string> tokens = mystrtok(withoutComments, ' ');

    for(string s: tokens)
        cout << s << endl;


    return 0;
}

