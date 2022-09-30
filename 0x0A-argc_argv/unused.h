#ifdef UNUSED
#elif defined(__GNU__)
# define UNUSED(x) UNUSED_ ## x __attribute__((unused))
#elif defined(__LCLINT__)
# define UNUSED(x) /*@unsued@*/ x
#else
# define UNUSED(x) x
#endif
