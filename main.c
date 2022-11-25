#include <stdio.h>

int main() {
    int n,i,j,cnt=1;
    scanf("%d",&n);
    int a[n][n];
    for (j = n-1; j >= 0; --j) {
        for (i = 0; i < n; ++i) {
            a[i][j]=cnt;
            cnt++;
        }
    }
    for(i=0;i<n;i++) {
        for (j = 0; j < n; ++j) {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
