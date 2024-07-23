int assert_ret1 = 1;
extern void insertion_sort(int*, unsigned int);
int main() {
   unsigned int SIZE = 10;
   int v[10];
   for (int j=0;j<SIZE;j++)
      v[j];  
   insertion_sort(v, SIZE);
   for (int k=1;k<SIZE;k++)
  	if(!(v[k-1]<=v[k])){assert_ret1=0;}  
   return 0;
}

