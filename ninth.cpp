#include<iostream>//preprocessor directive use korlam
#include<string>// string or library anlam
using namespace std;// std na lekhar lagia namespace define korsi
int main()//main function
{
 string s;//string declare korsi
 cin>>s;// input nisi
 for(int i =0; i<s.size();i+=2)//loop salaisi, 0 thaki string er size porjonto, i+=2 disi khali digit count oito kori
 {
     for(int j =0; j<s.size()-1;j+=2)//loop salaisi, 0 thaki string er size minus 1 porjonto,j+=2 disi khali digit count oito kori
     {
         if(s[j]>s[j+2]) // swap korar condition
         {
             swap(s[j],s[j+2]);//manually swap na kori swap function use korsi
         }
     }
 }
 cout<<s<<endl;//final output.
}
