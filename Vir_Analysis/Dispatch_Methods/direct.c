/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

union _1_sum_$node ;
struct _IO_FILE ;
struct timeval ;
extern int gettimeofday(struct timeval *tv , void *tz ) ;
extern int pthread_cond_broadcast(int *cond ) ;
char **_global_argv  =    (char **)0;
extern int posix_memalign(void **memptr , unsigned int alignment , unsigned int size ) ;
extern int getpagesize() ;
extern int pthread_join(void *thread , void **value_ptr ) ;
extern int open(char const   *filename , int oflag  , ...) ;
extern unsigned int strlen(char const   *s ) ;
extern int pthread_barrier_destroy(int *barrier ) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned int maxlen ) ;
extern int pthread_mutex_init(int *mutex , int *attr ) ;
extern int printf(char const   * __restrict  __format  , ...) ;
int _global_argc  =    0;
extern int pthread_cond_signal(int *cond ) ;
extern int pthread_barrier_init(int *barrier , int *attr , unsigned int count ) ;
extern int raise(int sig ) ;
extern int scanf(char const   *format  , ...) ;
char **_global_envp  =    (char **)0;
extern int unlink(char const   *filename ) ;
char const   *_1_sum_$strings  =    "";
extern double difftime(long tv1 , long tv0 ) ;
extern int pthread_barrier_wait(int *barrier ) ;
extern int pthread_mutex_lock(int *mutex ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned int size ) ;
extern void *dlsym(void *handle , char *symbol ) ;
extern int gethostname(char *name , unsigned int namelen ) ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern void abort() ;
extern void free(void *ptr ) ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern void signal(int sig , void *func ) ;
extern void exit(int status ) ;
int main(int _formal_argc , char **_formal_argv , char **_formal_envp ) ;
void init_tigress(void) ;
typedef struct _IO_FILE FILE;
extern int mprotect(void *addr , unsigned int len , int prot ) ;
extern int close(int filedes ) ;
extern double log(double x ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern double ceil(double x ) ;
extern int fclose(void *stream ) ;
extern int fcntl(int filedes , int cmd  , ...) ;
union _1_sum_$node {
   char _char ;
   unsigned int _unsigned_int ;
   unsigned char _unsigned_char ;
   long _long ;
   unsigned long _unsigned_long ;
   void *_void_star ;
   unsigned short _unsigned_short ;
   unsigned long long _unsigned_long_long ;
   signed char _signed_char ;
   long long _long_long ;
   int _int ;
   short _short ;
};
extern int pthread_cond_wait(int *cond , int *mutex ) ;
extern void perror(char const   *str ) ;
extern int pthread_cond_init(int *cond , int *attr ) ;
extern int write(int filedes , void *buf , unsigned int nbyte ) ;
extern int ptrace(int request , void *pid , void *addr , int data ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
extern unsigned int strnlen(char const   *s , unsigned int maxlen ) ;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
extern long clock(void) ;
extern void qsort(void *base , unsigned int nel , unsigned int width , int (*compar)(void *a ,
                                                                                     void *b ) ) ;
extern long time(long *tloc ) ;
extern int rand() ;
extern int read(int filedes , void *buf , unsigned int nbyte ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern int strcmp(char const   *a , char const   *b ) ;
extern double sqrt(double x ) ;
extern void *malloc(unsigned int size ) ;
extern int snprintf(char *str , unsigned int size , char const   *format  , ...) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern int nanosleep(int *rqtp , int *rmtp ) ;
extern int pthread_mutex_unlock(int *mutex ) ;
extern int atoi(char const   *s ) ;
extern int pthread_create(void *thread , void *attr , void *start_routine , void *arg ) ;
extern int fscanf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int fseek(struct _IO_FILE *stream , long offs , int whence ) ;
int sum(int x , int y ) ;
void megaInit(void) ;
int sum(int x , int y ) 
{ 
  char _1_sum_$locals[12] ;
  union _1_sum_$node _1_sum_$stack[1][32] ;
  union _1_sum_$node *_1_sum_$sp[1] ;
  void **_1_sum_$pc[1] ;
  void *_1_sum_$array[1][16]  = {{&& _1_sum__formal$result_STA_0$value_LIT_0, (void *)1UL,
                                  && _1_sum__load_int$left_STA_0$result_STA_0, && _1_sum__formal$result_STA_0$value_LIT_0,
                                  (void *)0UL, && _1_sum__load_int$left_STA_0$result_STA_0,
                                  && _1_sum__PlusA_int_int2int$left_STA_0$result_STA_0$right_STA_1,
                                  && _1_sum__local$result_STA_0$value_LIT_0, (void *)8UL,
                                  && _1_sum__store_int$left_STA_0$right_STA_1, && _1_sum__goto$label_LAB_0,
                                  (void *)1UL, && _1_sum__local$result_STA_0$value_LIT_0,
                                  (void *)8UL, && _1_sum__load_int$left_STA_0$result_STA_0,
                                  && _1_sum__return_int$expr_STA_0}};

  {
  _1_sum_$sp[0] = _1_sum_$stack[0];
  _1_sum_$pc[0] = _1_sum_$array[0];
  goto *(*(_1_sum_$pc[0]));
  Lab_2000001: /* CIL Label */ ;
  _1_sum__return_int$expr_STA_0: /* CIL Label */ ;
  (_1_sum_$pc[0]) ++;
  return ((_1_sum_$sp[0] + 0)->_int);
  goto *(*(_1_sum_$pc[0]));
  _1_sum__store_int$left_STA_0$right_STA_1: /* CIL Label */ ;
  (_1_sum_$pc[0]) ++;
  *((int *)(_1_sum_$sp[0] + 0)->_void_star) = (_1_sum_$sp[0] + -1)->_int;
  _1_sum_$sp[0] += -2;
  goto *(*(_1_sum_$pc[0]));
  _1_sum__formal$result_STA_0$value_LIT_0: /* CIL Label */ ;
  (_1_sum_$pc[0]) ++;
  switch (*((int *)_1_sum_$pc[0])) {
  case 1: 
  (_1_sum_$sp[0] + 1)->_void_star = (void *)(& y);
  break;
  case 0: 
  (_1_sum_$sp[0] + 1)->_void_star = (void *)(& x);
  break;
  }
  (_1_sum_$sp[0]) ++;
  (_1_sum_$pc[0]) ++;
  goto *(*(_1_sum_$pc[0]));
  _1_sum__PlusA_int_int2int$left_STA_0$result_STA_0$right_STA_1: /* CIL Label */ ;
  (_1_sum_$pc[0]) ++;
  (_1_sum_$sp[0] + -1)->_int = (_1_sum_$sp[0] + 0)->_int + (_1_sum_$sp[0] + -1)->_int;
  (_1_sum_$sp[0]) --;
  goto *(*(_1_sum_$pc[0]));
  _1_sum__goto$label_LAB_0: /* CIL Label */ ;
  (_1_sum_$pc[0]) ++;
  _1_sum_$pc[0] += *((int *)_1_sum_$pc[0]);
  goto *(*(_1_sum_$pc[0]));
  _1_sum__load_int$left_STA_0$result_STA_0: /* CIL Label */ ;
  (_1_sum_$pc[0]) ++;
  (_1_sum_$sp[0] + 0)->_int = *((int *)(_1_sum_$sp[0] + 0)->_void_star);
  goto *(*(_1_sum_$pc[0]));
  _1_sum__local$result_STA_0$value_LIT_0: /* CIL Label */ ;
  (_1_sum_$pc[0]) ++;
  (_1_sum_$sp[0] + 1)->_void_star = (void *)(_1_sum_$locals + *((int *)_1_sum_$pc[0]));
  (_1_sum_$sp[0]) ++;
  (_1_sum_$pc[0]) ++;
  goto *(*(_1_sum_$pc[0]));
}
}
void megaInit(void) 
{ 


  {

}
}
int main(int _formal_argc , char **_formal_argv , char **_formal_envp ) 
{ 
  int x ;
  int y ;
  int z ;
  int tmp ;
  int _BARRIER_0 ;

  {
  megaInit();
  _global_argc = _formal_argc;
  _global_argv = _formal_argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;
  x = 6;
  y = 9;
  tmp = sum(x, y);
  z = tmp;
  printf((char const   */* __restrict  */)"The sum is %d.\n", z);
  return (0);
}
}
void init_tigress(void) 
{ 


  {
  return;
}
}
