from AWSIoTPythonSDK.MQTTLib import AWSIoTMQTTClient

myMQTTClient = AWSIoTMQTTClient("ankurpc") #random key, if another connection using the same key is opened the previous one is auto closed by AWS IOT
myMQTTClient.configureEndpoint("a2d7b4vsi90j5r-ats.iot.eu-north-1.amazonaws.com", 8883)

myMQTTClient.configureCredentials("/home/ankur/Documents/pythonfile/root-CA.pem", "/home/ankur/Documents/pythonfile/ankurpc.private.pem.key", "/home/ankur/Documents/pythonfile/ankurpc.pem.crt")

myMQTTClient.configureOfflinePublishQueueing(-1) # Infinite offline Publish queueing
myMQTTClient.configureDrainingFrequency(2) # Draining: 2 Hz
myMQTTClient.configureConnectDisconnectTimeout(10) # 10 sec
myMQTTClient.configureMQTTOperationTimeout(5) # 5 sec


myMQTTClient.connect()


myMQTTClient.publish(topic="myTopic",QoS=1,payload='{"Temperature":"37"}')
myMQTTClient.disconnect()


