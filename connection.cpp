#include "connection.h"
Connection::Connection(){}
bool Connection::createconnection()
{
db = QSqlDatabase::addDatabase("QODBC");
bool test=false;
db.setDatabaseName("projet_2A");
db.setUserName("tesnime");
db.setPassword("omaromar");
if (db.open())
{
    return  true;
}
}
void Connection::closeConnection(){db.close();}

