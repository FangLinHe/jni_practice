# HelloJniCpp
Implementation of online [tutorial #2.2](https://www3.ntu.edu.sg/home/ehchua/programming/java/JavaNativeInterface.html).

## Steps
1. Write Java code: `HelloJniCpp.java`. Functions with _native_ means C/C++ implementations.
1. Compile Java code: `$ javac HelloJniCpp.java`.  It will generate `HelloJni.class`.
1. Generate C header file: `$ javah HelloJni.class`.  It will generate `HelloJniCpp.h`.
1. Write C++ implementations of functions: `HelloJniCppImpl.h` and `HelloJniCppImpl.cpp`.
1. Implement Jni interface (in C language): `HelloJniCpp.c`.
1. Set java path: `$ export JAVA_HOME=/Library/Java/JavaVirtualMachines/jdk1.8.0_131.jdk/Contents/Home/`.
1. Compile Jni library: `$ clang++ -I $JAVA_HOME/include -I $JAVA_HOME/include/darwin/ -shared -o libhello.jnilib HelloJniCpp.c HelloJniCppImpl.cpp`.  _clang++_ can be replaced by any C++ compiler, e.g. _g++_.  libxxx.jnilib is for MacOS, [reference](https://stackoverflow.com/questions/761639).
1. Run Java program: `$ java -Djava.library.path=. HelloJniCpp`.
