# jniinpackage
Implementation of online [tutorial #2.3](https://www3.ntu.edu.sg/home/ehchua/programming/java/JavaNativeInterface.html).

## Steps
1. Create directory for the java package: `$ mkdir myjni`.
1. Write Java code: `myjni/HelloJni.java`.  _package myjni_ declares the package name.
1. Compile Java code: `$ javac myjni/HelloJni.java`.  It will generate `myjni/HelloJni.class`.
1. Generate C header file: `$ javah -d include myjni.HelloJni`.  It will generate `include/myjni_HelloJni.h`.
1. Implement Jni interface (in C language): `myjni_HelloJni.c`.
1. Set java path: `$ export JAVA_HOME=/Library/Java/JavaVirtualMachines/jdk1.8.0_131.jdk/Contents/Home/`.
1. Compile Jni library: `$ clang -I $JAVA_HOME/include -I $JAVA_HOME/include/darwin/ -shared -o libhello.jnilib myjni_HelloJni.c`.  _clang_ can be replaced by any C compiler, e.g. _gcc_.  libxxx.jnilib is for MacOS, [reference](https://stackoverflow.com/questions/761639).
1. Run Java program: `$ java -Djava.library.path=. myjni.HelloJni`.
