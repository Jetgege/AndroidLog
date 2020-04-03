#include <jni.h>
#include <string>
//android log 输出
#include <android/log.h>


#define TAG "JNIJOG"
//__VA_ARGS__ 代表可变参数的宏
//jni中引用android log.h头文件即可调用安卓log输出函数
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, TAG, __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, TAG, __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN, TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, TAG, __VA_ARGS__)
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_jnilog_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {

    LOGD("这是ANDROID_LOG_DEBUG");
    LOGI("这是ANDROID_LOG_INFO");
    LOGW("这是ANDROID_LOG_WARN");
    LOGE("这是ANDROID_LOG_ERROR");

    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
