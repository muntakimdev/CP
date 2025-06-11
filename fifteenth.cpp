#include <iostream>//preprocessor directive add korlam
using namespace std;//std na lekhar lagi namespace define korlan

int main() // amrar main function
{
	int n,k,w;// integer declare korlam
	cin>>k>>n>>w;//input nilam
	int total_dollar = 0;//total koto dollar khoros jaibo bujar lagi
    for(int i =1 ; i<=w;i++)//loop chalaisi karon khoros ekektar lagi w er gunitok akare barer
        {
            total_dollar+= i*k;//total khoros bar korar lagi man baraisi
        }
    if(total_dollar<=n)
        cout<<0<<endl;
     else
        cout<<total_dollar-n<<endl;// total koto dollar dhar ana lagbo ogu bar korsi
}
