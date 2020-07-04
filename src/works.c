#include <stdio.h>

int n;
int k;
int A[100000];


int p(unsigned int x, unsigned int n, unsigned int k){
  int j = 0;
  int i = -1;
  int y = 0;
  while(j < k){
    if(y + A[i+1] <= x){
      i++;
      if(i < n - 1){
      y += A[i];
      }
      else break;
    }
    else{
      y = 0;
      j++;
    }
  }
  return i == n - 1;
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

}
