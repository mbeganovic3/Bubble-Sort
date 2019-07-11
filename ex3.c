#include <stdio.h>  /* Need for standard I/O functions */
  
int NchooseK(int n, int k) {
    if(k == 0 || n == k) return 1; // NchooseK(n, 0) = 1 || NchooseK(n, n) = 1
    return NchooseK(n-1, k-1) + NchooseK(n-1, k);
}
  
  
 
int main() {
    int n,k;
 do{
     printf("Enter two integers (for n and k) separated by space:\n");
     scanf("%d%d",&n,&k);
     if(n == 0 && k == 0) break;
     printf("%d\n",NchooseK(n,k));
 }while(n != 0);
     if(n == 0 && k == 0) printf("1\n");
}

