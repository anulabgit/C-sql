#include <iostream>
#include <stdio.h>
#include "sqlite3.h"

#pragma comment(lib, "sqlite3.lib")
using namespace std;

int main() {
    sqlite3* db;
    int rc, t_math = 0, t_science = 0;

    rc = sqlite3_open("sj.db", &db);
    
    const char* sql = "SELECT * FROM student;";
    sqlite3_stmt* stmt;

    rc = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);

    while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
        int id = sqlite3_column_int(stmt, 0);
        const unsigned char* name = sqlite3_column_text(stmt, 1);
        int math = sqlite3_column_int(stmt, 2);
        int science = sqlite3_column_int(stmt, 3);
        cout << "ÀÌ¸§: " << name << endl;
        cout << "ÃÑÁ¡: " << math + science << endl;
        cout << "Æò±Õ: " << (math + science) / 2 << "\n" << endl;
        t_math += math;
        t_science += science;
    }
    cout << "¼öÇÐ ÃÑÁ¡ Æò±Õ: " << t_math / 3 << endl;
    cout << "°úÇÐ ÃÑÁ¡ Æò±Õ: " << t_science / 3 << endl;
    
    sqlite3_finalize(stmt);
    sqlite3_close(db);
    return 0;
}