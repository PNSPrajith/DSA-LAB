#include <stdio.h>
#include <string.h>
#include <time.h>
void naiveMethod(char* p, char* t){
    int n = strlen(t);
    int m = strlen(p);
    int num=0;
    for (int s=0;s<n-m+1;s++){
        int count=0;
        for (int i=0;i<m;i++){
            if (t[s+i]==p[i]){count++;}
            else {break;}
        }
        if (count==m){num++;printf("Shift %d\n", s);}
    }
}
int main() {
    char *p = "aab";
    char *t = "aababaab";
    naiveMethod(p, t);
    return 0;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

int lcs(char* X, char* Y, int m, int n) {
    int L[m + 1][n + 1];
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }
    return L[m][n];
}

int main() {
    char *p = "aab";
    char *t = "aababaab";
    naiveMethod(p, t);

    char *X = "AGGTAB";
    char *Y = "GXTXAYB";
    int m = strlen(X);
    int n = strlen(Y);
    printf("Length of LCS is %d\n", lcs(X, Y, m, n));

    return 0;
}
