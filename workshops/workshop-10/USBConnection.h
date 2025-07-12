#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <stack>

class USBConnection {
    private:
        int id;
        USBConnection();
    public:
        int get_id();
        static USBConnection* CreateUsbConnection();

        static stack<int> USBConnection::ids([3, 2, 1]);

        ~USBConnection();
};

#endif