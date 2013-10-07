int main() {
 int k, s, p;
 for(k=3; k<100; k++) {
  p = 0;
  for(s=2; s<k; s++) {
   if(!(k%s) {
    p++;
    break;
   }
  }
  if(!p) {
   printf("%d\n", k);
  }
 }
 return 0;
}

