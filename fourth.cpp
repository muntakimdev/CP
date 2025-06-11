#include<iostream>//preprocessor directive use korlam
#include<string> // string or directive use korsi
using namespace std; // std na lekhar lagia define korsi std

int main()//main function
{
    int n;//integer declare korlam
    cin>>n;// input nilam
    int x = 0;//integer declare korsi
    while(n--)//while nisi karon koise problem multiple oibo
    {
        string a;//string declare korsi
        cin>>a;//input nilam
        if(a=="X++")//condition
        {
            x++;//jodi true oy
        }
        else if(a=="--X")//condition
        {
            --x;//jodi true oy
        }
        else if(a=="++X")//condition
        {
            ++x;//jodi true oy
        }
        else if(a=="X--")//condition
        {
            x--;//jodi true oy
        }
    }
    cout<<x<<endl;
}
