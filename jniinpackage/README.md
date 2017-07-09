# jniinpackage
Implementation of online tutorial[https://www3.ntu.edu.sg/home/ehchua/programming/java/JavaNativeInterface.html].

## Steps
0. Write Java code: `HelloJniCpp.java`. Functions with `native` means C/C++ implementations.
0. Compile Java code: `$ javac HelloJniCpp.java`.  It will generate `HelloJni.class`.
0. Generate C header file: `$ javah HelloJni.class`.  It will generate `HelloJniCpp.h`.
0. Write C++ implementations of functions: `HelloJniCppImpl.h` and `HelloJniCppImpl.cpp`.
0. Implement Jni interface (in C language): `HelloJniCpp.c`.
0. Set java path: `$ export JAVA_HOME=/Library/Java/JavaVirtualMachines/jdk1.8.0_131.jdk/Contents/Home/`.
0. Compile Jni library: `$ clang++ -I $JAVA_HOME/include -I $JAVA_HOME/include/darwin/ -shared -o libhello.jnilib HelloJniCpp.c HelloJniCppImpl.cpp`.  _clang++_ can be replaced by any C++ compiler, e.g. _g++_.  libxxx.jnilib is for MacOS, reference[https://stackoverflow.com/questions/761639].
0. Run Java program: `$ java -Djava.library.path=. HelloJniCpp`.
