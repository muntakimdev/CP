#include<iostream>//preprocessor directive bowaisi
using namespace std;//std barbar na lekhar lagi namespace define korsi
int main()//main function
{
    int n;// int declare korsi
    cin>>n;//input nisi
    int array[n];//array declare korsi
    for(int i = 0; i<n; i++)//loop niya input loisi
    {
        cin>>array[i];
    }
    int sum = 0;
    for(int i = 0; i<n; i++)//loop niya sum loisi
    {
        sum+=array[i];
    }
    if(sum>0)
        cout<<"Hard"<<endl;//condition disi jate 0 thaki boro oile hard print oy
    else
        cout<<"Easy"<<endl;//0 indicate kore easy
}
