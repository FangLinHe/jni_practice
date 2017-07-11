# jniinpackage
Implementation of online [tutorial #4](https://www3.ntu.edu.sg/home/ehchua/programming/java/JavaNativeInterface.html).

## Steps
1. Write Java code: `TestJniPrimitive.java`.
1. Compile Java code: `$ javac TestJniPrimitive.java`.  It will generate `TestJniPrimitive.class`.
1. Generate C header file: `$ javah TestJniPrimitive`.  It will generate `TestJniPrimitive.h`.
1. Implement Jni interface (in C language): `TestJniPrimitive.c`.
1. Set java path: `$ export JAVA_HOME=/Library/Java/JavaVirtualMachines/jdk1.8.0_131.jdk/Contents/Home/`.
1. Compile Jni library: `$ clang -I $JAVA_HOME/include -I $JAVA_HOME/include/darwin/ -shared -o libhello.jnilib TestJniPrimitive.c`.  _clang_ can be replaced by any C compiler, e.g. _gcc_.  libxxx.jnilib is for MacOS, [reference](https://stackoverflow.com/questions/761639).
1. Run Java program: `$ java -Djava.library.path=. TestJniPrimitive`.
