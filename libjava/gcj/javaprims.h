// javaprims.h - Main external header file for libgcj.  -*- c++ -*-

/* Copyright (C) 1998, 1999, 2000, 2001, 2002  Free Software Foundation

   This file is part of libgcj.

This software is copyrighted work licensed under the terms of the
Libgcj License.  Please consult the file "LIBGCJ_LICENSE" for
details.  */

#ifndef __JAVAPRIMS_H__
#define __JAVAPRIMS_H__

// Force C++ compiler to use Java-style exceptions.
#pragma GCC java_exceptions

#include <gcj/libgcj-config.h>

// FIXME: this is a hack until we get a proper gcjh.
// It is needed to work around system header files that define TRUE
// and FALSE.
#undef TRUE
#define TRUE TRUE
#undef FALSE
#define FALSE FALSE

// To force selection of correct types that will mangle consistently
// across platforms.
extern "Java"
{
  typedef __java_byte jbyte;
  typedef __java_short jshort;
  typedef __java_int jint;
  typedef __java_long jlong;
  typedef __java_float jfloat;
  typedef __java_double jdouble;
  typedef __java_char jchar;
  typedef __java_boolean jboolean;
  typedef jint jsize;

  // The following class declarations are automatically generated by
  // the `classes.pl' script.
  namespace java
  {
    namespace io
    {
      class BufferedInputStream;
      class BufferedOutputStream;
      class BufferedReader;
      class BufferedWriter;
      class ByteArrayInputStream;
      class ByteArrayOutputStream;
      class CharArrayReader;
      class CharArrayWriter;
      class CharConversionException;
      class DataInput;
      class DataInputStream;
      class DataOutput;
      class DataOutputStream;
      class EOFException;
      class Externalizable;
      class File;
      class FileDescriptor;
      class FileFilter;
      class FileInputStream;
      class FileNotFoundException;
      class FileOutputStream;
      class FilePermission;
      class FileReader;
      class FileWriter;
      class FilenameFilter;
      class FilterInputStream;
      class FilterOutputStream;
      class FilterReader;
      class FilterWriter;
      class IOException;
      class InputStream;
      class InputStreamReader;
      class InterfaceComparator;
      class InterruptedIOException;
      class InvalidClassException;
      class InvalidObjectException;
      class LineNumberInputStream;
      class LineNumberReader;
      class MemberComparator;
      class NotActiveException;
      class NotSerializableException;
      class ObjectInput;
      class ObjectInputStream;
      class ObjectInputStream$GetField;
      class ObjectInputValidation;
      class ObjectOutput;
      class ObjectOutputStream;
      class ObjectOutputStream$PutField;
      class ObjectStreamClass;
      class ObjectStreamConstants;
      class ObjectStreamException;
      class ObjectStreamField;
      class OptionalDataException;
      class OutputStream;
      class OutputStreamWriter;
      class PipedInputStream;
      class PipedOutputStream;
      class PipedReader;
      class PipedWriter;
      class PrintStream;
      class PrintWriter;
      class PushbackInputStream;
      class PushbackReader;
      class RandomAccessFile;
      class Reader;
      class SequenceInputStream;
      class Serializable;
      class SerializablePermission;
      class StreamCorruptedException;
      class StreamTokenizer;
      class StringBufferInputStream;
      class StringReader;
      class StringWriter;
      class SyncFailedException;
      class UTFDataFormatException;
      class UnsupportedEncodingException;
      class ValidatorAndPriority;
      class WriteAbortedException;
      class Writer;
    };

    namespace lang
    {
      class AbstractMethodError;
      class ArithmeticException;
      class ArrayIndexOutOfBoundsException;
      class ArrayStoreException;
      class Boolean;
      class Byte;
      class CPlusPlusDemangler;
      class CharSequence;
      class Character;
      class Character$Subset;
      class Character$UnicodeBlock;
      class Class;
      class ClassCastException;
      class ClassCircularityError;
      class ClassFormatError;
      class ClassLoader;
      class ClassNotFoundException;
      class CloneNotSupportedException;
      class Cloneable;
      class Comparable;
      class Compiler;
      class ConcreteProcess;
      class Double;
      class Error;
      class Exception;
      class ExceptionInInitializerError;
      class Float;
      class IllegalAccessError;
      class IllegalAccessException;
      class IllegalArgumentException;
      class IllegalMonitorStateException;
      class IllegalStateException;
      class IllegalThreadStateException;
      class IncompatibleClassChangeError;
      class IndexOutOfBoundsException;
      class InheritableThreadLocal;
      class InstantiationError;
      class InstantiationException;
      class Integer;
      class InternalError;
      class InterruptedException;
      class LinkageError;
      class Long;
      class Math;
      class NegativeArraySizeException;
      class NoClassDefFoundError;
      class NoSuchFieldError;
      class NoSuchFieldException;
      class NoSuchMethodError;
      class NoSuchMethodException;
      class NullPointerException;
      class Number;
      class NumberFormatException;
      class Object;
      class OutOfMemoryError;
      class Package;
      class Process;
      class Runnable;
      class Runtime;
      class RuntimeException;
      class RuntimePermission;
      class SecurityContext;
      class SecurityException;
      class SecurityManager;
      class Short;
      class StackOverflowError;
      class StackTraceElement;
      class StrictMath;
      class String;
      class String$CaseInsensitiveComparator;
      class StringBuffer;
      class StringIndexOutOfBoundsException;
      class System;
      class Thread;
      class ThreadDeath;
      class ThreadGroup;
      class ThreadLocal;
      class ThreadLocal$Value;
      class Throwable;
      class UnknownError;
      class UnsatisfiedLinkError;
      class UnsupportedClassVersionError;
      class UnsupportedOperationException;
      class VMClassLoader;
      class VMSecurityManager;
      class VerifyError;
      class VirtualMachineError;
      class Void;
      namespace ref
      {
        class PhantomReference;
        class Reference;
        class ReferenceQueue;
        class SoftReference;
        class WeakReference;
      };

      namespace reflect
      {
        class AccessibleObject;
        class Array;
        class Constructor;
        class Field;
        class InvocationTargetException;
        class Member;
        class Method;
        class Modifier;
        class ReflectPermission;
      };
    };

    namespace util
    {
      class AbstractCollection;
      class AbstractList;
      class AbstractMap;
      class AbstractSequentialList;
      class AbstractSet;
      class ArrayList;
      class Arrays;
      class Arrays$ArrayList;
      class Arrays$ListImpl;
      class BasicMapEntry;
      class BitSet;
      class Calendar;
      class Collection;
      class Collections;
      class Collections$CopiesList;
      class Collections$EmptyList;
      class Collections$EmptyMap;
      class Collections$EmptySet;
      class Collections$ReverseComparator;
      class Collections$SingletonList;
      class Collections$SingletonMap;
      class Collections$SingletonSet;
      class Collections$SynchronizedCollection;
      class Collections$SynchronizedIterator;
      class Collections$SynchronizedList;
      class Collections$SynchronizedListIterator;
      class Collections$SynchronizedMap;
      class Collections$SynchronizedMapEntry;
      class Collections$SynchronizedRandomAccessList;
      class Collections$SynchronizedSet;
      class Collections$SynchronizedSortedMap;
      class Collections$SynchronizedSortedSet;
      class Collections$UnmodifiableCollection;
      class Collections$UnmodifiableEntrySet;
      class Collections$UnmodifiableIterator;
      class Collections$UnmodifiableList;
      class Collections$UnmodifiableListIterator;
      class Collections$UnmodifiableMap;
      class Collections$UnmodifiableRandomAccessList;
      class Collections$UnmodifiableSet;
      class Collections$UnmodifiableSortedMap;
      class Collections$UnmodifiableSortedSet;
      class Comparator;
      class ConcurrentModificationException;
      class Date;
      class Dictionary;
      class EmptyStackException;
      class Enumeration;
      class EventListener;
      class EventObject;
      class GregorianCalendar;
      class HashMap;
      class HashMap$HashEntry;
      class HashMap$HashIterator;
      class HashSet;
      class Hashtable;
      class Hashtable$Enumerator;
      class Hashtable$HashEntry;
      class Hashtable$HashIterator;
      class IdentityHashMap;
      class IdentityHashMap$IdentityEntry;
      class IdentityHashMap$IdentityIterator;
      class Iterator;
      class LinkedHashMap;
      class LinkedHashMap$LinkedHashEntry;
      class LinkedHashSet;
      class LinkedList;
      class LinkedList$Entry;
      class LinkedList$LinkedListItr;
      class List;
      class ListIterator;
      class ListResourceBundle;
      class Locale;
      class Map;
      class Map$Entry;
      class Map$Map;
      class MissingResourceException;
      class NoSuchElementException;
      class Observable;
      class Observer;
      class Properties;
      class PropertyPermission;
      class PropertyResourceBundle;
      class Random;
      class RandomAccess;
      class RandomAccessSubList;
      class ResourceBundle;
      class ResourceBundle$Security;
      class Set;
      class SimpleTimeZone;
      class SortedMap;
      class SortedSet;
      class Stack;
      class StringTokenizer;
      class SubList;
      class TimeZone;
      class Timer;
      class Timer$Scheduler;
      class Timer$TaskQueue;
      class TimerTask;
      class TooManyListenersException;
      class TreeMap;
      class TreeMap$Node;
      class TreeMap$SubMap;
      class TreeMap$TreeIterator;
      class TreeSet;
      class Vector;
      class WeakHashMap;
      class WeakHashMap$WeakBucket;
      class WeakHashMap$WeakEntry;
      class WeakHashMap$WeakEntrySet;
      namespace jar
      {
        class Attributes;
        class Attributes$Name;
        class JarEntry;
        class JarException;
        class JarFile;
        class JarFile$JarEnumeration;
        class JarInputStream;
        class JarOutputStream;
        class Manifest;
      };

      namespace zip
      {
        class Adler32;
        class CRC32;
        class CheckedInputStream;
        class CheckedOutputStream;
        class Checksum;
        class DataFormatException;
        class Deflater;
        class DeflaterOutputStream;
        class GZIPInputStream;
        class GZIPOutputStream;
        class Inflater;
        class InflaterInputStream;
        class ZipConstants;
        class ZipEntry;
        class ZipEnumeration;
        class ZipException;
        class ZipFile;
        class ZipInputStream;
        class ZipOutputStream;
      };
    };
  };  
};
  
