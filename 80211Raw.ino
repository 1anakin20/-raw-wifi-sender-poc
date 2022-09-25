#include "raw80211.h"

Raw80211 raw80211;

void setup() {
    Serial.begin(115200);
    Serial.println("Starting raw80211");
    raw80211.init(Raw80211::_bssid, 1);
    raw80211.start();
}

void loop() {
    uint8_t data[] = "Hello world, it is me mario";
    raw80211.send(data, sizeof(data));
}