/*
 * PROJECT:         ReactOS Build Tools [Keyboard Layout Compiler]
 * LICENSE:         BSD - See COPYING.BSD in the top level directory
 * FILE:            tools/kbdtool/data.c
 * PURPOSE:         Internal Keyboard (Scancode/Virtual Key) Tables
 * PROGRAMMERS:     ReactOS Foundation
 */

/* INCLUDES *******************************************************************/

#include "kbdtool.h"

/* GLOBALS ********************************************************************/

/* Table of Virtual Key Names */
VKNAME VKName[] =
{
    {0x08, "BACK"},
    {0x03, "CANCEL"},
    {0x1b, "ESCAPE"},
    {0x0d, "RETURN"},
    {0x20, "SPACE"},
    {0x6e, "DECIMAL"},
    {0xba, "OEM_1"},
    {0xbb, "OEM_PLUS"},
    {0xbc, "OEM_COMMA"},
    {0xbd, "OEM_MINUS"},
    {0xbe, "OEM_PERIOD"},
    {0xbf, "OEM_2"},
    {0xc0, "OEM_3"},
    {0xdb, "OEM_4"},
    {0xdc, "OEM_5"},
    {0xdd, "OEM_6"},
    {0xde, "OEM_7"},
    {0xdf, "OEM_8"},
    {0xe2, "OEM_102"},
    {0xc1, "ABNT_C1"},
    {0xc2, "ABNT_C2"},
    {0x10, "SHIFT"},
    {0xa0, "LSHIFT"},
    {0xa1, "RSHIFT"},
    {0x12, "MENU"},
    {0xa4, "LMENU"},
    {0xa5, "RMENU"},
    {0x11, "CONTROL"},
    {0xa2, "LCONTROL"},
    {0xa3, "RCONTROL"},
    {0x6c, "SEPARATOR"},
    {0xe4, "ICO_00"},
    {0x2e, "DELETE"},
    {0x2d, "INSERT"},
    {0xe5, "GROUPSHIFT"},
    {0xe6, "RGROUPSHIFT"}
};
/* Table of modifiers */
VKNAME Modifiers[] =
{
    {0x10, "KBDSHIFT"},
    {0x11, "KBDCTRL"},
    {0x12, "KBDALT"}
};

/* Table of states */
PCHAR StateLabel[] =
{
    "",
    "Shift",
    "  Ctrl",
    "S+Ctrl",
    "      Alt",
    "Shift+Alt",
    "  Ctl+Alt",
    "S+Ctl+Alt",
    "      X1      ",
    "S+    X1      ",
    "  C+  X1      ",
    "S+C+  X1      ",
    "    A+X1      ",
    "S+  A+X1      ",
    "  C+A+X1      ",
    "S+C+A+X1      ",
    "         X2   ",
    "S+       X2   ",
    "  C+     X2   ",
    "S+C+     X2   ",
    "    A+   X2   ",
    "S+  A+   X2   ",
    "  C+A+   X2   ",
    "S+C+A+   X2   ",
    "      X1+X2   ",
    "S+    X1+X2   ",
    "  C+  X1+X2   ",
    "S+C+  X1+X2   ",
    "    A+X1+X2   ",
    "S+  A+X1+X2   ",
    "  C+A+X1+X2   ",
    "S+C+A+X1+X2   ",
    "            X3",
    "S+          X3",
    "  C+        X3",
    "S+C+        X3",
    "    A+      X3",
    "S+  A+      X3",
    "  C+A+      X3",
    "S+C+A+      X3",
    "      X1+   X3",
    "S+    X1+   X3",
    "  C+  X1+   X3",
    "S+C+  X1+   X3",
    "    A+X1+   X3",
    "S+  A+X1+   X3",
    "  C+A+X1+   X3",
    "S+C+A+X1+   X3",
    "         X2+X3",
    "S+       X2+X3",
    "  C+     X2+X3",
    "S+C+     X2+X3",
    "    A+   X2+X3",
    "S+  A+   X2+X3",
    "  C+A+   X2+X3",
    "S+C+A+   X2+X3",
    "      X1+X2+X3",
    "S+    X1+X2+X3",
    "  C+  X1+X2+X3",
    "S+C+  X1+X2+X3",
    "    A+X1+X2+X3",
    "S+  A+X1+X2+X3",
    "  C+A+X1+X2+X3",
    "S+C+A+X1+X2+X3",
    "unexpected",
    "unexpected"
};

