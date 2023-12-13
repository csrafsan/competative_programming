// Created by Rafsan Ahmed
#include <bits/stdc++.h>
using namespace std;

const int sz = 1e5+123;

	int a[sz], sum[sz];


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,q,l,r;
    cin>>n;


   for(int i = 1; i <=n; i++){

   		cin>>a[i];
   }

   cin>>q;

  for(int i = 1;i<=n;i++){

  		sum[i] = sum [i-1] + a[i]; // creating the prefix_sum array
  }


  while(q--){
  	cin>>l>>r;
  	cout<< sum[r+1] - sum[l]<<endl; // show the output 
  }
    


    return 0;
}