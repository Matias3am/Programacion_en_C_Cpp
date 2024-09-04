#include <stdio.h>

int main(){
  int i=-1000;
  //int p, q, f, g;
/*  printf("i vale: %d\n",++i);
  
  printf("i vale: %d\n",i);*/
  
/*  if(!i)
  	printf("Falso\n");
  else
  	printf("Verdadero\n");
  	
  
  p = i!=0;
  printf("p=%d\n",p);*/
  
  /*p = (!i) ? 10:20;
  printf("p=%d\n",p);  */
  
  unsigned char p,q,f,g;
  
  p=4; q=0;
  
  printf("p&&q=%x\n", p&&q );
  printf("p||q=%x\n", p||q ); 
  printf("no p=%x\n", !p );   
  
  printf("p&q=%x\n", p&q );
  printf("p|q=%x\n", p|q );   
  printf("no p=%x\n", ~p );     	
}

