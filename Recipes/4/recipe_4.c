/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

struct _2_init_tigress_1_opaque_NodeStruct ;
union _4_merged_$node ;
struct _IO_FILE ;
struct timeval ;
struct _2_init_tigress_1_opaque_NodeStruct {
   struct _2_init_tigress_1_opaque_NodeStruct *next ;
   int data ;
   struct _2_init_tigress_1_opaque_NodeStruct *prev ;
};
extern int gettimeofday(struct timeval *tv , void *tz ) ;
extern int pthread_cond_broadcast(int *cond ) ;
char **_global_argv  =    (char **)0;
extern int posix_memalign(void **memptr , unsigned int alignment , unsigned int size ) ;
extern int getpagesize() ;
extern int pthread_join(void *thread , void **value_ptr ) ;
extern int open(char const   *filename , int oflag  , ...) ;
extern unsigned int strlen(char const   *s ) ;
union _4_merged_$node {
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
extern int pthread_barrier_destroy(int *barrier ) ;
void merged(void *tigressRetVal , int x__6 , int y__7 , int whichBlock__8 ) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned int maxlen ) ;
extern int pthread_mutex_init(int *mutex , int *attr ) ;
unsigned long _1_entropy  =    1205847982700084983UL;
extern int ( /* missing proto */  printf)() ;
int _global_argc  =    0;
extern int pthread_cond_signal(int *cond ) ;
struct _2_init_tigress_1_opaque_NodeStruct *_2_init_tigress_1_opaque_ptr_2  =    (struct _2_init_tigress_1_opaque_NodeStruct *)0;
extern int pthread_barrier_init(int *barrier , int *attr , unsigned int count ) ;
extern int scanf(char const   *format  , ...) ;
extern int raise(int sig ) ;
char **_global_envp  =    (char **)0;
extern int unlink(char const   *filename ) ;
extern int pthread_barrier_wait(int *barrier ) ;
extern double difftime(long tv1 , long tv0 ) ;
extern int pthread_mutex_lock(int *mutex ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned int size ) ;
unsigned long _1_alwaysZero  =    0;
extern void *dlsym(void *handle , char *symbol ) ;
extern int gethostname(char *name , unsigned int namelen ) ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern void abort() ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern void free(void *ptr ) ;
char const   *_4_merged_$strings  =    "";
extern void exit(int status ) ;
int main(int _formal_argc , char **_formal_argv , char **_formal_envp ) ;
extern void signal(int sig , void *func ) ;
typedef struct _IO_FILE FILE;
extern int close(int filedes ) ;
extern int mprotect(void *addr , unsigned int len , int prot ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern double log(double x ) ;
extern double ceil(double x ) ;
struct _2_init_tigress_1_opaque_NodeStruct *_2_init_tigress_1_opaque_ptr_1  =    (struct _2_init_tigress_1_opaque_NodeStruct *)0;
extern int fcntl(int filedes , int cmd  , ...) ;
extern int fclose(void *stream ) ;
extern void perror(char const   *str ) ;
extern int pthread_cond_wait(int *cond , int *mutex ) ;
extern int write(int filedes , void *buf , unsigned int nbyte ) ;
extern int pthread_cond_init(int *cond , int *attr ) ;
typedef struct _2_init_tigress_1_opaque_NodeStruct *_2_init_tigress_1_opaque_StructureType;
extern int ptrace(int request , void *pid , void *addr , int data ) ;
struct _2_init_tigress_1_opaque_NodeStruct *_2_init_tigress_1_opaque_list_1  =    (struct _2_init_tigress_1_opaque_NodeStruct *)0;
void _5_stringEncoder(int n , char str[] ) ;
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
extern int rand() ;
extern int read(int filedes , void *buf , unsigned int nbyte ) ;
extern int strcmp(char const   *a , char const   *b ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern double sqrt(double x ) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern int snprintf(char *str , unsigned int size , char const   *format  , ...) ;
extern void *malloc(unsigned int size ) ;
extern int nanosleep(int *rqtp , int *rmtp ) ;
extern int pthread_mutex_unlock(int *mutex ) ;
extern int pthread_create(void *thread , void *attr , void *start_routine , void *arg ) ;
extern int atoi(char const   *s ) ;
unsigned int _2_init_tigress__opaque_array[30]  = 
  {      258,      691,      3,      308, 
        425,      5,      278,      537, 
        5,      3,      187,      7, 
        33,      12,      57,      358, 
        670,      43,      448,      159, 
        85,      468,      292,      13, 
        143,      243,      80,      498, 
        369};
extern int fscanf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int fseek(struct _IO_FILE *stream , long offs , int whence ) ;
struct _2_init_tigress_1_opaque_NodeStruct *_2_init_tigress_1_opaque_list_2  =    (struct _2_init_tigress_1_opaque_NodeStruct *)0;
void megaInit(void) ;
void merged(void *tigressRetVal , int x__6 , int y__7 , int whichBlock__8 ) 
{ 
  struct _2_init_tigress_1_opaque_NodeStruct *p1__0 ;
  int i2__1 ;
  struct _2_init_tigress_1_opaque_NodeStruct *p3__2 ;
  int _2_init_tigress__BEGIN_1__3 ;
  int _2_init_tigress__END_1__4 ;
  char _4_merged_$locals[44] ;
  union _4_merged_$node _4_merged_$stack[1][32] ;
  union _4_merged_$node *_4_merged_$sp[1] ;
  void **_4_merged_$pc[1] ;
  void *_4_merged_$array[1][96]  = {{&& _4_merged__constant_int$result_STA_0$value_LIT_0,
                                     (void *)0UL, && _4_merged__formal$result_STA_0$value_LIT_0,
                                     (void *)3UL, && _4_merged__load_int$left_STA_0$result_STA_0,
                                     && _4_merged__Eq_int_int2int$left_STA_0$result_STA_0$right_STA_1,
                                     && _4_merged__branchIfTrue$expr_STA_0$label_LAB_0,
                                     (void *)3UL, && _4_merged__goto$label_LAB_0,
                                     (void *)14UL, && _4_merged__atomic$func_LIT_0,
                                     (void *)1UL, && _4_merged__constant_int$result_STA_0$value_LIT_0,
                                     (void *)1UL, && _4_merged__local$result_STA_0$value_LIT_0,
                                     (void *)20UL, && _4_merged__store_int$left_STA_0$right_STA_1,
                                     && _4_merged__goto$label_LAB_0, (void *)1UL,
                                     && _4_merged__goto$label_LAB_0, (void *)1UL,
                                     && _4_merged__goto$label_LAB_0, (void *)73UL,
                                     && _4_merged__constant_int$result_STA_0$value_LIT_0,
                                     (void *)1UL, && _4_merged__formal$result_STA_0$value_LIT_0,
                                     (void *)3UL, && _4_merged__load_int$left_STA_0$result_STA_0,
                                     && _4_merged__Eq_int_int2int$left_STA_0$result_STA_0$right_STA_1,
                                     && _4_merged__branchIfTrue$expr_STA_0$label_LAB_0,
                                     (void *)3UL, && _4_merged__goto$label_LAB_0,
                                     (void *)16UL, && _4_merged__constant_int$result_STA_0$value_LIT_0,
                                     (void *)4UL, && _4_merged__formal$result_STA_0$value_LIT_0,
                                     (void *)1UL, && _4_merged__load_int$left_STA_0$result_STA_0,
                                     && _4_merged__Mult_int_int2int$left_STA_0$result_STA_0$right_STA_1,
                                     && _4_merged__formal$result_STA_0$value_LIT_0,
                                     (void *)0UL, && _4_merged__load_void_star$left_STA_0$result_STA_0,
                                     && _4_merged__convert_void_star2void_star$left_STA_0$result_STA_0,
                                     && _4_merged__store_int$left_STA_0$right_STA_1,
                                     && _4_merged__goto$label_LAB_0, (void *)1UL,
                                     && _4_merged__goto$label_LAB_0, (void *)48UL,
                                     && _4_merged__constant_int$result_STA_0$value_LIT_0,
                                     (void *)2UL, && _4_merged__formal$result_STA_0$value_LIT_0,
                                     (void *)3UL, && _4_merged__load_int$left_STA_0$result_STA_0,
                                     && _4_merged__Eq_int_int2int$left_STA_0$result_STA_0$right_STA_1,
                                     && _4_merged__branchIfTrue$expr_STA_0$label_LAB_0,
                                     (void *)3UL, && _4_merged__goto$label_LAB_0,
                                     (void *)36UL, && _4_merged__local$result_STA_0$value_LIT_0,
                                     (void *)24UL, && _4_merged__formal$result_STA_0$value_LIT_0,
                                     (void *)1UL, && _4_merged__store_void_star$right_STA_0$left_STA_1,
                                     && _4_merged__formal$result_STA_0$value_LIT_0,
                                     (void *)1UL, && _4_merged__load_int$left_STA_0$result_STA_0,
                                     && _4_merged__local$result_STA_0$value_LIT_0,
                                     (void *)32UL, && _4_merged__store_int$left_STA_0$right_STA_1,
                                     && _4_merged__local$result_STA_0$value_LIT_0,
                                     (void *)40UL, && _4_merged__load_int$left_STA_0$result_STA_0,
                                     && _4_merged__local$result_STA_0$value_LIT_0,
                                     (void *)36UL, && _4_merged__store_int$left_STA_0$right_STA_1,
                                     && _4_merged__call$func_LIT_0, (void *)1UL, && _4_merged__formal$result_STA_0$value_LIT_0,
                                     (void *)2UL, && _4_merged__load_int$left_STA_0$result_STA_0,
                                     && _4_merged__formal$result_STA_0$value_LIT_0,
                                     (void *)1UL, && _4_merged__load_int$left_STA_0$result_STA_0,
                                     && _4_merged__PlusA_int_int2int$left_STA_0$result_STA_0$right_STA_1,
                                     && _4_merged__formal$result_STA_0$value_LIT_0,
                                     (void *)0UL, && _4_merged__load_void_star$left_STA_0$result_STA_0,
                                     && _4_merged__convert_void_star2void_star$left_STA_0$result_STA_0,
                                     && _4_merged__store_int$left_STA_0$right_STA_1,
                                     && _4_merged__goto$label_LAB_0, (void *)1UL,
                                     && _4_merged__goto$label_LAB_0, (void *)3UL,
                                     && _4_merged__goto$label_LAB_0, (void *)1UL,
                                     && _4_merged__returnVoid$}};

  {
  _4_merged_$sp[0] = _4_merged_$stack[0];
  _4_merged_$pc[0] = _4_merged_$array[0];
  goto *(*(_4_merged_$pc[0]));
  Lab_2000002: /* CIL Label */ ;
  _4_merged__Mult_int_int2int$left_STA_0$result_STA_0$right_STA_1: /* CIL Label */ ;
  (_4_merged_$pc[0]) ++;
  (_4_merged_$sp[0] + -1)->_int = (_4_merged_$sp[0] + 0)->_int * (_4_merged_$sp[0] + -1)->_int;
  (_4_merged_$sp[0]) --;
  goto *(*(_4_merged_$pc[0]));
  _4_merged__local$result_STA_0$value_LIT_0: /* CIL Label */ ;
  (_4_merged_$pc[0]) ++;
  (_4_merged_$sp[0] + 1)->_void_star = (void *)(_4_merged_$locals + *((int *)_4_merged_$pc[0]));
  (_4_merged_$sp[0]) ++;
  (_4_merged_$pc[0]) ++;
  goto *(*(_4_merged_$pc[0]));
  _4_merged__store_void_star$right_STA_0$left_STA_1: /* CIL Label */ ;
  (_4_merged_$pc[0]) ++;
  *((void **)(_4_merged_$sp[0] + -1)->_void_star) = (_4_merged_$sp[0] + 0)->_void_star;
  _4_merged_$sp[0] += -2;
  goto *(*(_4_merged_$pc[0]));
  _4_merged__convert_void_star2void_star$left_STA_0$result_STA_0: /* CIL Label */ ;
  (_4_merged_$pc[0]) ++;
  (_4_merged_$sp[0] + 0)->_void_star = (_4_merged_$sp[0] + 0)->_void_star;
  goto *(*(_4_merged_$pc[0]));
  _4_merged__constant_int$result_STA_0$value_LIT_0: /* CIL Label */ ;
  (_4_merged_$pc[0]) ++;
  (_4_merged_$sp[0] + 1)->_int = *((int *)_4_merged_$pc[0]);
  (_4_merged_$sp[0]) ++;
  (_4_merged_$pc[0]) ++;
  goto *(*(_4_merged_$pc[0]));
  _4_merged__store_int$left_STA_0$right_STA_1: /* CIL Label */ ;
  (_4_merged_$pc[0]) ++;
  *((int *)(_4_merged_$sp[0] + 0)->_void_star) = (_4_merged_$sp[0] + -1)->_int;
  _4_merged_$sp[0] += -2;
  goto *(*(_4_merged_$pc[0]));
  _4_merged__atomic$func_LIT_0: /* CIL Label */ ;
  (_4_merged_$pc[0]) ++;
  switch (*((int *)_4_merged_$pc[0])) {
  case 1: 
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _2_init_tigress__BEGIN_1__3 = 1;
  p1__0 = (struct _2_init_tigress_1_opaque_NodeStruct *)malloc(sizeof(struct _2_init_tigress_1_opaque_NodeStruct ));
  p1__0->next = p1__0;
  p1__0->prev = p1__0;
  _2_init_tigress_1_opaque_list_1 = p1__0;
  i2__1 = 0;
  while (i2__1 < 4) {
    p3__2 = (struct _2_init_tigress_1_opaque_NodeStruct *)malloc(sizeof(struct _2_init_tigress_1_opaque_NodeStruct ));
    p3__2->data = i2__1 * (((_1_entropy + 9) + 1UL) + ((- _1_entropy - 1UL) | (- 9 - 1UL)));
    p3__2->next = _2_init_tigress_1_opaque_list_1->next;
    p3__2->prev = _2_init_tigress_1_opaque_list_1;
    (_2_init_tigress_1_opaque_list_1->next)->prev = p3__2;
    _2_init_tigress_1_opaque_list_1->next = p3__2;
    i2__1 ++;
  }
  _2_init_tigress_1_opaque_ptr_1 = _2_init_tigress_1_opaque_list_1->next;
  _2_init_tigress_1_opaque_ptr_2 = _2_init_tigress_1_opaque_ptr_1;
  _2_init_tigress_1_opaque_ptr_2 = _2_init_tigress_1_opaque_ptr_2->next;
  _2_init_tigress__END_1__4 = 1;
  }
  break;
  }
  (_4_merged_$pc[0]) ++;
  goto *(*(_4_merged_$pc[0]));
  _4_merged__Eq_int_int2int$left_STA_0$result_STA_0$right_STA_1: /* CIL Label */ ;
  (_4_merged_$pc[0]) ++;
  (_4_merged_$sp[0] + -1)->_int = (_4_merged_$sp[0] + 0)->_int == (_4_merged_$sp[0] + -1)->_int;
  (_4_merged_$sp[0]) --;
  goto *(*(_4_merged_$pc[0]));
  _4_merged__goto$label_LAB_0: /* CIL Label */ ;
  (_4_merged_$pc[0]) ++;
  _4_merged_$pc[0] += *((int *)_4_merged_$pc[0]);
  goto *(*(_4_merged_$pc[0]));
  _4_merged__returnVoid$: /* CIL Label */ ;
  (_4_merged_$pc[0]) ++;
  return;
  goto *(*(_4_merged_$pc[0]));
  _4_merged__call$func_LIT_0: /* CIL Label */ ;
  (_4_merged_$pc[0]) ++;
  switch (*((int *)_4_merged_$pc[0])) {
  case 1: 
  merged(*((int **)(_4_merged_$locals + 24)), *((int *)(_4_merged_$locals + 32)),
         *((int *)(_4_merged_$locals + 36)), 1);
  break;
  }
  (_4_merged_$pc[0]) ++;
  goto *(*(_4_merged_$pc[0]));
  _4_merged__load_void_star$left_STA_0$result_STA_0: /* CIL Label */ ;
  (_4_merged_$pc[0]) ++;
  (_4_merged_$sp[0] + 0)->_void_star = *((void **)(_4_merged_$sp[0] + 0)->_void_star);
  goto *(*(_4_merged_$pc[0]));
  _4_merged__load_int$left_STA_0$result_STA_0: /* CIL Label */ ;
  (_4_merged_$pc[0]) ++;
  (_4_merged_$sp[0] + 0)->_int = *((int *)(_4_merged_$sp[0] + 0)->_void_star);
  goto *(*(_4_merged_$pc[0]));
  _4_merged__PlusA_int_int2int$left_STA_0$result_STA_0$right_STA_1: /* CIL Label */ ;
  (_4_merged_$pc[0]) ++;
  (_4_merged_$sp[0] + -1)->_int = (_4_merged_$sp[0] + 0)->_int + (_4_merged_$sp[0] + -1)->_int;
  (_4_merged_$sp[0]) --;
  goto *(*(_4_merged_$pc[0]));
  _4_merged__branchIfTrue$expr_STA_0$label_LAB_0: /* CIL Label */ ;
  (_4_merged_$pc[0]) ++;
  if ((_4_merged_$sp[0] + 0)->_int) {
    _4_merged_$pc[0] += *((int *)_4_merged_$pc[0]);
  } else {
    (_4_merged_$pc[0]) ++;
  }
  (_4_merged_$sp[0]) --;
  goto *(*(_4_merged_$pc[0]));
  _4_merged__formal$result_STA_0$value_LIT_0: /* CIL Label */ ;
  (_4_merged_$pc[0]) ++;
  switch (*((int *)_4_merged_$pc[0])) {
  case 3: 
  (_4_merged_$sp[0] + 1)->_void_star = (void *)(& whichBlock__8);
  break;
  case 0: 
  (_4_merged_$sp[0] + 1)->_void_star = (void *)(& tigressRetVal);
  break;
  case 1: 
  (_4_merged_$sp[0] + 1)->_void_star = (void *)(& x__6);
  break;
  case 2: 
  (_4_merged_$sp[0] + 1)->_void_star = (void *)(& y__7);
  break;
  }
  (_4_merged_$sp[0]) ++;
  (_4_merged_$pc[0]) ++;
  goto *(*(_4_merged_$pc[0]));
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
  merged(& tmp, x, y, 2);
  z = tmp;
  printf("The sum is %d.\n", z);
  return (0);
}
}
void _5_stringEncoder(int n , char str[] ) 
{ 
  int encodeStrings_i3 ;

  {
  encodeStrings_i3 = 0;
  switch (n) {

  }
}
}
