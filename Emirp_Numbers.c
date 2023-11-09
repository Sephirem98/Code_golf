int main(){for(int i=2,a=0,b=0;i<1001;a=b=0,i++){for(a=i;a>0;a/=10){b*=10;b+=a%10;}for(int j=2;j<i;j++)i%j==0?0:a++;for(int j=2;j<b;j++)b%j==0?0:a++;a==i+b-4&&i!=b?printf("%i\n",i):0;}}
