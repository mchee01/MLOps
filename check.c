#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main(void) {
  // 처음 uid, euid 출력
  uid_t uid = getuid();
  uid_t euid = geteuid();
  printf("[Init] UID=%d, EUID=%d\n", (int)uid, (int)euid);
  
  // euid를 uid로 설정 후 출력
  seteuid(getuid());
  int cur_euid = (int)geteuid();
  printf("[seteuid(uid)] UID = %d, EUID=%d\n", (int)uid, (int)cur_euid);
  
  // 처음 euid로 복구 후 출력
  seteuid(euid);
  cur_euid = (int)geteuid();
  printf("[seteuid(euid)] UID = %d, EUID=%d\n", (int)uid, (int)cur_euid);  
  return 0;
}