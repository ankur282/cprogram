#include <stdio.h>
#include <stdlib.h>
#include <mariadb/mysql.h>
#include <string.h>
#include <stdint.h>
#include <wiringPi.h>

#define DHT_PIN 0 


int check_connection()
{
	 int status;
    status = system("ping -c 1 8.8.8.8 > /dev/null 2>&1");
    if (status == -1) {
        printf("Error executing ping command\n");
        exit(1);
    } else if (status == 0) {
        printf("Internet is working\n");
    } else {
        printf("Internet is not working\n");
    }
    return 0;
	
}


void connect_database_offline(MYSQL **con) {
    
    MYSQL_RES *res;
    MYSQL_ROW row;
    const char *server = "localhost";
    const char *user = "myuser2";     
    const char *password = "mysql"; 
    const char *database = "mydb2";     

    conn = mysql_init(NULL);

    // Connect to the MySQL database
    if (!mysql_real_connect(conn, server, user, password, database, 0, NULL, 0)) {
        fprintf(stderr, "Failed to connect to database: %s\n", mysql_error(conn));
        mysql_close(conn);
        exit(1);
    }

    printf("Connected to offline database successfully\n");
}

void insert_offline(float temperature, float humidity, MYSQL *con)
{
    char query[100];
    sprintf(query, "INSERT INTO mytable (Temperature, Humidity,Version,Timestamp) VALUES ('%.1f', '%.1f',1,4)", temperature, humidity);
    if (mysql_query(con, query) != 0) {
        fprintf(stderr, "Failed to insert data: %s\n", mysql_error(conn));
        mysql_close(con);
        exit(1);
    }

    printf("Data inserted successfully\n");
 }


int insert_offline(float temperature, float humidity)
{
    MYSQL *conn;
    MYSQL_RES *res;
    MYSQL_ROW row;
    const char *server = "localhost";
    const char *user = "myuser2";     
    const char *password = "mysql"; 
    const char *database = "mydb2";     

    conn = mysql_init(NULL);

    // Connect to the MySQL database
    if (!mysql_real_connect(conn, server, user, password, database, 0, NULL, 0)) {
        fprintf(stderr, "Failed to connect to database: %s\n", mysql_error(conn));
        mysql_close(conn);
        exit(1);
    }

    printf("Connected to offline database successfully\n");

    // Insert data into the table
    
    char query[100];
    sprintf(query, "INSERT INTO mytable (Temperature, Humidity,Version,Timestamp) VALUES ('%.1f', '%.1f',1,4)", temperature, humidity);
    if (mysql_query(conn, query) != 0) {
        fprintf(stderr, "Failed to insert data: %s\n", mysql_error(conn));
        mysql_close(conn);
        exit(1);
    }

    printf("Data inserted successfully\n");

    // Close the database connection
    mysql_close(conn);

    return 0;
}



void connect_database(MYSQL **conn) {
    char *server = "database-1.cxgikfe7jnqt.ap-south-1.rds.amazonaws.com";
    char *user = "database_1";
    char *password = "mydatabase";
    char *database = "database_1";

    *conn = mysql_init(NULL);

    if (!mysql_real_connect(*conn, server, user, password, database, 0, NULL, 0)) {
        fprintf(stderr, "%s\n", mysql_error(*conn));
        mysql_close(*conn);
        exit(1);
    }

   printf("Connected to online database successfully\n");
}

void insert_online(float temperature, float humidity, MYSQL *conn)
{
	char query[100];
    sprintf(query, "INSERT INTO mytable (Temperature, Humidity,Version,Timestamp) VALUES ('%.1f', '%.1f',1,4)", temperature, humidity);
   
	if (mysql_query(conn,query)) {
      printf("faild to insert data\n");
    }
    printf("Data inserted successfully\n");
 } 

int fetch_data(float *temperature, float *humidity, MYSQL *conn,MYSQL *con)
{
	
	if (wiringPiSetup() == -1) {  
        printf("Failed to initialize WiringPi\n");
        return 1;
    }
    for(int i=0; i<=5;i++) {
        int data[5] = {0, 0, 0, 0, 0};
        uint8_t last_state = HIGH;
        uint8_t counter = 0;
        uint8_t j = 0;

        pinMode(DHT_PIN, OUTPUT);
        digitalWrite(DHT_PIN, LOW);
        delay(18);
        digitalWrite(DHT_PIN, HIGH);
        delayMicroseconds(40);
        pinMode(DHT_PIN, INPUT);

        for (int i = 0; i < 85; i++) {
            counter = 0;
            while (digitalRead(DHT_PIN) == last_state) {
                counter++;
                delayMicroseconds(1);
                if (counter == 255) {
                    break;
                }
            }
            last_state = digitalRead(DHT_PIN);
            if (counter == 255) {
                break;
            }
            if ((i >= 4) && (i % 2 == 0)) {
                data[j / 8] <<= 1;
                if (counter > 16) {
                    data[j / 8] |= 1;
                }
                j++;
            }
        }

        if ((j >= 40) && (data[4] == ((data[0] + data[1] + data[2] + data[3]) & 0xFF))) {
            *humidity = (float) data[0];
            *temperature = (float) data[2];
            printf("Temperature = %.1f°C, Humidity = %.1f%%\n",*temperature, *humidity);
            insert_online(*temperature, *humidity, conn);
            
            if(check_connection()==0)
            {
				insert_online(*temperature, *humidity, conn,con);
				}
				else
				{
					insert_offline();
					}
            
        } else {
            printf("Failed to read sensor data\n");
        }

        delay(1000);  
    }

    return 1;
	
}






int main() {
	 float temperature, humidity;
	MYSQL *conn;
	MYSQL *con;
	connect_database(&conn);
	fetch_data(&temperature,&humidity,conn);
	    mysql_close(conn);
	    
	    
	    if(check_connection()==0)
	    {
			fetch
			}
	
}


