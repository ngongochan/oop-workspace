#include "USBConnection.h"

// must be a private member
USBConnection::USBConnection() {
    USBConnection* u = new USBConnection;
    // u->set_id();
    
}

// creates new objects by calling the private constructor
// returns a pointer to an object if a port is available
// otherwise, returns nullptr
USBConnection* USBConnection::CreateUsbConnection() {
    USBConnection::USBConnection();
}



// the destructor returns a used ID to the stack
// should be public
USBConnection::~USBConnection() {

}

