/* to do list (할 일 목록 프로그램)
- 할 일 목록 관리 프로그램으로, 사용자가 정한 할 일들을 추가,수정,삭제,완료 표시를 할 수 있는 간단한 목록 관리 프로그램입니다. 
할 일 추가 및 삭제, 완료표시, 우선순위 설정, 검색 기능을 구현할 것 입니다.*/

#include <stdio.h>
#include <string.h>

int main(void)
{
   int line;
    line = '-';
   for(int i =1; i<40; i++){
      printf("%c",line);
   }

   printf("\n\t할 일 목록 관리 프로그램\n");

   int line2;
    line2 = '-';
   for(int j =1; j<40; j++){
      printf("%c",line2);
   }
    printf("\n");
    
    char add[20] = "추가";
    char fix[20] = "수정";
    char del[20] = "삭제";
    char finish[20] = "완료";
    char user[20];

   //  printf("할 일 추가, 수정, 삭제, 완료 중 선택해주세요: ");
   //  if(scanf("%s",user)){
   //      if(strcmp(user,"추가")==0){
   //          printf("할 일을 추가해주세요: ");
   //          // scanf("%s");
   //      }else if(scanf("")){

   //      }
    
   return 0;
}

/* strcmp()함수는 문자열 비교 함수로, 두 문자열을 비교하고 그 결과를 반환하는 함수임
<string.h> 함수 형식: int strcmp(const char *str1, const char *str2)
여기서 const는 "변경할 수 없다"는 의미를 가진 키워드이다. 해당 문자열을 함수 내에서 변경할 수 없음을 나타냄
strcmp()는 두 문자열이 동일하면 0을 반환한다. "*/

