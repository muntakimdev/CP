#include<iostream>//preprocessor directive use korlam
using namespace std; // std na lekhar lagia define korsi std

int main()//main function
{
    /*int t;//integer declare korlam
    cin>>t;// input nilam
    while(t--)//while nisi karon koise problem multiple oibo
    {*/
        int n,k;//integer declare korlam
        cin>>n >> k;// input nilam
        k=k-1;
        int arr[n];//array declare korlam
        int counter=0;//gonar lagi arekta integer declare korsi
        for(int i =0; i<n; i++)
        {
            cin>>arr[i];//loop diya input nilam
        }
        for(int i =0; i<n; i++)
        {
            if(arr[i]>=arr[k])//condition diya check korsi
            {
                if(arr[i]!=0)
                    counter++;//true oile counter or man 1 kori barailam
            }
        }
        cout<<counter<<endl;
}
