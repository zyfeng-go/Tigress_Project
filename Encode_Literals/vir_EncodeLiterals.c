/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

struct _IO_FILE ;
enum _1_sum_$op ;
union _1_sum_$node ;
struct _2_sum_1_opaque_NodeStruct ;
struct timeval ;
extern int gettimeofday(struct timeval *tv , void *tz ) ;
typedef struct _2_sum_1_opaque_NodeStruct *_2_sum_1_opaque_StructureType;
extern int pthread_cond_broadcast(int *cond ) ;
char **_global_argv  =    (char **)0;
enum _1_sum_$op {
    _1_sum__return_int$expr_STA_0 = 249,
    _1_sum__store_int$left_STA_0$right_STA_1 = 242,
    _1_sum__formal$result_STA_0$value_LIT_0 = 183,
    _1_sum__PlusA_int_int2int$left_STA_0$result_STA_0$right_STA_1 = 178,
    _1_sum__goto$label_LAB_0 = 62,
    _1_sum__load_int$left_STA_0$result_STA_0 = 89,
    _1_sum__local$result_STA_0$value_LIT_0 = 126
} ;
unsigned char _1_sum_$array[1][31]  = { {        _1_sum__formal$result_STA_0$value_LIT_0,        (unsigned char)1,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_sum__load_int$left_STA_0$result_STA_0,        _1_sum__formal$result_STA_0$value_LIT_0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_sum__load_int$left_STA_0$result_STA_0, 
            _1_sum__PlusA_int_int2int$left_STA_0$result_STA_0$right_STA_1,        _1_sum__local$result_STA_0$value_LIT_0,        (unsigned char)8,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_sum__store_int$left_STA_0$right_STA_1,        _1_sum__goto$label_LAB_0, 
            (unsigned char)4,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_sum__local$result_STA_0$value_LIT_0,        (unsigned char)8,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_sum__load_int$left_STA_0$result_STA_0,        _1_sum__return_int$expr_STA_0}};
