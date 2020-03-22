# ESP32 (ESP-IDF) WIFI CONTROL LIBRARY
 
ESP32 WIFI CONTROL library, based on ESP32 ESP-IDF EXAMPLES.

Handles wifi connection, reconnection, deactivation and SNTP connection.

Basic and easy functionality:

  wifi_activate(auto_reconnect, sntp_sync)

  wifi_deactivate()


## TODO: 

  Send notification of the last sync time (requires lib modification) to know if date is valid or not.

  Notify other processes of connection availability (GOT IP / LOST IP). function (on request) or though event queue.
  
  Extract user and password management: Remove #defines and use parameters on wifi_activate call.
  
  wifi section: Control key not valid (usr/key is used, but no error is returned in case of failure)