typedef struct java::lang::Object* jobject;
typedef class java::lang::Class* jclass;
typedef class java::lang::Throwable* jthrowable;
typedef class java::lang::String* jstring;
struct _Jv_JNIEnv;

typedef struct _Jv_Field *jfieldID;
typedef struct _Jv_Method *jmethodID;

extern "C" jobject _Jv_AllocObject (jclass, jint) __attribute__((__malloc__));
extern "C" jobject _Jv_AllocObjectNoFinalizer (jclass, jint) __attribute__((__malloc__));
extern "C" jobject _Jv_AllocObjectNoInitNoFinalizer (jclass, jint) __attribute__((__malloc__));
#ifdef JV_HASH_SYNCHRONIZATION
  extern "C" jobject _Jv_AllocPtrFreeObject (jclass, jint)
  			    __attribute__((__malloc__));
#else
  // Collector still needs to scan sync_info
  static inline jobject _Jv_AllocPtrFreeObject (jclass klass, jint sz)
  {
    return _Jv_AllocObject(klass, sz);
  }
#endif
extern "C" jboolean _Jv_IsInstanceOf(jobject, jclass);
extern "C" jstring _Jv_AllocString(jsize) __attribute__((__malloc__));
extern "C" jstring _Jv_NewString (const jchar*, jsize)
  __attribute__((__malloc__));
