#include<iostream>//preprocessor directive bowaisi
long long sum(long long n);//function declare korsi
using namespace std;//std barbar na lekhar lagi namespace define korsi
int main()//main function
 {
     long long n;// int declare korsi
     long long summation;//receive koranir lagia variable declare disi
     cin>>n;//input nisi
     if(n==0)//jodi 0 hoy taile sum to 0 oibo
     {
         cout<<0<<endl;//0 oibo output
         return 0;
     }
     else
         summation = sum(n);//jodi 0 na hoy taile // receive koraisi
    cout<<summation<<endl;//output
 }
 long long sum(long long n)//definition lekhsi
 {
     if(n%2==0)//even oile
     {
         n/=2;
         return n;//return korsi sum or value
     }
     else
     {
         n = (n+1)/2;//even oile
        return -n; // jehetu odd shobti minus sign jukto otar lagi negative n return koraisi
     }
 }
