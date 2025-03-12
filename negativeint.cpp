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
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int l=0, r=n-1;
        int ying=-1, yang=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]<0){
                ying=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        l=0, r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]>0){
                yang=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        if(ying==-1 && yang==-1) return 0;
        if(ying==-1) return n-yang;
        if(yang==-1) return ying+1;
        return max(ying+1, n-yang);
    }
};