#include <math.h>
int main(){double a[107],d=0;int l=sizeof(a)/sizeof(a[0]),c=0;for(int x=2;x<=316327;x++)for(int y=2;y<=x;y++){d=pow(x,y)+pow(y,x);if(pow(10,11)>d){a[c]=d;c++;}else break;}for(int i=1;i<l;i++)if(a[i-1]>a[i]){double t=a[i];a[i]=a[i-1];a[i-1]=t;i=1;}for(int i=0;i<l;i++)printf("%.0f\n",a[i]);}
