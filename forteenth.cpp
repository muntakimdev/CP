#include <iostream>//preprocessor directive add korlam
using namespace std;//std na lekhar lagi namespace define korlan

int main() // amrar main function
{
	int n;// integer declare korlam
	cin>>n;//input nilam
	if(n%5==0)//condition
    {
        cout<<n/5<<endl;//output jodi condition true hoy
    }
    else
    {
        cout<<(n/5)+1<<endl;//output jodi condition false hoy
    }
}
