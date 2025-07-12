#include "Invoice.h"

Invoice::Invoice(std::string invoiceId) {
    this->invoiceId = invoiceId;
}

void Invoice::addServiceCost(float costDollars) {
    dollarsOwed = costDollars;
}

float Invoice::getDollarsOwed() {
    return dollarsOwed;
}

std::string Invoice::getInvoiceId() {
    return invoiceId;
}