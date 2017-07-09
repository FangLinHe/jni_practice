#include <jni.h>
#include <stdio.h>
#include "include/myjni_HelloJni.h"

JNIEXPORT void JNICALL Java_myjni_HelloJni_sayHello(JNIEnv *env, jobject thisObj)
{
  printf("Hello World!\n");
  return;
}

