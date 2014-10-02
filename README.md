Mac UK International Keyboard Layout for Windows
=================
This layout is designed for Windows to work with the Mac UK International Keyboard.
Apples options key is bound to Ctrl + Alt.

Install
---------
### Basic layout functions
Run `setup.exe` from the `bin` dir.

### Print screen and Pause/Break keys
Without any further treatment the print screen key is located at F14 (instead of F13) and the Pause/Break key at F15 (instead of F14). Fix this create the following registry entry:

    [HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\Keyboard Layout]
    "Scancode Map"=hex:00,00,00,00,00,00,00,00,03,00,00,00,37,e0,64,00,1d,e1,46,00,\
    00,00,00,00
    
It will reassign the key codes (written in little endian format) to the correct keys.

### Multimedia keys
Currently I was only able to got three multimedia keys working: Rewind, Play/Pause and Fast Forward.
Therefore I had to install Apples Bootcamp drivers. Especially `WindowsSupport\Drivers\Apple\AppleKeyboardInstaller.exe` (or rather `WindowsSupport\Drivers\Apple\x64\AppleKeyboardInstaller64.exe`. If successful the multimedia functions will be the default assignment and the F# keys can be reached by pressing Fn + F#. To change that set the following registry entries to zero (`0x00`):

    HKEY_LOCAL_MACHINE\SYSTEM\ControlSet001\Services\KeyMagic\OSXFnBehavior
    HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Services\KeyMagic\OSXFnBehavior

