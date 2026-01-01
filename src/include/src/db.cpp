#include "db.hpp"
#include <iostream>

Database::Database() {
    conn = new pqxx::connection(
        "dbname=studentdb user=postgres password=postgres host=db"
    );
}

void Database::add_student() {
    pqxx::work txn(*conn);
    txn.exec("INSERT INTO students (name) VALUES ('Test')");
    txn.commit();
    std::cout << "Student added\n";
}
