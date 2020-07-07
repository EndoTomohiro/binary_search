#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  scanf("%d%d", &n, &k);
  int i;
  int lb = -1;
  int ub = n;
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }

  while(ub - lb > 1){
    int mid = (lb + ub) / 2;
    if(A[mid] >= k) ub = mid;
    else lb = mid;
  }

  printf("%d\n", ub);

  return 0;

}
