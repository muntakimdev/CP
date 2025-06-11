#include<iostream>//preprocessor directive add korsi
#include<algorithm>//max function or lagi add korsi
using namespace std;//std barbar na lekhar lagi add korsi
int main()//main function
{
    int n;//integar dhorsi
    cin>>n;//input loisi
    int passanger_counter = 0;//gonar lagi variable loisi
    int array1[n];// array lage ekta leaving
    int array2[n];// arekta entering
    int mx=0;//mx loisi max ta store korar lagi
    for(int i= 0; i<n;i++)//loop salaia input loisi + compare korsi
    {
        cin>>array1[i]>>array2[i];
        passanger_counter -=array1[i];//eno komer karon manush baroise
        passanger_counter += array2[i];//eno dhuker
        mx= max(mx,passanger_counter);
    }
    cout<<mx<<endl;//final output
}
