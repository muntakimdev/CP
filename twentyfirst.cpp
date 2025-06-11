#include<iostream>//preprocessor directive bowailam
using namespace std;//std bar bar na lekhar lagi namespace define korsi
int main()//main function
{
    int n, h;//integer nilam
    cin>>n>>h;//input nisi
    int array[n];//array declare koria size n bowaisi
    int counter = 0;//gonar lagi counter declare korsi
    for(int i = 0; i<n; i++)//loop salaia input loisi
    {
        cin>> array[i];
    }
    for(int i = 0; i<n ; i++)//loop salaia condition dekhsi
    {
        if(array[i]>h)//jodi element h thaki boro oy otai main condition
            counter+=2;//true oile 2 kori barse
        else
            counter++;// ar naile 1 kori
    }
    cout<<counter<<endl;//final output/answer.
}
