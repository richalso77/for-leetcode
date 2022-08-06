

int numTrees(int n){
    int i,j;
    int *temp = malloc((n+1) * sizeof(int));
    temp[0] = 0;
    temp[1] = 1;
    for (i = 2; i <= n; i++){
        temp[i] = 2 * temp[i-1];
        for (j = 1; j < i/2; j++){
            temp[i] += temp[i-j-1] * temp[j] * 2;
        }
        if (i%2)
            temp[i] += temp[(i-1)/2] * temp[(i-1)/2];
    }
    
    return temp[n];
}
