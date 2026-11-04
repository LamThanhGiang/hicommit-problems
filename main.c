#include <stdio.h>

int main() {
  float dtb;
  int drl;
  scanf("%f",&dtb);
  scanf("%d",&drl);
  if (dtb>=9.0 || dtb<=10.0 && drl>=90 || drl<=100){
    printf("HOC_BONG_LOAI_XUAT_SAC");
  }else if(8.0 <= dtb < 9.0 && drl >= 90||80 <= drl < 90 || dtb >= 9.0 && 80 <= drl < 90)
    printf("HOC_BONG_LOAI_GIOI");
  	
  return 0;
}