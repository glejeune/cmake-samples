#if defined(_WIN32) || defined(__WIN32__)
  #include <windows.h>
  #define DYNLIB_HANDLE         HMODULE
  #define DYNLIB_LOAD( a )      LoadLibraryA( a )
  #define DYNLIB_GETSYM( a, b ) GetProcAddress( a, b )
  #define DYNLIB_UNLOAD( a )    !FreeLibrary( a )
  #define DYNLIB_ERROR( )       "Unknown Error"
#elif defined(linux) || defined(__linux) || defined(darwin) || defined(__darwin)
  #include <dlfcn.h>
  #define DYNLIB_HANDLE         void*
  #define DYNLIB_LOAD( a )      dlopen( a, RTLD_LAZY )
  #define DYNLIB_GETSYM( a, b ) dlsym( a, b )
  #define DYNLIB_UNLOAD( a )    dlclose( a )
  #define DYNLIB_ERROR( )       dlerror( )
#endif
