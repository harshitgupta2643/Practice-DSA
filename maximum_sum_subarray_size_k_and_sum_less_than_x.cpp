#include<bits/stdc++.h>
using namespace std;

int max_sum_subarray(vector<int> arr,int k,int x){
    int sum=0;int ans=0;int n = arr.size();
    for(int i=0;i<k;i++) sum+=arr[i];
    if(sum<x) ans=sum;
    for(int i=k;i<n;i++){
        sum=sum+arr[i]-arr[i-k];
        if(sum<x) ans=max(ans,sum);
    }
    return ans;
}

int main(){
    vector<int> arr = {7,5,4,6,8,9};
    int k =3;
    int x = 20;
    cout<<max_sum_subarray(arr,k,x)<<endl<<endl;
    return 0;
}