/* Table of Cap States */
PCHAR CapState[] =
{
    "0",
    "CAPLOK",
    "SGCAPS",
    "CAPLOCK | SGCAPS",
    "CAPLOKALTGR",
    "CAPLOK | CAPLOKALTGR"
};

/* ISO 110-key Keyboard Scancode to Virtual Key Conversion Table */
SCVK ScVk[] =
{
    {0x02, '1', NULL, FALSE},
    {0x03, '2', NULL, FALSE},
    {0x04, '3', NULL, FALSE},
    {0x05, '4', NULL, FALSE},
    {0x06, '5', NULL, FALSE},
    {0x07, '6', NULL, FALSE},
    {0x08, '7', NULL, FALSE},
    {0x09, '8', NULL, FALSE},
    {0x0a, '9', NULL, FALSE},
    {0x0b, '0', NULL, FALSE},
    {0x0c, 0xbd, NULL, FALSE},
    {0x0d, 0xbb, NULL, FALSE},
    {0x10, 'Q', NULL, FALSE},
    {0x11, 'W', NULL, FALSE},
    {0x12, 'E', NULL, FALSE},
    {0x13, 'R', NULL, FALSE},
    {0x14, 'T', NULL, FALSE},
    {0x15, 'Y', NULL, FALSE},
    {0x16, 'U', NULL, FALSE},
    {0x17, 'I', NULL, FALSE},
    {0x18, 'O', NULL, FALSE},
    {0x19, 'P', NULL, FALSE},
    {0x1a, 0xdb, NULL, FALSE},
    {0x1b, 0xdd, NULL, FALSE},
    {0x1e, 'A', NULL, FALSE},
    {0x1f, 'S', NULL, FALSE},
    {0x20, 'D', NULL, FALSE},
    {0x21, 'F', NULL, FALSE},
    {0x22, 'G', NULL, FALSE},
    {0x23, 'H', NULL, FALSE},
    {0x24, 'J', NULL, FALSE},
    {0x25, 'K', NULL, FALSE},
    {0x26, 'L', NULL, FALSE},
    {0x27, 0xba, NULL, FALSE},
    {0x28, 0xde, NULL, FALSE},
    {0x29, 0xc0, NULL, FALSE},
    {0x2b, 0xdc, NULL, FALSE},
    {0x2c, 'Z', NULL, FALSE},
    {0x2d, 'X', NULL, FALSE},
    {0x2e, 'C', NULL, FALSE},
    {0x2f, 'V', NULL, FALSE},
    {0x30, 'B', NULL, FALSE},
    {0x31, 'N', NULL, FALSE},
    {0x32, 'M', NULL, FALSE},
    {0x33, 0xbc, NULL, FALSE},
    {0x34, 0xbe, NULL, FALSE},
    {0x35, 0xbf, NULL, FALSE},
    {0x53, 0x6e, NULL, FALSE},
    {0x56, 0xe2, NULL, FALSE},
    {0x73, 0xc1, NULL, FALSE},
    {0x7e, 0xc2, NULL, FALSE},
    {0xe010, 0xb1, "Speedracer: Previous Track", FALSE},
    {0xe019, 0xb0, "Speedracer: Next Track", FALSE},
    {0xe01d, 0xa3, "RControl", FALSE},
    {0xe020, 0xad, "Speedracer: Volume Mute", FALSE},
    {0xe021, 0xb7, "Speedracer: Launch App 2", FALSE},
    {0xe022, 0xb3, "Speedracer: Media Play/Pause", FALSE},
    {0xe024, 0xb2, "Speedracer: Media Stop", FALSE},
    {0xe02e, 0xae, "Speedracer: Volume Up", FALSE},
    {0xe030, 0xaf, "Speedracer: Volume Down", FALSE},
    {0xe032, 0xac, "Speedracer: Browser Home", FALSE},
    {0xe035, 0x6f, "Numpad Divide", FALSE},
    {0xe037, 0x2c, "Snapshot", FALSE},
    {0xe038, 0xa5, "RMenu", FALSE},
    {0xe047, 0x24, "Home", FALSE},
    {0xe048, 0x26, "Up", FALSE},
    {0xe049, 0x21, "Prior", FALSE},
    {0xe04b, 0x25, "Left", FALSE},
    {0xe04d, 0x27, "Right", FALSE},
    {0xe04f, 0x23, "End", FALSE},
    {0xe050, 0x28, "Down", FALSE},
    {0xe051, 0x22, "Next", FALSE},
    {0xe052, 0x2d, "Insert", FALSE},
    {0xe053, 0x2e, "Delete", FALSE},
    {0xe05b, 0x5b, "Left Win", FALSE},
    {0xe05c, 0x5c, "Right Win", FALSE},
    {0xe05d, 0x5d, "Application", FALSE},
    {0xe05e, 0xff, "Power", FALSE},
    {0xe05f, 0x5f, "Speedracer: Sleep", FALSE},
    {0xe060, 0xff, "BAD SCANCODE", FALSE},
    {0xe061, 0xff, "BAD SCANCODE", FALSE},
    {0xe065, 0xaa, "Speedracer: Browser Search", FALSE},
    {0xe066, 0xab, "Speedracer: Browser Favorites", FALSE},
    {0xe067, 0xa8, "Speedracer: Browser Refresh", FALSE},
    {0xe068, 0xa9, "Speedracer: Browser Stop", FALSE},
    {0xe069, 0xa7, "Speedracer: Browser Foward", FALSE},
    {0xe06a, 0xa6, "Speedracer: Browser Back", FALSE},
    {0xe06b, 0xb6, "Speedracer: Launch App 1", FALSE},
    {0xe06c, 0xb4, "Speedracer: Launch Mail", FALSE},
    {0xe06d, 0xb5, "Speedracer: Launch Media Selector", FALSE},
    {0x53, 0x6e, NULL, FALSE},
    {0x0e, 0x08, NULL, FALSE},
    {0x01, 0x1b, NULL, FALSE},
    {0xe01c, 0x0d, "Numpad Enter", FALSE},
    {0x1c, 0x0d, NULL, FALSE},
    {0x39, 0x20, NULL, FALSE},
    {0xe046, 0x03, "Break (Ctrl + Pause)", FALSE},
    {0xFFFF, 0x00, NULL, FALSE},
    {0xFFFF, 0x00, NULL, FALSE},
    {0xFFFF, 0x00, NULL, FALSE},
    {0xFFFF, 0x00, NULL, FALSE},
    {0xFFFF, 0x00, NULL, FALSE},
    {0xFFFF, 0x00, NULL, FALSE},
    {0xFFFF, 0x00, NULL, FALSE},
    {0xFFFF, 0x00, NULL, FALSE},
    {0xFFFF, 0x00, NULL, FALSE},
    {0xFFFF, 0x00, NULL, FALSE},
    {0xFFFF, 0x00, NULL, FALSE},
    {0xFFFF, 0x00, NULL, FALSE},
    {0xFFFF, 0x00, NULL, FALSE},
    {0xFFFF, 0x00, NULL, FALSE}
};

/* FUNCTIONS ******************************************************************/

/* EOF */
