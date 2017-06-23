#include<stdio.h>

int main()
{
  int array[7]={4,23,43,38,15,10,30};
  int i,j,k,s;
 
  for(i=1;i<7;i++)
    {
      k=array[i];
      for(j=i-1;j>=0&&k<array[j];j--)
	{
	  array[j+1]=array[j];
	}
      array[j+1]=k;
    }
	  for(s=0;s<7;s++)
	    {
	      printf("%d\t",array[s]);
	    }
	  printf("\n");
	    
    
}
