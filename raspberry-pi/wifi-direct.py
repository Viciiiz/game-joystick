import network

ssid = "DIRECT-XY-PI"
password = ""

wifi = network.WLAN(network.STA_IF)
wifi.active(True)
wifi.connect(ssid, password)

while not wifi.isconnected():
    pass

print("Connected to WiFi Direct network")
print("IP address:", wifi.ifconfig()[0])
