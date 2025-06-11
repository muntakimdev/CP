#include<iostream>//preprocessor directive use korlam
#include<string>// string or library anlam
using namespace std;// std barbar na lekhar lagi namespace define korlam
int main() // main function
{
    string s;//string declare korsi
    cin>>s;// input nisi
    s[0] = toupper(s[0]); // poyla character re capaital korsi
    cout<<s;//output
}
