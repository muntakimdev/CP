#include<iostream>//preprocessor directive use korlam
#include<string>// string or library anlam
#include<algorithm>// sort korar lagi ansi library eta
using namespace std;// std na lekhar lagia namespace define korsi

int main()//main function
{
     string s;//string declare korsi
     cin>>s;// input nisi
     int counter = 0;//distinct character gonar lagia
     sort(s.begin(),s.end());//sort function use korsi
     for(int i = 0; i<s.size();i++)// loop salaisi distinct character re gonar lagi
     {
         if(s[i]!=s[i+1])//distinct oibo ou condition manle
            counter++;// barbo value
     }
     if(counter % 2== 0 )//even oile furi
        cout<<"CHAT WITH HER!";
     else
        cout<<"IGNORE HIM!";//even na oile fua
}
