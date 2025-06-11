#include<iostream>//preprocessor directive bowaisi
#include<algorithm>//swap korar lagi
#include<string>//string loia kaj korsi otar lagi string file add korsi
using namespace std;//std barbar na lekhar lagi namespace define korsi
int main()//main function
{
    int n,t;// int declare korsi
    cin>>n>>t;//input nisi
    string s;//string declare korsi
    cin>>s;//string input nisi
    while(t--)
    {
        for(int i =0; i<n;i++)//loop diya check korsi indexo value kita ase
        {
            if(s[i]=='B' && s[i+1]=='G')//condition match oile swap kortam
            {
                 swap(s[i],s[i+1]);
                    i++;//jehetu swap oigese otar lagi next index o move koranir lagi ++ korsi
            }
            else
                continue;
        }
    }
    cout<<s<<endl;//output
}
