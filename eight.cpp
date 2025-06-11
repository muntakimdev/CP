#include<iostream>//preprocessor directive add korlam
#include<string> // string function or directive lagailam
#include<cstring>// c programming or strcmp use korar lagi ei library ansi
using namespace std; // std na lekhar lagi std namespace define korlam
int main() // main function
{

    string a,b;//string 2ta declare korsi
    cin>>a;//input nisi
    cin>>b;// input nisi
    for(char &ch : a)//shobti character re lower korar function
        ch = tolower(ch);
    for(char &ch : b)//shobti character re lower korar function
        ch = tolower(ch);
    int c = strcmp(a.c_str(),b.c_str());// string compare korsi koria value store korsi
    cout<<c<<endl;//final output.
}
