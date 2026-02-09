// DP 30: Minimum insertions/deletions : -


#include <bits/stdc++.h>
using namespace std;

int lcsLen(const string& a, const string& b){
    int n=a.size(), m=b.size();
    vector<int> prev(m+1,0), cur(m+1,0);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1]) cur[j]=1+prev[j-1];
            else cur[j]=max(prev[j],cur[j-1]);
        }
        prev.swap(cur);
        fill(cur.begin(),cur.end(),0);
    }
    return prev[m];
}

struct Ops { int deletions; int insertions; int total; };

Ops minInsDelToConvert(const string& A, const string& B){
    int L = lcsLen(A,B);
    int del = (int)A.size() - L;
    int ins = (int)B.size() - L;
    return {del, ins, del+ins};
}

int main(){
    string A="heap", B="pea";
    auto ans = minInsDelToConvert(A,B);
    cout << ans.deletions << " " << ans.insertions << " " << ans.total << "\n"; // 2 1 3
}
