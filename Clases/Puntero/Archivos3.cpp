#include <iostream>
#include <sqlite_modern_cpp.h>

int main() {
    sqlite::database db("example.db");

    db << "CREATE TABLE IF NOT EXISTS Person (id INTEGER PRIMARY KEY, name TEXT, age INTEGER);";

    db << "INSERT INTO Person (name, age) VALUES ('John', 25);";
    db << "INSERT INTO Person (name, age) VALUES ('Alice', 30);";

    auto rows = db << "SELECT * FROM Person;";

    for (auto& row : rows) {
        std::string name;
        int id, age;
        row >> id >> name >> age;
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

    return 0;
}