#include <stdio.h>
#include<mosquitto.h>
#include<string.h>

#define AWS_IOT_ENDPOINT "a2d7b4vsi90j5r-ats.iot.eu-north-1.amazonaws.com"
#define AWS_PORT 8883
#define AWS_TOPIC "myTopic"
#define MQTT_PAYLOAD "hello world.."

int main(int argc, char *argv[])
{
    struct mosquitto *mosq = NULL;
    int rc = 0;
    mosquitto_lib_init();
    mosq = mosquitto_new(NULL, true, NULL);
    if (!mosq) {
        fprintf(stderr, "Error: Out of memory.\n");
        return 1;
    }
rc = mosquitto_tls_set(mosq,"/home/ankur/Documents/c_traning/hhh/awspy/RootCA1.pem",NULL,"/home/ankur/Documents/c_traning/hhh/awspy/certificate.pem.crt","/home/ankur/Documents/c_traning/hhh/awspy/private.pem.key", NULL);
if (rc != MOSQ_ERR_SUCCESS) {
    fprintf(stderr, "Error: Unable to set TLS options: %s.\n", mosquitto_strerror(rc));
    return 1;
    
rc = mosquitto_connect(mosq, AWS_IOT_ENDPOINT, AWS_PORT, 60);
    if (rc != MOSQ_ERR_SUCCESS) {
        fprintf(stderr, "Error: Unable to connect to AWS IoT MQTT broker: %s.\n", mosquitto_strerror(rc));
        return 1;
    }
rc = mosquitto_publish(mosq, NULL, AWS_TOPIC,strlen(MQTT_PAYLOAD), MQTT_PAYLOAD, 0, false);
    if (rc != MOSQ_ERR_SUCCESS) {
        fprintf(stderr, "Error: Unable to publish MQTT message: %s.\n", mosquitto_strerror(rc));
        return 1;
    }


mosquitto_loop_forever(mosq, -1, 1);
mosquitto_destroy(mosq);
mosquitto_lib_cleanup();
return 0;
}
