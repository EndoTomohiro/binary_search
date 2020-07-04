#include <stdio.h>

int n;
int k;
int A[100000];


int p(int t){
  int i;
  int x = 0;
  for(i = 0; i < n; i++){
    x += A[i] / t;
  }
  return x >= k;
}

int main(){
  int i;
  scanf("%d%d", &n, &k);
  int lb = 0;
  int ub = 1000000000;
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }

  while(ub - lb > 1){
    int mid = (lb + ub) / 2;
    if(p(mid) == 1) lb = mid;
    else ub = mid;
  }

  printf("%d\n", lb);
}
