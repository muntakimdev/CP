#include<iostream>//preprocessor directive add korsi
using namespace std;//std barbar na lekhar lagi add korsi
int main()//main function
{
        int year;//integar dhorsi
        cin>>year;//input loisi
        while(true)//loop infinite chalaisi jodi condition match kore taile break korbo
        {
            year++; //jodi same digit hoy taile 1 kori baraisi karon amra jani na poroborti digit alada ala year kunta
            int a = year / 1000;//digit algaisi
            int b = year / 100 %10;//"
            int c = year /10 %10;//"
            int d = year %10;//"
            if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)// shobti digit check korsi
                break;
        }
        cout<<year<<endl;//final output
}
