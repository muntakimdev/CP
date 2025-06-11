#include<iostream>//preprocessor directive bowaisi
using namespace std;//std barbar na lekhar lagi namespace define korsi
int main()//main function
{
    int n;// int declare korsi
    cin>>n;//input nisi
    int available = 0;//space ase kina indicate koranir lagi
    while(n--)//room joyta totobar check koranir lagi
    {
        int p,q;//integer p ar q diya space count ar member count indicate koraisi
        cin>>p>>q;//input nisi
        if(q-p>=2)//jodi space 2 er beshi ba soman thake, existing member re biyug diya
            available++;//taile available
    }
    cout<<available<<endl;//output
}
