#include<iostream>//preprocessor directive bowaisi
using namespace std;//std barbar na lekhar lagi namespace define korsi
int main()//main function
 {
     int n;// int declare korsi
    cin>>n;//input nisi
    int group = 0; // koyta group oy ogu indicate koranir lagi
    int array[n];
    int a = 10;
    int b = 01;
    for(int i = 0; i<n; i++)
    {
        cin>>array[i];
    }
    for(int i = 0; i<n; i++)
    {
        if((array[i]==a && array[i+1]==a)||(array[i]==b && array[i+1]==b))//chcek korlam jodi same hoy taile shobti miliya ek hoy ar naile hoy na
            continue;
        else
            group++;//group barse
    }
    cout<<group<<endl;//final output
}

