/* This Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   This Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef SERIALCLASS_H
#define SERIALCLASS_H

#include <termios.h>    /* POSIX Terminal Control Definitions */

class TSerial
{
public:
    void            close();
    void            open();
    const char*     readline();
    struct termios& serial_port_settings(); /* This will be removed in future versions  */
    void            set_speed(int speed);

    TSerial(int speed = 115200);
    TSerial(const char* dev, int speed = 115200, bool auto_open = false);
    
    /* Copy/move constructors/assignment operators will be added in future versions */
};

#endif // SERIALCLASS_HEADER