extern jint _Jv_FormatInt (jchar* bufend, jint num);
extern "C" jchar* _Jv_GetStringChars (jstring str);
extern "C" void _Jv_MonitorEnter (jobject);
extern "C" void _Jv_MonitorExit (jobject);
extern "C" jstring _Jv_NewStringLatin1(const char*, jsize)
  __attribute__((__malloc__));
extern "C" jsize _Jv_GetStringUTFLength (jstring);
extern "C" jsize _Jv_GetStringUTFRegion (jstring, jsize, jsize, char *);

extern jint _Jv_CreateJavaVM (void* /*vm_args*/);

void
_Jv_ThreadRun (java::lang::Thread* thread);
jint
_Jv_AttachCurrentThread(java::lang::Thread* thread);
extern "C" java::lang::Thread*
_Jv_AttachCurrentThread(jstring name, java::lang::ThreadGroup* group);
extern "C" java::lang::Thread*
_Jv_AttachCurrentThreadAsDaemon(jstring name, java::lang::ThreadGroup* group);
extern "C" jint _Jv_DetachCurrentThread (void);

extern "C" void _Jv_Throw (jthrowable) __attribute__ ((__noreturn__));
extern "C" void* _Jv_Malloc (jsize) __attribute__((__malloc__));
extern "C" void* _Jv_Realloc (void *, jsize);
extern "C" void _Jv_Free (void*);
extern void (*_Jv_RegisterClassHook) (jclass cl);
extern "C" void _Jv_RegisterClassHookDefault (jclass);

typedef unsigned short _Jv_ushort __attribute__((__mode__(__HI__)));
typedef unsigned int _Jv_uint __attribute__((__mode__(__SI__)));

struct _Jv_Utf8Const
{
  _Jv_ushort hash;
  _Jv_ushort length;	/* In bytes, of data portion, without final '\0'. */
  char data[1];		/* In Utf8 format, with final '\0'. */
};


#endif /* __JAVAPRIMS_H__ */
