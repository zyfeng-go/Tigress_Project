/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

union _2_sum_$node ;
struct _IO_FILE ;
struct timeval ;
enum _2_sum_$op ;
extern int gettimeofday(struct timeval *tv , void *tz ) ;
extern int pthread_cond_broadcast(int *cond ) ;
char **_global_argv  =    (char **)0;
char const   *_2_sum_$strings  =    "PID: %d\n\000";
extern int posix_memalign(void **memptr , unsigned int alignment , unsigned int size ) ;
extern int getpagesize() ;
enum _2_sum_$op {
    _2_sum__string$result_STA_0$value_LIT_0 = 194,
    _2_sum__return_int$expr_STA_0 = 221,
    _2_sum__PlusA_int_int2int$left_STA_0$result_STA_0$right_STA_1 = 102,
    _2_sum__formal$result_STA_0$value_LIT_0 = 213,
    _2_sum__store_void_star$left_STA_0$right_STA_1 = 128,
    _2_sum__local$result_STA_0$value_LIT_0 = 38,
    _2_sum__store_int$left_STA_0$right_STA_1 = 246,
    _2_sum__convert_void_star2void_star$left_STA_0$result_STA_0 = 14,
    _2_sum__call$func_LIT_0 = 241,
    _2_sum__load_int$left_STA_0$result_STA_0 = 48,
    _2_sum__goto$label_LAB_0 = 81
} ;
unsigned char _2_sum_$array[1][89]  = { {        _2_sum__call$func_LIT_0,        (unsigned char)1,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _2_sum__local$result_STA_0$value_LIT_0,        (unsigned char)12,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _2_sum__load_int$left_STA_0$result_STA_0,        _2_sum__local$result_STA_0$value_LIT_0, 
            (unsigned char)8,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _2_sum__store_int$left_STA_0$right_STA_1,        _2_sum__local$result_STA_0$value_LIT_0,        (unsigned char)8,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _2_sum__load_int$left_STA_0$result_STA_0,        _2_sum__local$result_STA_0$value_LIT_0, 
            (unsigned char)16,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _2_sum__store_int$left_STA_0$right_STA_1,        _2_sum__string$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _2_sum__convert_void_star2void_star$left_STA_0$result_STA_0,        _2_sum__local$result_STA_0$value_LIT_0, 
            (unsigned char)24,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _2_sum__store_void_star$left_STA_0$right_STA_1,        _2_sum__local$result_STA_0$value_LIT_0,        (unsigned char)16,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _2_sum__load_int$left_STA_0$result_STA_0,        _2_sum__local$result_STA_0$value_LIT_0, 
            (unsigned char)32,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _2_sum__store_int$left_STA_0$right_STA_1,        _2_sum__call$func_LIT_0,        (unsigned char)2,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _2_sum__formal$result_STA_0$value_LIT_0,        (unsigned char)1, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _2_sum__load_int$left_STA_0$result_STA_0, 
            _2_sum__formal$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _2_sum__load_int$left_STA_0$result_STA_0,        _2_sum__PlusA_int_int2int$left_STA_0$result_STA_0$right_STA_1,        _2_sum__local$result_STA_0$value_LIT_0, 
            (unsigned char)36,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _2_sum__store_int$left_STA_0$right_STA_1,        _2_sum__goto$label_LAB_0,        (unsigned char)4,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _2_sum__local$result_STA_0$value_LIT_0,        (unsigned char)36, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _2_sum__load_int$left_STA_0$result_STA_0, 
            _2_sum__return_int$expr_STA_0}};
