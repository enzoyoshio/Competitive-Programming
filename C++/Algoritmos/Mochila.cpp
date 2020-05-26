int val[MAXN], peso[MAXN], dp[MAXN][MAXS]

int knapsack(int N, int M) // N Objetos | Peso max
{
    for(int i=0;i<=N;i++){
       for(int j=0;j<=M;j++){
            if(i==0 or j==0)
                dp[i][j] = 0;
            else if(peso[i-1]<=j)
                dp[i][j] = max(val[i-1]+dp[i-1][j-peso[i-1]], dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
       }
    }
    return dp[N][M];
}
