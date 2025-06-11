#include<iostream>//preprocessor directive add korlam
using namespace std; // std na lekhar lagi std namespace define korlam
int main() // main function
{
    int arr[5][5]; // fixed array nilam
    int n,m;// 1 er row, column
    for(int i = 0; i<5; i++) // loop salaisi
    {
        for(int j = 0; j<5; j++)// loop
        {
            cin>>arr[i][j];// input nisi array
        }
    }
    for(int i = 0; i<5; i++)//loop salaisi
    {
        for(int j = 0; j<5; j++)// loop
        {
            if(arr[i][j]==1)//1 er index or man barkorar condition
                {
                    n=i;// 1 er row er index
                    m=j;// 1 er column er index
                }
        }
    }
    int result = abs(2-n) + abs(2-m);// koyta move oise ogur value store korsi, abs function use korsi karon displacement shobsomoy positive hoy
    cout<<result<<endl;// amrar output.

}
