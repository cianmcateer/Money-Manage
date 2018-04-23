#include <string>
#include <vector>

#include "Transaction.h"

class User {
private:
    std::string name;
    std::string phone_number;
    std::string email;
    float balance;
    std::vector<Transaction> transactions;



};
