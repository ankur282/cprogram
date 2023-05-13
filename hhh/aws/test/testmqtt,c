#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mqtt.h>

#define AWS_IOT_ENDPOINT "a3t4i59m684ijv-ats.iot.ap-south-1.amazonaws.com"
#define AWS_IOT_PORT 8883
#define AWS_IOT_CA_CERT "/home/ankur/Documents/c_traning/hhh/aws/pubsub/raspberry-pi_pull_C/certs_c/AmazonRootCA1.pem"
#define AWS_IOT_CLIENT_CERT "/home/ankur/Documents/c_traning/hhh/aws/pubsub/raspberry-pi_pull_C/certs_c/certificate.pem.crt"
#define AWS_IOT_PRIVATE_KEY ""/home/ankur/Documents/c_traning/hhh/aws/pubsub/raspberry-pi_pull_C/certs_c/private.pem.key"

int main()
{
    MQTTClient client;
    MQTTClient_connectOptions conn_opts = MQTTClient_connectOptions_initializer;
    int rc;

    // Create a new MQTT client instance
    rc = MQTTClient_create(&client, AWS_IOT_ENDPOINT, "client1", MQTTCLIENT_PERSISTENCE_NONE, NULL);

    if (rc != MQTTCLIENT_SUCCESS) {
        fprintf(stderr, "Error: Failed to create MQTT client instance.\n");
        return 1;
    }

    // Set TLS options
    conn_opts.ssl = MQTTClient_SSLOptions_initializer;
    conn_opts.ssl.verify = 1;
    conn_opts.ssl.CApath = NULL;
    conn_opts.ssl.trustStore = AWS_IOT_CA_CERT;
    conn_opts.ssl.privateKey = AWS_IOT_PRIVATE_KEY;
    conn_opts.ssl.keyStore = AWS_IOT_CLIENT_CERT;
    conn_opts.ssl.privateKeyPassword = NULL;

    // Set MQTT username and password
  
    // Connect to AWS IoT MQTT broker
    rc = MQTTClient_connect(client, &conn_opts);

    if (rc != MQTTCLIENT_SUCCESS) {
        fprintf(stderr, "Error: Failed to connect to AWS IoT MQTT broker.\n");
        MQTTClient_destroy(&client);
        return 1;
    }

    // Publish data to AWS IoT MQTT broker
    char *payload = "Hello, AWS IoT!";
    MQTTClient_message pubmsg = MQTTClient_message_initializer;
    pubmsg.payload = payload;
    pubmsg.payloadlen = strlen(payload);
    pubmsg.qos = 0;
    pubmsg.retained = 0;
    MQTTClient_deliveryToken token;
    rc = MQTTClient_publishMessage(client, "mytopic", &pubmsg, &token);

    if (rc != MQTTCLIENT_SUCCESS) {
        fprintf(stderr, "Error: Failed to publish data to AWS IoT MQTT broker.\n");
        MQTTClient_destroy(&client);
        return 1;
    }

    // Disconnect from AWS IoT MQTT broker
    MQTTClient_disconnect(client, 0);
    MQTTClient_destroy(&client);

    return 0;
}

