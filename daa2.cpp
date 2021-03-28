#include<bits/stdc++.h>
using namespace std;

int n,k,max_ele=0;

int subsetXOR(int arr[])
{
	// Maximum possible XOR value
	int m = (1 << (int)(log2(max_ele) + 1)) - 1;

	if( k > m )
	    return 0;

	int dp[n+1][m+1];
	// Initializing all the values of dp[i][j] as 0
	for (int i=0; i<=n; i++)
		for (int j=0; j<=m; j++)
			dp[i][j] = 0;

	// The xor of empty subset is 0
	dp[0][0] = 1;

	for (int i=1; i<=n; i++){
		for (int j=0; j<=m; j++){
            dp[i][j] = dp[i-1][j] + dp[i-1][j^arr[i-1]];
            //cout<<dp[i][j]<<" ";
        }
        // cout<<"\n";
    }
	return dp[n][k];
}

int main()
{
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if (arr[i] > max_ele)
		    max_ele = arr[i];
    }
    cout<<"Enter the XOR value :";
    cin>>k;
	cout << "Count of subsets is " << subsetXOR(arr);
	return 0;
}
