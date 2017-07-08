#include <jni.h>
#include "HelloJniCpp.h"
#include "HelloJniCppImpl.h"

JNIEXPORT void JNICALL Java_HelloJniCpp_sayHello
(JNIEnv *env, jobject thisObj)
{
  sayHello();
}
