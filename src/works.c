#include <stdio.h>

int n;
int k;
int A[100000];


int p(unsigned int x, unsigned int n, unsigned int k){
  int i = 0;
  int j;
  for(j = 0; j < k; j++){
    int y = 0;
    while(i < n && y + A[i] <= x){
      y += A[i];
      i++;
    }
  }
  return i == n;
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
    if(p(mid, n, k)) ub = mid;
    else lb = mid;
  }

  printf("%d\n", ub);

  return 0;

}
