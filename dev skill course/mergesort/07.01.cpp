#include <bits/stdc++.h>
#define LIM 100005

using namesapce std;

int n, A[LIM];

int MergeAndCount(int lft, int rgt) {
    int md = (lft+rgt)/2;
    int i = lft, j = md+1;
    vector<int> C;
    int cnt = 0;
    while(i <= md && j <= rgt) {
        if(A[i] <= A[j]) C.push_back(A[i++]);
        else {
            cnt += j-md-1;
            C.push_back(A[j++]);
        }
    }
    while(i <= md) {
        cnt += j-md-1;
        C.push_back(A[i++]);
    }
    while(j <= rgt) C.push_back(A[j++]);

    for(int i=lft, k=0; i<=rgt; i++, k++) A[i] = C[k];
}

int MergeSortAndInversionCount(int lft, int rgt) {
    if(lft >= rgt) return 0;
    int md = (lft+rgt)/2;
    int ans = 0;
    ans = MergeSortAndInversionCount(lft, md)
        + MergeSortAndInversionCount(md+1, rgt)
        + MergeAndCount(lft, rgt);
    return ans;
}

int main() {

}
