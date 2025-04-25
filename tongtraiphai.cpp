#include<iostream>
#include<iomanip>
#include<set>
#include<vector>
#include<queue>
#include<map>
#include<deque>
#include<functional>
#include<algorithm>
#include<cmath>
#include<sstream>
#include<unordered_set>
#include<string>
using namespace std;
#define ll long long
#define fu(i, a, b) for(int i=a; i<b; i++)
#define fd(i, a, b) for(int i=a; i>=b; i--)
#define endl "\n"
#define nmax 200005
#define pb push_back
#define pf push_front
#define pll pair<ll, ll>
#define fi first 
#define se second
inline ll gcd(ll a, ll b){ll r; while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a, ll b){return a/gcd(a, b)*b;}
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> Left(n+1, 0), Right(n+1, 0);
        vector<int> PrefixLeft(n+1, 0), PrefixRight(n+1, 0);
        for(int i=1; i<=n; i++) Left[i]=nums[i-1];
        Right[n]=0;
        for(int i=n-1; i>=1; i--) Right[i-1]=nums[i];
        for(int i=1; i<=n; i++) PrefixLeft[i]=PrefixLeft[i-1]+Left[i];
        for(int i=n; i>=1; i--) PrefixRight[i-1]=PrefixRight[i]+Right[i-1];
        vector<int> ans;
        for(int i=0; i<n; i++) ans.pb(abs(PrefixLeft[i]-PrefixRight[i]));
        return ans;
    }
};