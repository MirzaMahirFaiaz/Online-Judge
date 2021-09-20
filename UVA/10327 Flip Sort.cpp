//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main(){
    int t;
    vector<int>arr;
    while(scanf("%d",&t)==1){
        int x;
        for(int i=1;i<=t;i++){
           cin>>x;
           arr.push_back(x);
        }
        int count=0;
        for(int i=1;i<t;i++)
            for(int j=0;j<i;j++){
                if(arr[j]>arr[i])
                    count++;
        }

        cout<<"Minimum exchange operations : "<<count<<endl;
        arr.clear();

    }
    return 0;

}
