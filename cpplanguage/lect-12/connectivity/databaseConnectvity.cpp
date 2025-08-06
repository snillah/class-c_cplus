// Example: MySQL Connection (using MySQL Connector/C++)
// Install MySQL Connector/C++

// Include the library

#include <iostream>
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/resultset.h>
using namespace std;

int main() {
    sql::mysql::MySQL_Driver* driver;
    sql::Connection* con;
    sql::Statement* stmt;
    sql::ResultSet* res;

    driver = sql::mysql::get_mysql_driver_instance();
    con = driver->connect("tcp://127.0.0.1:3306", "root", "password");
    con->setSchema("bank_db");

    stmt = con->createStatement();
    res = stmt->executeQuery("SELECT * FROM accounts");

    while (res->next()) {
        cout << "Account Holder: " << res->getString("name")
             << " | Balance: " << res->getDouble("balance") << endl;
    }

    delete res;
    delete stmt;
    delete con;

    return 0;
}
