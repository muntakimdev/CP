#include<iostream>//preprocessor directive use korlam
using namespace std; // std na lekhar lagia define korsi std

int main()//main function
{
    int n;//integer declare korlam
    cin>>n;// input nilam
    int counter =0;
    while(n--)//while nisi karon koise problem multiple oibo
    {
        int a,b,c;// 3 jon friend asil
        cin>>a >> b >> c;// input nisi tarar lagi
        if(a+b+c>=2) //condition
        {
            counter++;// gonar lagi disi
        }
    }
    cout<<counter<<endl;// final output
}
