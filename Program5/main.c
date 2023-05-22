#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int sum = 0;
  
  printf("Please enter the name of the file.\n");
  char fname[128];
  scanf("%123s",fname);
  strcat(fname,".txt");
  FILE *fp;
  fp = fopen(fname,"r");

  // read in the number of inputs
  int num = 0;
  fscanf(fp,"%d",&num);
  printf("Number of items for auction: %d\n", num);

  for (int i = 0; i < num; i++){
    // read in the number of bids
    int bid = 0;
    fscanf(fp,"%d",&bid);
    printf("Number of bids: %d\n", bid);
    
    int arr[bid];
    int highest = 0;

    // loop to get individual bids amount in dollars
    for (int j = 0; j < bid; j++){
      int temp = 0;
      fscanf(fp, "%d", &temp);
      arr[j] = temp;
      printf("%d\n", arr[j]);

      if (arr[j] > highest){
        highest = arr[j];
      }
      
    }

    printf("Auction %d was sold for $%d.00!",(i+1), highest);

    sum = sum + highest;
    
  }
  printf("\n");
  printf("The silent auction raised $%d.00 for charity.\n", sum);
  
  fclose(fp);
  return 0;
  
} //end driver