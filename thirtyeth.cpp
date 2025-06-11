#include<iostream>//preprocessor directive add korsi
#include<iomanip>//11th decimal ghor dekhanir lagi setprecision use korsilam, eta use korte ou library lage
using namespace std;//std barbar na lekhar lagi namespace define korsi
int main()//main function
{
    int n;//integer declare korsi
    cin>>n;//input nisi
    int array[n];//array declare korsi
    int sum = 0;// sum declare korsi
    for(int i = 0; i<n;i++)//loop diya input nisi ar sum jug korsi
        {
            cin>>array[i];
            sum+=array[i];
        }
    double portion = (double)sum/(double)n;//double use korsi high precision thakar lagi, typecase korsi integer oklore double o newar lagi
    cout<<fixed<<setprecision(11)<<portion<<endl;//final output
}
