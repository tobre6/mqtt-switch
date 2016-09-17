#ifndef WEBSERVER_H
#define WEBSERVER_H

class ESP8266WebServer;

class Webserver {
public:
  Webserver();
  void loop();

private:
  String uptime();
  ESP8266WebServer *server;
};

#endif




