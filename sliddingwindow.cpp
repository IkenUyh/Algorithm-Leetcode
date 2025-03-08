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
const int INF=(int) 1e9+2804;
inline ll gcd(ll a, ll b){ll r; while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a, ll b){return a/gcd(a, b)*b;}
#define foru(i, a, b) for(int i=a; i<b; i++)
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        deque<int> dq;
        vector<int> ve;
        foru(i, 0, k){
            while(!dq.empty() && nums[i]>nums[dq.back()]) dq.pop_back();
            dq.push_back(i);
        }
        ve.push_back(nums[dq.front()]);
        foru(i, k, n){
            if(dq.front()<=i-k) dq.pop_front();
            while(!dq.empty() && nums[i]>nums[dq.back()]) dq.pop_back();
            dq.push_back(i);
            ve.push_back(nums[dq.front()]);
        }
        return ve;
    }
};