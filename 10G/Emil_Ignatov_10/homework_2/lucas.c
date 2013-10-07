int main() {
  
        unsigned long long int f,q,r;
        int k;
        f=2;
        q=1;
 printf("%llu\n" , f);
 printf("%llu\n" , q);
 for (k=3;k<=100;k++)
{
 r=f+q;
 printf("%d - %llu\n" ,k,r);
 f=q;
 q=r;
}
 return 0;
}

