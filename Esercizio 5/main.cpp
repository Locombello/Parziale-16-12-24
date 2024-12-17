#include <iostream>

#include "Handler.h"

int main() {
    Handler h;

    Credentials c1 = Credentials("admin", "admin", "16/12/24");
    Credentials c2 = Credentials("studente", "studente", "16/12/24");
    Credentials c3 = Credentials("docente", "docente", "16/12/24");

    h.addCredentials("URL1", c1);
    h.addCredentials("URL2", c2);
    h.addCredentials("URL3", c3);

    h.printCredentials();

    h.removeCredentials("URL1");
    h.modifyPassword("URL2", "studente", "STUDENTE");
    h.modifyPassword("URL3", "studente", "Studente");

    h.printCredentials();

    h.printFoundCredentials(h.findCredentials("URL1"));
    h.printFoundCredentials(h.findCredentials("URL2"));

    return 0;
}
