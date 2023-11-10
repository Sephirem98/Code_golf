int main(){for(int i=0,a[31]={0,0,1};i<31;i++,printf("%i\n",i<3?a[i]:(a[i]=a[i-1]+a[i-2])));}
