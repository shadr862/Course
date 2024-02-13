#include <bits/stdc++.h>

using namespace std;

int n, A[10004];

int rando(int a, int b) {
    int sz = b-a+1;
    return rand() % sz + a;
}

int _partition(int st, int ed, int pv) {
    cout << "PS: " << st << " " << ed << " " << pv << endl;
    getchar();
    int i = st, j = ed-1;
    while(i < j) {
//            cout << i << " " << j << endl;
        if(A[i] < pv) i++;
        else if(A[j] >= pv) j--;
        else swap(A[i], A[j]);
    }
    //cout << "RET: " <<j << endl;
    return j;
}

void quickSort(int st, int ed) {
    cout << "QS: " << st << " " << ed << endl;
    getchar();
    if(st+1 >= ed) return;

    int x = rando(st, ed-1);
    swap(A[x], A[ed-1]);

    int pv = A[ed-1];
    int pi = _partition(st, ed, pv);
    swap(A[pi], A[ed-1]);

    cout << "pi: " << pi << endl;
    cout << "after : ";
    for(int i=st; i<ed; i++) {
        if(i == pi) cout << "   |";
        printf(" %3d", A[i]);
    }
    cout << endl;

    quickSort(st, pi);
    quickSort(pi+1, ed);

}

int main() {
    srand(time(NULL));
    scanf("%d", &n);
    for(int i=0; i<n; i++) A[i] = rand() % 20 + 1;
    for(int i=0; i<n; i++) printf(" %3d", A[i]); cout << endl;
    quickSort(0, n);
    for(int i=0; i<n; i++) printf(" %3d", A[i]); cout << endl;

    main();
}

/**
10
   3   2  18   4  19   4  12  14   1  10
   3   2   1   4   4  19  12  14  18  10
*/
