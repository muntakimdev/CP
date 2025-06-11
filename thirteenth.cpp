#include <iostream>//preprocessor directive add korlam
using namespace std;//std na lekhar lagi namespace define korlan

int main() // amrar main function
{
	int n;// integer declare korlam
	cin>>n;//input nilam
	char a[n];//character array declare korlam
	for(int i =0; i<n;i++)//for loop loisi array input newar lagi
    {
        cin>>a[i];//input loisi
    }
	int count = 0;// track korar lagi variable count loisi
	for(int i =0; i<n;i++)//loop salaisi check korar lagi
    {
        if(a[i]==a[i+1])//condition dilam
        {
            count++;//gonram
        }
    }
    cout<<count;//output

}