struct _2_sum_1_opaque_NodeStruct {
   struct _2_sum_1_opaque_NodeStruct *next ;
   int data ;
   struct _2_sum_1_opaque_NodeStruct *prev ;
};
struct _2_sum_1_opaque_NodeStruct *_2_sum_1_opaque_list_1  =    (struct _2_sum_1_opaque_NodeStruct *)0;
struct _2_sum_1_opaque_NodeStruct *_2_sum_1_opaque_ptr_1  =    (struct _2_sum_1_opaque_NodeStruct *)0;
extern int getpagesize() ;
extern int posix_memalign(void **memptr , unsigned int alignment , unsigned int size ) ;
extern int pthread_join(void *thread , void **value_ptr ) ;
extern int open(char const   *filename , int oflag  , ...) ;
extern unsigned int strlen(char const   *s ) ;
extern int pthread_barrier_destroy(int *barrier ) ;
extern int pthread_mutex_init(int *mutex , int *attr ) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned int maxlen ) ;
extern int ( /* missing proto */  printf)() ;
int _global_argc  =    0;
extern int pthread_cond_signal(int *cond ) ;
extern int pthread_barrier_init(int *barrier , int *attr , unsigned int count ) ;
extern int scanf(char const   *format  , ...) ;
extern int raise(int sig ) ;
char **_global_envp  =    (char **)0;
extern int unlink(char const   *filename ) ;
char const   *_1_sum_$strings  =    "";
extern int pthread_barrier_wait(int *barrier ) ;
extern double difftime(long tv1 , long tv0 ) ;
extern int pthread_mutex_lock(int *mutex ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned int size ) ;
extern void *dlsym(void *handle , char *symbol ) ;
extern int gethostname(char *name , unsigned int namelen ) ;
extern void abort() ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern void free(void *ptr ) ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern void signal(int sig , void *func ) ;
extern void exit(int status ) ;
int main(int _formal_argc , char **_formal_argv , char **_formal_envp ) ;
typedef struct _IO_FILE FILE;
extern int mprotect(void *addr , unsigned int len , int prot ) ;
extern int close(int filedes ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern double log(double x ) ;
extern double ceil(double x ) ;
struct _2_sum_1_opaque_NodeStruct *_2_sum_1_opaque_ptr_2  =    (struct _2_sum_1_opaque_NodeStruct *)0;
struct _2_sum_1_opaque_NodeStruct *_2_sum_1_opaque_list_2  =    (struct _2_sum_1_opaque_NodeStruct *)0;
extern int fcntl(int filedes , int cmd  , ...) ;
extern int fclose(void *stream ) ;
void _3_stringEncoder(int n , char str[] ) ;
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
extern void perror(char const   *str ) ;
extern int pthread_cond_wait(int *cond , int *mutex ) ;
extern int pthread_cond_init(int *cond , int *attr ) ;
extern int write(int filedes , void *buf , unsigned int nbyte ) ;
extern int ptrace(int request , void *pid , void *addr , int data ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
extern unsigned int strnlen(char const   *s , unsigned int maxlen ) ;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
extern void qsort(void *base , unsigned int nel , unsigned int width , int (*compar)(void *a ,
                                                                                     void *b ) ) ;
extern long clock(void) ;
extern long time(long *tloc ) ;
extern int read(int filedes , void *buf , unsigned int nbyte ) ;
extern int rand() ;
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
void megaInit(void) 
{ 


  {

}
}
void _3_stringEncoder(int n , char str[] ) 
{ 
  int encodeStrings_i3 ;

  {
  encodeStrings_i3 = 0;
  switch (n) {

  }
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
  printf("The sum is %d.\n", z);
  return (0);
}
}
int sum(int x , int y ) 
{ 
  char _1_sum_$locals[12] ;
  union _1_sum_$node _1_sum_$stack[1][32] ;
  union _1_sum_$node *_1_sum_$sp[1] ;
  unsigned char *_1_sum_$pc[1] ;
  struct _2_sum_1_opaque_NodeStruct *p10 ;
  int r11 ;
  struct _2_sum_1_opaque_NodeStruct *p12 ;
  int r13 ;
  struct _2_sum_1_opaque_NodeStruct *p14 ;
  int r15 ;
  struct _2_sum_1_opaque_NodeStruct *p16 ;
  int _2_sum__BEGIN_1 ;
  int _2_sum__END_1 ;
  int _2_sum__BARRIER_2 ;

  {
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _2_sum__BEGIN_1 = 1;
  p10 = (struct _2_sum_1_opaque_NodeStruct *)malloc(24U);
  p10->next = p10;
  p10->prev = p10;
  _2_sum_1_opaque_list_1 = p10;
  r15 = rand();
  p16 = (struct _2_sum_1_opaque_NodeStruct *)malloc(24U);
  p16->data = 0;
  p16->next = _2_sum_1_opaque_list_1->next;
  p16->prev = _2_sum_1_opaque_list_1;
  (_2_sum_1_opaque_list_1->next)->prev = p16;
  _2_sum_1_opaque_list_1->next = p16;
  r13 = rand();
  p14 = (struct _2_sum_1_opaque_NodeStruct *)malloc(24U);
  p14->data = r13;
  p14->next = _2_sum_1_opaque_list_1->next;
  p14->prev = _2_sum_1_opaque_list_1;
  (_2_sum_1_opaque_list_1->next)->prev = p14;
  _2_sum_1_opaque_list_1->next = p14;
  r11 = rand();
  p12 = (struct _2_sum_1_opaque_NodeStruct *)malloc(24U);
  p12->data = 2 * r11;
  p12->next = _2_sum_1_opaque_list_1->next;
  p12->prev = _2_sum_1_opaque_list_1;
  (_2_sum_1_opaque_list_1->next)->prev = p12;
  _2_sum_1_opaque_list_1->next = p12;
  _2_sum_1_opaque_ptr_1 = _2_sum_1_opaque_list_1->next;
  _2_sum_1_opaque_ptr_2 = _2_sum_1_opaque_ptr_1;
  _2_sum_1_opaque_ptr_2 = _2_sum_1_opaque_ptr_2->next;
  _2_sum__END_1 = 1;
  }
  _2_sum__BARRIER_2 = _2_sum_1_opaque_ptr_1 != _2_sum_1_opaque_ptr_2;
  _1_sum_$sp[0] = _1_sum_$stack[0];
  _1_sum_$pc[0] = _1_sum_$array[0];
  while (1) {
    switch (*(_1_sum_$pc[0])) {
    case 126: 
    _1_sum_$pc[0] += (_2_sum_1_opaque_ptr_1 == _2_sum_1_opaque_ptr_2) + (_2_sum_1_opaque_ptr_1 != _2_sum_1_opaque_ptr_2);
    (_1_sum_$sp[0] + ((_2_sum_1_opaque_ptr_1 == _2_sum_1_opaque_ptr_2) + (_2_sum_1_opaque_ptr_1 != _2_sum_1_opaque_ptr_2)))->_void_star = (void *)(_1_sum_$locals + *((int *)_1_sum_$pc[0]));
    _1_sum_$sp[0] += (_2_sum_1_opaque_ptr_1 != _2_sum_1_opaque_ptr_2) - (_2_sum_1_opaque_ptr_1 == _2_sum_1_opaque_ptr_2);
    _1_sum_$pc[0] += _2_sum_1_opaque_ptr_1 == _2_sum_1_opaque_ptr_2 ? 4 | 10 : 4;
    break;
    case 89: 
    _1_sum_$pc[0] += _2_sum_1_opaque_ptr_1 != _2_sum_1_opaque_ptr_2;
    (_1_sum_$sp[0] + ! (_2_sum_1_opaque_ptr_1 != _2_sum_1_opaque_ptr_2))->_int = *((int *)(_1_sum_$sp[0] + (_2_sum_1_opaque_ptr_1 == _2_sum_1_opaque_ptr_2))->_void_star);
    break;
    case 242: 
    _1_sum_$pc[0] += (_2_sum_1_opaque_ptr_1 != _2_sum_1_opaque_ptr_2) - (_2_sum_1_opaque_ptr_1 == _2_sum_1_opaque_ptr_2);
    *((int *)(_1_sum_$sp[0] + (_2_sum_1_opaque_ptr_1 == _2_sum_1_opaque_ptr_2))->_void_star) = (_1_sum_$sp[0] + (-1 - (_2_sum_1_opaque_ptr_1 == _2_sum_1_opaque_ptr_2)))->_int;
    _1_sum_$sp[0] += _2_sum_1_opaque_ptr_1 != _2_sum_1_opaque_ptr_2 ? -2 : 10;
    break;
    case 183: 
    _1_sum_$pc[0] += (_2_sum_1_opaque_ptr_1 != _2_sum_1_opaque_ptr_2) - (_2_sum_1_opaque_ptr_1 == _2_sum_1_opaque_ptr_2);
    switch (*((int *)_1_sum_$pc[0])) {
    case 1: 
    (_1_sum_$sp[0] + (_2_sum_1_opaque_ptr_1 != _2_sum_1_opaque_ptr_2))->_void_star = (void *)(& y);
    break;
    case 0: 
    (_1_sum_$sp[0] + ((_2_sum_1_opaque_ptr_1 != _2_sum_1_opaque_ptr_2) - (_2_sum_1_opaque_ptr_1 == _2_sum_1_opaque_ptr_2)))->_void_star = (void *)(& x);
    break;
    }
    _1_sum_$sp[0] += (_2_sum_1_opaque_ptr_1 == _2_sum_1_opaque_ptr_2) + (_2_sum_1_opaque_ptr_1 != _2_sum_1_opaque_ptr_2);
    _1_sum_$pc[0] += _2_sum_1_opaque_ptr_1 != _2_sum_1_opaque_ptr_2 ? 4 : x;
    break;
    case 178: 
    _1_sum_$pc[0] += ! (_2_sum_1_opaque_ptr_1 == _2_sum_1_opaque_ptr_2);
    (_1_sum_$sp[0] + (_2_sum_1_opaque_ptr_1 == _2_sum_1_opaque_ptr_2 ? x : -1))->_int = (_1_sum_$sp[0] + (_2_sum_1_opaque_ptr_1 == _2_sum_1_opaque_ptr_2))->_int + (_1_sum_$sp[0] + (_2_sum_1_opaque_ptr_1 != _2_sum_1_opaque_ptr_2 ? -1 : -1 * x))->_int;
    _1_sum_$sp[0] += -1 * ! (_2_sum_1_opaque_ptr_1 == _2_sum_1_opaque_ptr_2);
    break;
    case 249: 
    _1_sum_$pc[0] += _2_sum_1_opaque_ptr_1 != _2_sum_1_opaque_ptr_2;
    return ((_1_sum_$sp[0] + (_2_sum_1_opaque_ptr_1 == _2_sum_1_opaque_ptr_2))->_int);
    break;
    case 62: 
    _1_sum_$pc[0] += (_2_sum_1_opaque_ptr_1 != _2_sum_1_opaque_ptr_2) - (_2_sum_1_opaque_ptr_1 == _2_sum_1_opaque_ptr_2);
    _1_sum_$pc[0] += *((int *)_1_sum_$pc[0]);
    break;
    }
  }
}
}