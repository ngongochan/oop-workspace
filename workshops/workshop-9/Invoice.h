#ifndef INVOICE_H
#define INVOICE_H

using namespace std;
#include <string>

class Invoice {
    private:
        std::string invoiceId;
        float dollarsOwed;
    public:
        Invoice(std::string);

        void addServiceCost(float dollarsOwed);

        float getDollarsOwed();

        std::string getInvoiceId();
};

#endif