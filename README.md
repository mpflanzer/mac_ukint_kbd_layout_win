# Mac UK International Keyboard Layout for Windows
This layout is designed for Windows to work with the Mac UK International Keyboard.

## Infos

- Apples options key (alt) is mapped to Ctrl + Alt.
- Print screen action defaults to F15
- Eject key has no function
- Multimedia keys are not working (fn has no function)

## Install
### Basic layout functions
Run `setup.exe` from the `bin` dir.

### Possibly outdated infos
#### Print screen and Pause/Break keys
By default the print screen key is mapped to F14 (instead of F13) and the Pause/Break key to F15 (instead of F14). To change this create the following registry entry:

    [HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\Keyboard Layout]
    "Scancode Map"=hex:00,00,00,00,00,00,00,00,03,00,00,00,37,e0,64,00,1d,e1,46,00,\
    00,00,00,00

It will reassign the key codes (written in little endian format) to the correct keys.

#### Multimedia keys
So far I only managed to get three of the multimedia keys working: Rewind, Play/Pause and Fast Forward. Their functions become available after installing Apples Bootcamp drivers. Especially `WindowsSupport\Drivers\Apple\AppleKeyboardInstaller.exe` (or `WindowsSupport\Drivers\Apple\x64\AppleKeyboardInstaller64.exe`, respectively). If successful the multimedia functions will be the default assignment and the F# keys can be accessed by pressing Fn + F#. To invert this behaviour set the following registry entries to zero (`0x00`):

    HKEY_LOCAL_MACHINE\SYSTEM\ControlSet001\Services\KeyMagic\OSXFnBehavior
    HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Services\KeyMagic\OSXFnBehavior

