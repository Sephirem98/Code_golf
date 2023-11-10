int main(int z,char*v[]){for(int i=1,r;i<z;printf(11-r%11==10?"%sX\n":r%11==0?"%s0\n":"%s%i\n",v[i],11-r%11),i++,r=0)for(int j=0,m=10;v[i][j]!='\0';j++)v[i][j]!='-'?r+=(v[i][j]-48)*m,m--:0;}
