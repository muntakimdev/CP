#include<iostream> // preprocessor add korlam
using namespace std; // std na lekhar lagia define korsi std

int main()//main function
{
    int w; // integer declare korsi
    cin>>w;// input nilam
    if(w==2)// condition use korsi
    {
        cout<<"NO";// jodi true oy
    }
    else if(w%2==0)  // condition
      {
          cout<<"YES";// jodi true oy taile output
      }
    else
     {
         cout<<"NO"; // jodi false taile ota.
     }
    return 0;
}

