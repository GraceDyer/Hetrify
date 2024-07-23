extern void insertion_sort(int*, unsigned int);
int main() {
   unsigned int SIZE = 10;
   int v[10];
   for (int j=0;j<SIZE;j++)
      v[j];  
   insertion_sort(v, SIZE);
   for (int k=1;k<SIZE;k++)
  	assert(v[k-1]<=v[k]);  
   return 0;
}

