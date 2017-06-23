#include<stdio.h>


int sort(int *array)
{
  int i,j,k;
  for(i=1;i<7;i++)
    {
      k=array[i];
      for(j=i-1;j>=0&&k<array[j];j--)
	{
	  array[j+1]=array[j];
	}
      array[j+1]=k;
    }
  return 0;	  
}
int read(int *array)
{
  int i,size;
  scanf("%d",&size);
  for(i=0;i<size;i++)
    {
      scanf("%d",&array[i]);
    }
  return size;
}

int main()
{
  int array[7]={4,23,43,38,15,10,30};
  int s;

  sort(array);
  for(s=0;s<7;s++)
    {
      printf("%d\t",array[s]);
    }
  printf("\n");
    return 0;
}
 

	    
    

