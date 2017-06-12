:: This file was generated based on '../../AppData/Local/Fusetools/Packages/UnoCore/1.0.11/targets/android/run.bat'.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off

if "%1" == "debug" (
    echo Opening Android Studio
    C:\Users\flozano\AppData\Local\Fusetools\Fuse\App\app-1.0.0.13426\uno.exe open -a"Android Studio" "%~dp0Test1"
    exit /b %ERRORLEVEL%
)

if "%1" == "uninstall" (
    echo Uninstalling com.apps.test1
    C:\Users\flozano\AppData\Local\Fusetools\Fuse\App\app-1.0.0.13426\uno.exe adb uninstall com.apps.test1
    exit /b %ERRORLEVEL%
)

C:\Users\flozano\AppData\Local\Fusetools\Fuse\App\app-1.0.0.13426\uno.exe launch-apk "%~dp0Test1.apk" ^
    --package=com.apps.test1 ^
    --activity=Test1 ^
    --sym-dir="%~dp0src\main\.uno" ^
    %*
exit /b %ERRORLEVEL%
