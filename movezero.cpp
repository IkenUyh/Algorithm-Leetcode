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
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        foru(i, 0, n){
            if(nums[i]!=0){
                nums[j++]=nums[i];
            }
        }
        while(j<n){
            nums[j++]=0;
        }
    }
};