#include<stdio.h>


int sort(int *array,int size)
{
  int i,j,k;
  for(i=0;i<size;i++)
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
//reading an array
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
  int array[100];
  int s;
  int size;
  size=read(array);

  sort(array,size);
  for(s=0;s<size;s++)
    {
      printf("%d\t",array[s]);
    }
  printf("\n");
    return 0;
}
 

	    
    

