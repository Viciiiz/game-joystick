import network
import binascii

wifi = network.WLAN(network.STA_IF)
wifi.active(True)
mac = wifi.config("mac")
print(binascii.hexlify(mac).decode())

