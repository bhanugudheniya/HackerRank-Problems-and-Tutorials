// include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    float pos=0,neg=0,zer=0;
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
        
    for(int i=0;i<n;i++)
    {
        if(a[i]==0){
            zer++;
        }
        else if(a[i]>0)
        {
            pos++;
        }
        else{
            neg++;
        }
    }
    
    // std::cout<<std::fixed<<std::setprecision(6);
    cout<<(pos/n)<<endl;
    cout<<(neg/n)<<endl;
    cout<<(zer/n)<<endl;
    return 0;