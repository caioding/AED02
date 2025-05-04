#include <bits/stdc++.h>
using namespace std;
 
#define MAXN 100
#define MAXSUM 10000

void solve(int n, int caramelos[MAXN]) {
    int total = 0;
    for (int i = 0; i < n; i++)
        total += caramelos[i];
    
    if (total % 2 != 0) {  // se a soma total for ímpar, não há solução
        printf("-1\n");
        return;
    }
    int target = total / 2;
    
    // Programação dinâmica: dp[i][s] será true se for possível obter soma 's'
    // usando os primeiros i elementos.
    bool dp[MAXN + 1][MAXSUM / 2 + 1];
    memset(dp, false, sizeof(dp));
    dp[0][0] = true;
    for (int i = 1; i <= n; i++) {
        for (int s = 0; s <= target; s++) {
            dp[i][s] = dp[i - 1][s];
            if (s >= caramelos[i - 1] && dp[i - 1][s - caramelos[i - 1]])
                dp[i][s] = true;
        }
    }
    
    if (!dp[n][target]) {
        printf("-1\n");
        return;
    }
    
    // Reconstrói a partição (subset) que soma target. Os elementos escolhidos serão para a Alice;
    // os restantes irão para o Bob.
    int alice[MAXN], bob[MAXN];
    int countAlice = 0, countBob = 0;
    int s = target;
    for (int i = n; i >= 1; i--) {
        // Se for possível utilizar o atual elemento (caramelos[i-1]) para compor a soma
        if (s >= caramelos[i - 1] && dp[i - 1][s - caramelos[i - 1]]) {
            alice[countAlice++] = caramelos[i - 1];
            s -= caramelos[i - 1];
        } else {
            bob[countBob++] = caramelos[i - 1];
        }
    }
    
    // Agora, intercalamos os valores dos dois grupos para formar uma ordenação que,
    // ao ser processada pelo procedimento de distribuição, gere somas finais iguais.
    int result[MAXN];
    int sumAlice = 0, sumBob = 0;
    int idxA = 0, idxB = 0;
    
    for (int k = 0; k < n; k++) {
        // Se as somas estiverem iguais ou Alice possuir menos caramelos,
        // escolhemos o próximo elemento do grupo da Alice, se disponível.
        if ((sumAlice <= sumBob && idxA < countAlice) || idxB >= countBob) {
            result[k] = alice[idxA++];
            sumAlice += result[k];
        } else {
            result[k] = bob[idxB++];
            sumBob += result[k];
        }
    }
    
    // Imprime o resultado final (a ordenação dos valores)
    printf("%d", result[0]);
    for (int i = 1; i < n; i++)
        printf(" %d", result[i]);
    printf("\n");
}
 
int main() {
    int n;
    int caramelos[MAXN];
    
    // Leitura de entrada
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &caramelos[i]);
    
    // Resolva o problema
    solve(n, caramelos);
    
    return 0;
}