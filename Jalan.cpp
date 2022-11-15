#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
   int n;
	cin>>n;
	vector<int> input(n);
	//vector<int> output(n);
	for(int i=0;i<n;i++)
	{
	    cin>>input[i];
	}
	int p;
	cin>>p;
	int arr[n];
	int k=0;
	for(int i=p;i<n;i++)
	{
	    //output.push_back(input[i]);
	    arr[k] = input[i];
	    k++;
	}
	for(int i=0;i<p;i++)
	{
	    //output.push_back(input[i]);
	    arr[k] = input[i];
	    k++;
	}
	
	for(int i=0;i<k;i++)
	{
	    cout<<arr[i]<<" ";
	}
	
	return 0;
}