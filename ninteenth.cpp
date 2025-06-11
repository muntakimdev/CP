#include<iostream> //preprocessor directive add korsi
#include<string> // string or library add korsi
using namespace std;//std barbar na lekhar lagi define korsi namespace
int main()//main function
{
    int n;//integer declare korsi
    cin>>n;//input loisi
    char arr[n];//character array declare korsi
    int countA = 0, countD = 0; // ke koybar jitse count korar lagi variable loisi
    for(int i =0;i<n;i++)//loop chalaisi input loibar lagi
     {
         cin>>arr[i];//array input loisi
     }
     for(int i =0; i<n;i++)//check korar lagi for loop salaisi
     {
         if(arr[i]=='A')//poyla joner lagi condition
            countA++;
        else//ditiyo joner lagi condition
            countD++;
     }
     if(countA>countD)//jodi poyla jon beshi jite
        cout<<"Anton"<<endl;
     else if(countA<countD)//ditiyo jon beshi jite
        cout<<"Danik"<<endl;
    else//draw oile
        cout<<"Friendship"<<endl;
}
