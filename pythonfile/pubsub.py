from AWSIoTPythonSDK.MQTTLib import AWSIoTMQTTClient

# For certificate based connection
myMQTTClient = AWSIoTMQTTClient("myClientID")
# For Websocket connection
# myMQTTClient = AWSIoTMQTTClient("myClientID", useWebsocket=True)
# Configurations
# For TLS mutual authentication
myMQTTClient.configureEndpoint("a2d7b4vsi90j5r-ats.iot.eu-north-1.amazonaws.com", 8883)
# For Websocket
# myShadowClient.configureEndpoint("YOUR.ENDPOINT", 443)

myMQTTClient.configureCredentials("/home/ankur/Documents/pythonfile/root-CA.pem", "/home/ankur/Documents/pythonfile/ankurpc.private.pem.key", "/home/ankur/Documents/pythonfile/ankurpc.pem.crt")
# For Websocket, we only need to configure the root CA
# myMQTTClient.configureCredentials("YOUR/ROOT/CA/PATH")
myMQTTClient.configureOfflinePublishQueueing(-1)  # Infinite offline Publish queueing
myMQTTClient.configureDrainingFrequency(2)  # Draining: 2 Hz
myMQTTClient.configureConnectDisconnectTimeout(10)  # 10 sec
myMQTTClient.configureMQTTOperationTimeout(5)  # 5 sec

myMQTTClient.connect()
myMQTTClient.publish("myTopic", "myPayload", 0)
#myMQTTClient.subscribe("myTopic", 1, customCallback)
#myMQTTClient.unsubscribe("myTopic")
myMQTTClient.disconnect()