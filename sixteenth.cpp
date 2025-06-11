#include<iostream>//preprocessor directive add korlam
#include<string>//string or library add korsi
using namespace std;//std na lekhar lagi namespace define korsi
int main()//main function
{
    string s;//string declare korsi
    cin>>s;//input nisi
    int small_count =0;//small letter count or variable
    int upper_count = 0;// capital or lagi eta
    for(int i =0;i<s.size();i++)// loop disi check korar lagi
    {
        if(s[i]>='a' && s[i]<='z')//small oibar condition
            small_count++;
        else//small na oile big oibo jehetu koise onno character dito nay
            upper_count++;
    }
    if(small_count>=upper_count)//condition output or lagi
    {
        for(char &ch : s)// lower korar function
            ch = tolower(ch);
        cout<<s<<endl;//output
    }
    else
    {
        for(char &ch : s)//upper korar funtion
            ch= toupper(ch);
        cout<<s<<endl;//output
    }
}
