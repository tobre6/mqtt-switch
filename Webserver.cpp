#include <ESP8266WebServer.h>
#include <ESP8266HTTPUpdateServer.h>

#include "Webserver.h"
#include "Settings.h"
#include "default_settings.h"
#include "version.h"


Webserver::Webserver(Settings* settings) {
  this->settings = settings;
  server = new ESP8266WebServer(80);
  httpUpdater = new ESP8266HTTPUpdateServer();

  String name = settings->getName();
  char host[name.length()];

  httpUpdater->setup(server);
  server->begin();
}

void Webserver::loop() {
  server->handleClient();
}
