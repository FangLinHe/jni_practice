#include <jni.h>
#include <stdio.h>
#include "TestJniPrimitive.h"

JNIEXPORT jdouble JNICALL Java_TestJniPrimitive_average
    (JNIEnv *env, jobject thisObj, jint n1, jint n2)
{
  printf("In C, the numbers are %d and %d\n", n1, n2);
  return (jdouble) (n1 + n2) / 2.0;
}
