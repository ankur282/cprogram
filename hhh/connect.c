#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <MQTTClient.h>

#define ADDRESS "a2d7b4vsi90j5r-ats.iot.ap-south-1.amazonaws.com:8883"
#define CLIENTID "ankurpc"
#define CERTIFICATE_PATH "/home/ankur/Documents/c_traning/hhh/aws/certificate.pem.crt"
#define PRIVATE_KEY_PATH "/home/ankur/Documents/c_traning/hhh/aws/private.pem.key"
#define ROOT_CA_PATH "/home/ankur/Documents/c_traning/hhh/aws/cert/RootCA1 (1).pem"
#define TOPIC "myTopic"

void mqtt_connect() {
    MQTTClient client;
    MQTTClient_connectOptions conn_opts = MQTTClient_connectOptions_initializer;
    MQTTClient_SSLOptions ssl_opts = MQTTClient_SSLOptions_initializer;
    int rc;

    MQTTClient_create(&client, ADDRESS, CLIENTID, MQTTCLIENT_PERSISTENCE_NONE, NULL);
    conn_opts.keepAliveInterval = 20;
    conn_opts.cleansession = 1;

    // Configure SSL options
    ssl_opts.privateKey = PRIVATE_KEY_PATH;
    ssl_opts.trustStore = ROOT_CA_PATH;
    ssl_opts.keyStore = CERTIFICATE_PATH;
    conn_opts.ssl = &ssl_opts;

    rc = MQTTClient_connect(client, &conn_opts);
    if (rc != MQTTCLIENT_SUCCESS) {
        printf("Failed to connect, return code %d\n", rc);
        exit(-1);
    }

    // Publish a message
    MQTTClient_message pubmsg = MQTTClient_message_initializer;
    pubmsg.payload = "{\"Temperature\":\"37\"}";
    pubmsg.payloadlen = strlen("{\"Temperature\":\"37\"}");
    pubmsg.qos = 1;
    pubmsg.retained = 0;
    MQTTClient_publishMessage(client, TOPIC, &pubmsg, NULL);

    // Disconnect
    MQTTClient_disconnect(client, 1000);
    MQTTClient_destroy(&client);
}

int main(void) {
    mqtt_connect();
    return 0;
}
