#include<iostream> // preprocessor add korlam
#include<string>
using namespace std; // std na lekhar lagia define korsi std

int main()//main function
{
    int n;
    cin>>n;
    while(n--)
    {
        string a;//string declare korsi
        cin>>a;// string input loisi
        string b = a; // lower case korar lagi noya string declare korsi
        for(char &ch : b)// lower case korar lagi for loop
            ch=tolower(ch); // lower korse

        int c = b.length();//string er length bar korsi
        if(c>10)//condition bowaisi
        {
            cout<<b[0]<<(c-2)<<b[c-1]<<endl;// condition true oile output
        }
        else
        {
            cout<<a<<endl;//false oile output
        }
    }
}
