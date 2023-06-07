#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

void lcs(char* X, char* Y, int m, int n) {
    int L[m + 1][n + 1];
    int i, j;

    // Build the L[m+1][n+1] table in bottom-up manner
    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }

    // Length of LCS is stored in L[m][n]
    int length = L[m][n];

    // Allocate memory to store the LCS
    char lcs[length + 1];
    lcs[length] = '\0';  // Set the null character at the end

    // Traverse the L[m+1][n+1] table to find the LCS
    i = m;
    j = n;
    while (i > 0 && j > 0) {
        // If current characters in X and Y are equal, it is part of the LCS
        if (X[i - 1] == Y[j - 1]) {
            lcs[length - 1] = X[i - 1];
            i--;
            j--;
            length--;
        }
        // If not equal, then find the larger of two and go in the direction of larger value
        else if (L[i - 1][j] > L[i][j - 1])
            i--;
        else
            j--;
    }

    // Print the LCS
    printf("\nLCS: %s\n\n", lcs);
}

int main() {
    char X[] = "AGGTAB";
    char Y[] = "GXTXAYB";

    int m = strlen(X);
    int n = strlen(Y);

    lcs(X, Y, m, n);

    return 0;
}