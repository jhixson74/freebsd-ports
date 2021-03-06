--- JuceLibraryCode/modules/juce_core/files/juce_File.cpp.orig	2019-04-17 16:56:20 UTC
+++ JuceLibraryCode/modules/juce_core/files/juce_File.cpp
@@ -211,7 +211,7 @@ String File::addTrailingSeparator (const String& path)
 }
 
 //==============================================================================
-#if JUCE_LINUX
+#if JUCE_BSD || JUCE_LINUX
  #define NAMES_ARE_CASE_SENSITIVE 1
 #endif
 
@@ -953,7 +953,7 @@ bool File::createSymbolicLink (const File& linkFileToC
             linkFileToCreate.deleteFile();
     }
 
-   #if JUCE_MAC || JUCE_LINUX
+   #if JUCE_BSD || JUCE_MAC || JUCE_LINUX
     // one common reason for getting an error here is that the file already exists
     if (symlink (nativePathOfTarget.toRawUTF8(), linkFileToCreate.getFullPathName().toRawUTF8()) == -1)
     {
