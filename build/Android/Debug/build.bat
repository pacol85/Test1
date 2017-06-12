:: This file was generated based on '../../AppData/Local/Fusetools/Packages/UnoCore/1.0.11/targets/android/gradle-build.bat'.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off
pushd "%~dp0app\src\main"

set JAVA_HOME=C:\Program Files\Java\jdk1.8.0_131
set CMAKE_PATH="C:\Users\flozano\AppData\Local\Android\sdk\cmake"

echo.
echo ## 2/2: Test1.apk

cd "%~dp0/"

if exist %CMAKE_PATH%\NUL goto HASCMAKE
if exist %CMAKE_PATH%\ goto HASCMAKE
goto NOCMAKE
:HASCMAKE

:: #if (#(RELEASE:Defined) && !#(Project.Android.Key.Store:IsSet))
:: echo ## Release build specified with no Key info in the unoproj. Defaulting to debug.keystore
:: if not exist ".\\#(APK.DefaultKeystore)" (
::     call "%JAVA_HOME%\bin\keytool" -genkey -v -keystore #(APK.DefaultKeystore) -alias androiddebugkey -storepass android -keypass android -keyalg RSA -validity 14000 -dname "CN=Unknown, OU=Unknown, O=Unknown, L=Unknown, ST=Unknown, C=Unknown"
:: )
:: #endif

:: #if #(AltBuildPath:IsSet)
:: call gradlew clean || goto ERROR
:: #endif
call gradlew assembleDebug || goto ERROR

cd "%~dp0"
C:\Users\flozano\AppData\Local\Fusetools\Fuse\App\app-1.0.0.13426\uno.exe cp app/build/outputs/apk/app-debug.apk Test1.apk || goto ERROR

popd && exit /b 0

:NOCMAKE
echo "ERROR: Unable to find the 'cmake' command. Please run 'fuse install android'. Expected to find cmake in C:\Users\flozano\AppData\Local\Android\sdk\cmake"

:ERROR
popd && exit /b 1
