/* Generated by GIWS (version 2.0.1) with command:
giws -e -r -f UIWidget.giws.xml
*/
/*

This is generated code.

This software is a computer program whose purpose is to hide the complexity
of accessing Java objects/methods from C++ code.

This software is governed by the CeCILL-B license under French law and
abiding by the rules of distribution of free software.  You can  use,
modify and/ or redistribute the software under the terms of the CeCILL-B
license as circulated by CEA, CNRS and INRIA at the following URL
"http://www.cecill.info".

As a counterpart to the access to the source code and  rights to copy,
modify and redistribute granted by the license, users are provided only
with a limited warranty  and the software's author,  the holder of the
economic rights,  and the successive licensors  have only  limited
liability.

In this respect, the user's attention is drawn to the risks associated
with loading,  using,  modifying and/or developing or reproducing the
software by the user in light of its specific status of free software,
that may mean  that it is complicated to manipulate,  and  that  also
therefore means  that it is reserved for developers  and  experienced
professionals having in-depth computer knowledge. Users are therefore
encouraged to load and test the software's suitability as regards their
requirements in conditions enabling the security of their systems and/or
data to be ensured and,  more generally, to use and operate it in the
same conditions as regards security.

The fact that you are presently reading this means that you have had
knowledge of the CeCILL-B license and that you accept its terms.
*/


#ifndef __ORG_SCILAB_MODULES_UIWIDGET_UIWIDGET__
#define __ORG_SCILAB_MODULES_UIWIDGET_UIWIDGET__
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <jni.h>

#include "GiwsException.hxx"

#if defined(_MSC_VER) /* Defined anyway with Visual */
#include <Windows.h>
#else
typedef signed char byte;
#endif


#ifndef GIWSEXPORT
# if defined(_MSC_VER) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define GIWSEXPORT
#   else
#     define GIWSEXPORT __declspec(dllexport)
#   endif
# else
#   if __GNUC__ >= 4
#     define GIWSEXPORT __attribute__ ((visibility ("default")))
#   else
#     define GIWSEXPORT
#   endif
# endif
#endif

namespace org_scilab_modules_uiwidget
{
class GIWSEXPORT UIWidget
{

private:
    JavaVM * jvm;

protected:
    jmethodID jintuiwidgetLoadjstringjava_lang_StringID; // cache method id
    jmethodID jintuiwidgetID; // cache method id
    jmethodID voiduigetjintintjstringjava_lang_StringjintintID; // cache method id
    jmethodID voiduisetjintintID; // cache method id
    jmethodID jbooleanuiisValidjintintID; // cache method id
    jmethodID voiduishowWindowjintintID; // cache method id
    jmethodID voiduideletejintintID; // cache method id
    jmethodID voiduideleteAllID; // cache method id
    jmethodID jintgetUIWidgetHandlerID; // cache method id
    jmethodID jintgetUidFromPathjstringjava_lang_StringID; // cache method id



    jobject instance;
    jclass instanceClass; // cache class


    // Caching (if any)


    /**
    * Get the environment matching to the current thread.
    */
    virtual JNIEnv * getCurrentEnv();

public:
    // Constructor
    /**
    * Create a wrapping of the object from a JNIEnv.
    * It will call the default constructor
    * @param JEnv_ the Java Env
    */
    UIWidget(JavaVM * jvm_);

    /**
    * Create a wrapping of an already existing object from a JNIEnv.
    * The object must have already been instantiated
    * @param JEnv_ the Java Env
    * @param JObj the object
    */
    UIWidget(JavaVM * jvm_, jobject JObj);


    /**
    * This is a fake constructor to avoid the constructor
    * chaining when dealing with extended giws classes
    */
#ifdef FAKEGIWSDATATYPE
    UIWidget(fakeGiwsDataType::fakeGiwsDataType /* unused */) {}
#endif

    // Destructor
    ~UIWidget();

    // Generic method
    // Synchronization methods
    /**
    * Enter monitor associated with the object.
    * Equivalent of creating a "synchronized(obj)" scope in Java.
    */
    void synchronize();

    /**
    * Exit monitor associated with the object.
    * Equivalent of ending a "synchronized(obj)" scope.
    */
    void endSynchronize();

    // Methods
    static int uiwidgetLoad(JavaVM * jvm_, char const* fileName);

    static int uiwidget(JavaVM * jvm_);

    static void uiget(JavaVM * jvm_, int uid, char const* property, int stackPos);

    static void uiset(JavaVM * jvm_, int uid);

    static bool uiisValid(JavaVM * jvm_, int uid);

    static void uishowWindow(JavaVM * jvm_, int uid);

    static void uidelete(JavaVM * jvm_, int uid);

    static void uideleteAll(JavaVM * jvm_);

    static int getUIWidgetHandler(JavaVM * jvm_);

    static int getUidFromPath(JavaVM * jvm_, char const* path);


    /**
    * Get class name to use for static methods
    * @return class name to use for static methods
    */

    static const std::string className()
    {
        return "org/scilab/modules/uiwidget/UIWidget";
    }

};


}
#endif