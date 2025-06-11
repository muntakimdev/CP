#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s,s1;//2 ta string declare korlam
    cin>>s;//1st string input nilam
    cin>>s1;//2nd tao nilam

    reverse(s.begin(),s.end());//1st string er input re reverse /ulta kori dilam.
    if(s==s1){//ekn check korram ulta kora 1st string s, input newa 2nd string s1 or sate mile ni
        cout<<"YES";//mille YES print korlam
    }
    else{//ar nay na mille
        cout<<"NO";//no pirnt korilam
    }

}