extern int pthread_join(void *thread , void **value_ptr ) ;
extern unsigned int strlen(char const   *s ) ;
extern int open(char const   *filename , int oflag  , ...) ;
extern int pthread_barrier_destroy(int *barrier ) ;
extern int pthread_mutex_init(int *mutex , int *attr ) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned int maxlen ) ;
extern int printf(char const   * __restrict  __format  , ...) ;
int _global_argc  =    0;
extern int pthread_cond_signal(int *cond ) ;
typedef int __pid_t;
extern  __attribute__((__nothrow__)) __pid_t ( __attribute__((__leaf__)) getpid)(void) ;
extern int scanf(char const   *format  , ...) ;
extern int raise(int sig ) ;
extern int pthread_barrier_init(int *barrier , int *attr , unsigned int count ) ;
char **_global_envp  =    (char **)0;
extern int unlink(char const   *filename ) ;
extern int pthread_barrier_wait(int *barrier ) ;
extern double difftime(long tv1 , long tv0 ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned int size ) ;
extern int pthread_mutex_lock(int *mutex ) ;
extern void *dlsym(void *handle , char *symbol ) ;
extern int gethostname(char *name , unsigned int namelen ) ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern void abort() ;
extern void free(void *ptr ) ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
void _1_init_tigress__externalFunctionPtrArray_i$nit(void) ;
extern void exit(int status ) ;
int main(int _formal_argc , char **_formal_argv , char **_formal_envp ) ;
extern void signal(int sig , void *func ) ;
void init_tigress(void) ;
typedef struct _IO_FILE FILE;
extern int close(int filedes ) ;
extern int mprotect(void *addr , unsigned int len , int prot ) ;
extern double log(double x ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern double ceil(double x ) ;
void *_1_init_tigress__externalFunctionPtrArray[1] ;
extern int fcntl(int filedes , int cmd  , ...) ;
extern int fclose(void *stream ) ;
extern void perror(char const   *str ) ;
extern int pthread_cond_wait(int *cond , int *mutex ) ;
extern int pthread_cond_init(int *cond , int *attr ) ;
extern int write(int filedes , void *buf , unsigned int nbyte ) ;
extern int ptrace(int request , void *pid , void *addr , int data ) ;
extern unsigned int strnlen(char const   *s , unsigned int maxlen ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
union _2_sum_$node {
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
extern long clock(void) ;
extern void qsort(void *base , unsigned int nel , unsigned int width , int (*compar)(void *a ,
                                                                                     void *b ) ) ;
extern long time(long *tloc ) ;
extern int rand() ;
extern int read(int filedes , void *buf , unsigned int nbyte ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern int strcmp(char const   *a , char const   *b ) ;
extern double sqrt(double x ) ;
extern int snprintf(char *str , unsigned int size , char const   *format  , ...) ;
extern void *malloc(unsigned int size ) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern int nanosleep(int *rqtp , int *rmtp ) ;
extern int pthread_mutex_unlock(int *mutex ) ;
extern int pthread_create(void *thread , void *attr , void *start_routine , void *arg ) ;
extern int atoi(char const   *s ) ;
extern int fscanf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int fseek(struct _IO_FILE *stream , long offs , int whence ) ;
int sum(int x , int y ) ;
void megaInit(void) ;
void init_tigress(void) 
{ 
  void *externalAddr1 ;

  {
  externalAddr1 = dlsym((void *)0, "getpid");
  _1_init_tigress__externalFunctionPtrArray[0] = externalAddr1;
  return;
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
int sum(int x , int y ) 
{ 
  char _2_sum_$locals[40] ;
  union _2_sum_$node _2_sum_$stack[1][32] ;
  union _2_sum_$node *_2_sum_$sp[1] ;
  unsigned char *_2_sum_$pc[1] ;

  {
  _2_sum_$sp[0] = _2_sum_$stack[0];
  _2_sum_$pc[0] = _2_sum_$array[0];
  while (1) {
    switch (*(_2_sum_$pc[0])) {
    case _2_sum__goto$label_LAB_0: 
    (_2_sum_$pc[0]) ++;
    _2_sum_$pc[0] += *((int *)_2_sum_$pc[0]);
    break;
    case _2_sum__convert_void_star2void_star$left_STA_0$result_STA_0: 
    (_2_sum_$pc[0]) ++;
    (_2_sum_$sp[0] + 0)->_void_star = (_2_sum_$sp[0] + 0)->_void_star;
    break;
    case _2_sum__return_int$expr_STA_0: 
    (_2_sum_$pc[0]) ++;
    return ((_2_sum_$sp[0] + 0)->_int);
    break;
    case _2_sum__load_int$left_STA_0$result_STA_0: 
    (_2_sum_$pc[0]) ++;
    (_2_sum_$sp[0] + 0)->_int = *((int *)(_2_sum_$sp[0] + 0)->_void_star);
    break;
    case _2_sum__local$result_STA_0$value_LIT_0: 
    (_2_sum_$pc[0]) ++;
    (_2_sum_$sp[0] + 1)->_void_star = (void *)(_2_sum_$locals + *((int *)_2_sum_$pc[0]));
    (_2_sum_$sp[0]) ++;
    _2_sum_$pc[0] += 4;
    break;
    case _2_sum__PlusA_int_int2int$left_STA_0$result_STA_0$right_STA_1: 
    (_2_sum_$pc[0]) ++;
    (_2_sum_$sp[0] + -1)->_int = (_2_sum_$sp[0] + 0)->_int + (_2_sum_$sp[0] + -1)->_int;
    (_2_sum_$sp[0]) --;
    break;
    case _2_sum__string$result_STA_0$value_LIT_0: 
    (_2_sum_$pc[0]) ++;
    (_2_sum_$sp[0] + 1)->_void_star = (void *)(_2_sum_$strings + *((int *)_2_sum_$pc[0]));
    (_2_sum_$sp[0]) ++;
    _2_sum_$pc[0] += 4;
    break;
    case _2_sum__formal$result_STA_0$value_LIT_0: 
    (_2_sum_$pc[0]) ++;
    switch (*((int *)_2_sum_$pc[0])) {
    case 1: 
    (_2_sum_$sp[0] + 1)->_void_star = (void *)(& y);
    break;
    case 0: 
    (_2_sum_$sp[0] + 1)->_void_star = (void *)(& x);
    break;
    }
    (_2_sum_$sp[0]) ++;
    _2_sum_$pc[0] += 4;
    break;
    case _2_sum__call$func_LIT_0: 
    (_2_sum_$pc[0]) ++;
    switch (*((int *)_2_sum_$pc[0])) {
    case 2: 
    printf(*((char const   * __restrict  *)(_2_sum_$locals + 24)), *((int *)(_2_sum_$locals + 32)));
    break;
    case 1: 
    *((int *)(_2_sum_$locals + 12)) = ((__pid_t ( __attribute__((__leaf__)) (*))(void))_1_init_tigress__externalFunctionPtrArray[0])();
    break;
    }
    _2_sum_$pc[0] += 4;
    break;
    case _2_sum__store_int$left_STA_0$right_STA_1: 
    (_2_sum_$pc[0]) ++;
    *((int *)(_2_sum_$sp[0] + 0)->_void_star) = (_2_sum_$sp[0] + -1)->_int;
    _2_sum_$sp[0] += -2;
    break;
    case _2_sum__store_void_star$left_STA_0$right_STA_1: 
    (_2_sum_$pc[0]) ++;
    *((void **)(_2_sum_$sp[0] + 0)->_void_star) = (_2_sum_$sp[0] + -1)->_void_star;
    _2_sum_$sp[0] += -2;
    break;
    }
  }
}
}
void _1_init_tigress__externalFunctionPtrArray_i$nit(void) 
{ 


  {

}
}
void megaInit(void) 
{ 


  {
  _1_init_tigress__externalFunctionPtrArray_i$nit();
}
}
