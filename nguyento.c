#include<stdio.h>
int main() {
  int n;
  printf("Please input an integer for n: ");
  scanf("%d", &n);
  int count = 0; // để đánh dấu 
  for(int i = 1; i <= n; i ++) {
  if(n % i == 0) 
    count ++;
  }
  if(count == 2)// số nguyên tố 
    printf("%d\n", n);
}
