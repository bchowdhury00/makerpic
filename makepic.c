#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE * fp = fopen("picture.ppm","w");
  fprintf(fp,"P3 500 500 255\n");
  int x;
  int y;
  for (x = 0; x < 500; x++){
    for (y = 0; y < 500; y++){
      int r = (x * y) % 255;
      int g = (y * y) % 255;
      int b = (x * x) % 255;
      if (((x % 2) == 0) && (y % 2) == 0){
	r = (y * y) % 255;
	g = (x * x) % 255;
	b = (x * y) % 255;
      }
      fprintf(fp,"%d %d %d ",r,g,b);
    }
    fprintf(fp,"\n");
  }
  fclose(fp);
			 
}
