//https://www.hackerrank.com/challenges/2d-array/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays

int hourglassSum(vector<vector<int>> arr) {
    int maxSum = -INFINITY;
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            int sum = arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1]+
                                    arr[i][j]+
                      arr[i+1][j-1]+arr[i+1][j]+arr[i+1][j+1];
                  if(sum>maxSum)maxSum = sum;
        }
    }
    return maxSum;

}