#include <stdio.h>
#include <stdlib.h>
#include<mysql/mysql.h>
#include<MQTTClient.h>
#include<string.h>

#define AWS_IOT_ENDPOINT "a2d7b4vsi90j5r-ats.iot.eu-north-1.amazonaws.com"
#define CLIENT_ID "iotconsole-18ccc840-0f46-4e1d-90e5-9b151a88b31e"
#define CERTIFICATE_PATH "/home/ankur/Documents/c_traning/hhh/aws/certificate.pem.crt"
#define PRIVATE_KEY_PATH "/home/ankur/Documents/c_traning/hhh/aws/private.pem.key"
#define ROOT_CA_PATH "/home/ankur/Documents/c_traning/hhh/aws/RootCA1.pem"


int insert_offline()
{
    MYSQL *conn;
    MYSQL_RES *res;
    MYSQL_ROW row;
    const char *server = "localhost";
    const char *user = "ankur";     // Replace with your MySQL username
    const char *password = "password"; // Replace with your MySQL password
    const char *database = "mydb";     // Replace with your MySQL database name

    conn = mysql_init(NULL);

    // Connect to the MySQL database
    if (!mysql_real_connect(conn, server, user, password, database, 0, NULL, 0)) {
        fprintf(stderr, "Failed to connect to database: %s\n", mysql_error(conn));
        mysql_close(conn);
        exit(1);
    }

    printf("Connected to offline database successfully\n");

    // Insert data into the table
    if (mysql_query(conn, "INSERT INTO mytable (Temperature,Humidity,Timestamp,Version) VALUES (1,2,3,4);") != 0) {
        fprintf(stderr, "Failed to insert data: %s\n", mysql_error(conn));
        mysql_close(conn);
        exit(1);
    }

    printf("Data inserted successfully\n");

    // Close the database connection
    mysql_close(conn);

    return 0;

}

int insert_online()
{
    MYSQL *conn;
    MYSQL_RES *res;
    MYSQL_ROW row;
    const char *server = "database-1.cap0bv0hngpg.ap-south-1.rds.amazonaws.com";
    const char *user = "database_1";     // Replace with your MySQL username
    const char *password = "mydatabase"; // Replace with your MySQL password
    const char *database = "database_1";     // Replace with your MySQL database name

    conn = mysql_init(NULL);

    // Connect to the MySQL database
    if (!mysql_real_connect(conn, server, user, password, database, 0, NULL, 0)) {
        fprintf(stderr, "Failed to connect to database: %s\n", mysql_error(conn));
        mysql_close(conn);
        exit(1);
    }

    printf("Connected to online database successfully\n");

    // Insert data into the table
    if (mysql_query(conn, "INSERT INTO mytable (Temperature,Humidity,Timestamp,Version) VALUES (1,2,3,4);") != 0) {
        fprintf(stderr, "Failed to insert data: %s\n", mysql_error(conn));
        mysql_close(conn);
        exit(1);
    }

    printf("Data inserted successfully\n");

    // Close the database connection
    mysql_close(conn);

    return 0;
}


int main() {

    insert_offline();
    //insert_online();
   


}
