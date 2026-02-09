// DP 45: Longest String Chain finds the longest sequence of words where each next word is formed by inserting exactly one character anywhere into the previous word : -


#include <bits/stdc++.h>
using namespace std;

bool isPred(const string& a, const string& b){
    // return true if b is predecessor of a (a has exactly one extra char)
    if(a.size() != b.size()+1) return false;
    int i=0, j=0;
    while(i<(int)a.size()){
        if(j<(int)b.size() && a[i]==b[j]){ i++; j++; }
        else { i++; }
    }
    return j==(int)b.size();
}

vector<string> longestStrChain(vector<string> words){
    sort(words.begin(), words.end(), [](const string& x, const string& y){
        if(x.size()!=y.size()) return x.size()<y.size();
        return x<y;
    });
    int n=words.size();
    vector<int> dp(n,1), parent(n,-1);
    int bestLen=1, bestIdx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(isPred(words[i], words[j]) && dp[j]+1>dp[i]){
                dp[i]=dp[j]+1;
                parent[i]=j;
            }
        }
        if(dp[i]>bestLen){ bestLen=dp[i]; bestIdx=i; }
    }
    vector<string> chain;
    for(int cur=bestIdx; cur!=-1; cur=parent[cur]) chain.push_back(words[cur]);
    reverse(chain.begin(), chain.end());
    return chain;
}

int main(){
    vector<string> w={"a","b","ba","bca","bda","bdca"};
    auto res = longestStrChain(w); // a -> ba -> bda -> bdca
    for(auto& s: res) cout<<s<<" ";
    cout<<"\n";
}
