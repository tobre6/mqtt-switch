#ifndef WEBSERVER_H
#define WEBSERVER_H

class ESP8266WebServer;
class ESP8266HTTPUpdateServer;
class Settings;

class Webserver {
public:
  Webserver(Settings*);
  void loop();

private:
  String uptime();
  Settings *settings;
  ESP8266WebServer *server;
  ESP8266HTTPUpdateServer *httpUpdater;
};

#endif




