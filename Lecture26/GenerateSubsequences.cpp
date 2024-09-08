#include <iostream>
#include<set>
using namespace std;
void f(char inp[], char out[], int i, int j,set<string> s)
{
    // base case
    if (inp[i] == '\0')
    {
        out[j] = '\0';
        // cout << out << endl;
        //string outSubSeq(out);
        //s.insert(outSubSeq);
        s.insert(string(out));
        return; 
    }

    // recursive case

    // including the character
    out[j] = inp[i];
    f(inp, out, i + 1, j + 1,s);

    // excluding the character
    f(inp, out, i + 1, j,s);
}

int main()
{
    char inp[] = "abcd";
    char out[10];
    set <string> s;
    f(inp, out, 0, 0,s);
    for(string OutSubseq : s){
        cout<<OutSubseq<<" ";
    }
    cout<<endl;

    return 0;
}