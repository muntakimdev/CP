#include<iostream>//preprocessor directive declare korsi
using namespace std;//std bar bar na lekhar lagi namespace define korsi
int main()//main function
{
    int n,k;//integer declare korsi
    cin>>n>>k;//input nisi
    while(k--)//opertion number re decrement korsi
    {
        if(n%10!=0)//last digit 0 na oile
        {
            n--;// n er value kombo
        }
        else
        {
            n/=10;// n/10 oibo jokhon last digit 0 hoy
        }
    }
    cout<<n<<endl;//output
}
