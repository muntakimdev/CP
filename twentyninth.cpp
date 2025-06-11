#include<iostream>//preprocessor directive add korsi
using namespace std;//std barbar na lekhbar lagi namespace define korsi
int main()//main function
{
    int n,k;//integer declare korsi
    cin>>n;//input nisi
    int array[n+1];// jehetu one-based indexing korram otar lagi n+1 nisi
    for(int i =1; i<=n;i++)// loop or maiddhome input nisi
    {
        cin>>k;
        array[k]=i;//input or position o value 1 nisi
    }
    for(int i =1;i<=n;i++)
      {
          cout<<array[i]<<" ";//pore order korsi, ekhn ith position o kth position o je asil her value oibo
      }
}
