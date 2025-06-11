#include<iostream>//preprocessor directive
#include<set>//set function use korar lagi set include korsi
using namespace std;//std barbar na lekhar lagi namespace define korsi
int main()//main function
{
    int array[4];//array declare korsi, size nisi 4 karon ghurar pao 4ta
    for(int i =0; i<4;i++)//loop chalaia input nisi
      {
          cin>>array[i];
      }
    set<int>s(array,array+4);//set use korsi karon set or element ekadik bar thakleo ekbar e count hoy
    int duplicate = 4 - s.size();//pore total size thaki element minus korsi, taile duplicate koyta asil buja jaibo
    cout<<duplicate<<endl;//final output
}
