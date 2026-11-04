#include <stdio.h>
int main() {
  float dtb;
  int drl;
  scanf("%f",&dtb);
  scanf("%d",&drl);
  if (dtb>=9.0 && drl>=90){
    printf("HOC_BONG_LOAI_XUAT_SAC");
  }else if(8.0 <= dtb < 9.0 && 80 <= drl < 90 ){
    printf("HOC_BONG_LOAI_GIOI");
  }else if(70 <= drl < 80 && 7.0 <= dtb < 8.0 ){
    printf("HOC_BONG_LOAI_KHA");
  }else (dtb < 7.0 && drl < 70){
    printf("HOC_BONG_LOAI_KHA);   
  }
  return 0;
}