#include <stdio.h>
int main() {
  float dtb,drl;
  scanf("%f",&dtb);
  scanf("%f",&drl);
  if (dtb>=9.0 && drl>=90){
    printf("HOC_BONG_LOAI_XUAT_SAC");
  }else if(8.0 <= dtb && drl>=80 ){
    printf("HOC_BONG_LOAI_GIOI");
  }else if(70 <= drl && dtb > 7.0){
    printf("HOC_BONG_LOAI_KHA");
  }else {
    printf("KHONG_DAT");   
  }
  return 0;
}