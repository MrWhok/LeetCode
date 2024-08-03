#include <bits/stdc++.h>
using namespace std;

class Solution {

public:
    vector<int> evenOddBit(int num) {
        string str;
        while(num){
            if(num & 1) 
                str+='1';
            else 
                str+='0';
            num>>=1;  
        }    
        return reverse(str);
    }

private:
    vector<int> reverse(string str){
        vector<int> results;
        int k=0, even=0, odd=0;

        for(int i=0; i<str.size() ; i++){
            // cout<<str[i];
            // cout<<"k= "<<k<<" even= "<<even<<" odd= "<<odd<<endl;
            if(str[i]=='1' && k%2==0) even++;
            else if(str[i]=='1' && k%2!=0) odd++;
            k++;
        }
        // cout<<endl;
        results.push_back(even);
        // cout<<"even:"<<even<<endl;
        results.push_back(odd);
        // cout<<"odd:"<<odd<<endl;
        return results;
    }
};
