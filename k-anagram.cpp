
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k) {
        // code here
        if(str1.length()!=str2.length())
        {
          return false;
        }
        unordered_map<char,int> umap;
        int cnts=0;
        for(int i=0;i<str1.length();i++)
        {
           umap[str1[i]]++;
        }
        for(int i=0;i<str2.length();i++)
        {
            if(umap.find(str2[i])!=umap.end())
            {
                if(umap[str2[i]]>0)
                  umap[str2[i]]--;
                else return false;
            }
            if(umap.find(str2[i])==umap.end())
            {
                cnts++;
            }
            if(cnts>k)
            {
                return false;
            }
        }

        cout<<cnts;
        return true;
    }
};

// { Driver Code Starts.

int main()
{
    freopen("input.txt", "r", stdin);
	int t;
	cin>>t;
	while(t--)
	{
		string str1="ujj",str2="uuj";
		//cin>>str1>>str2;
		int k=2;
		//cin>>k;
		Solution ob;
		if(ob.areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}  // } Driver Code Ends
