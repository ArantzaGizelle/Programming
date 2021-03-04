#include<stdio.h>
#include<math.h>

#define K 11 

    void p(int x);//contains operations similar to the programming book used
    void b(int y);
    int main() {
    p(K); 
       return 0;
}
    void b(int y)
{
    int a=0; 
    int base[10]={0}; 
         while(y>0)
    {
        
	     base[a]= y%2;//this part is based on a coded video, changing variables for adaptation
	     y/=2; 
	 ++a; 
    }
          for(int x=4;x>=0;--x)   
    {
       printf("%01d",base[x]);
    }
       printf("\n");
}
    void p(int k)
{
    int count, a, flag, m;//
    int x=1;
    count = 1;

        while(count <= k){//use mathme’s mathematical logic in youtube
        m = sqrt(x);
        flag = 0; 
        for(a=2; a<= m; a++){
        if(x%a==0){
        flag = 1; 
    break;
  }
}
    if(flag==0){ 

      b(x); 
      count++; 
    }
    x++; 
  }
}