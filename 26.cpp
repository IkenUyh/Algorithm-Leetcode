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
const int INF=(int) 1e9+2804;
inline ll gcd(ll a, ll b){ll r; while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a, ll b){return a/gcd(a, b)*b;}
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=nums[k]){
                k++;
                nums[k]=nums[i];
            }
        }
        return k+1;
    }
};