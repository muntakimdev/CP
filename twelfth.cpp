#include<iostream>//preprocessor directive use korlam
#include<string>// string or library anlam
using namespace std;// std barbar na lekhar lagi namespace define korlam
int main() // main function
{
    int a,b;//integer 2ta declare korlam
    cin>>a>>b;//input nilam
    int year = 1;//
    for(;a<=b;year++) // loop chalailam koy bosore a er man y thaki suto hoy janar lagi
    {
            a = year*a*3;//proshno mutabek per bosor 3 gun hoy
            b= year*b*2;// proshno mutabek per bosor 2 gun hoy

    }
    cout<<year-1;//1 minus korsi jate 1 bosor 2 bar count na hoy

}
