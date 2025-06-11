#include<iostream> //preprocessor directive add korsi
#include<string> // string or library add korsi
using namespace std;//std barbar na lekhar lagi define korsi namespace
int main()//main function
{
    string s;//string s declare korsi
    cin>>s;//input nisi
    int count = 0;//gonar lagi variable loisi
    for(int i =0; i<s.size();i++)//individual character check or lagi loop salaisi
    {
        if(s[i]=='4' || s[i]=='7')//condition disi
            count++;//follow korle barbo count
    }
    if(count==4 || count == 7)//final condition output or lagi
        cout<<"YES"<<endl;//output
    else
        cout<<"NO"<<endl;//output condition false oile
}
