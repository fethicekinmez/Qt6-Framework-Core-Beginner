#include <QCoreApplication>
#include "radio.h"
#include "station.h"
#include <QTextStream>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Radio boombox;
    Station* channels[3];

    // create some stations
    channels[0] = new Station(&boombox, 104, "Rock and Roll"); // boombox is on stack, when it deleted automatically heap variable will be deleted as well(no memory leak)
    channels[1] = new Station(&boombox, 94, "Classic");
    channels[2] = new Station(&boombox, 108, "R&D");

    QObject::connect(&boombox, &Radio::quit, &a, QCoreApplication::quit, Qt::QueuedConnection); // whenever radio quit emitting, application quits (aline in the same thread)

    do{
        qInfo() << "Enter on, off, test or quit";
        QTextStream qtin(stdin);
        QString line = qtin.readLine().trimmed().toUpper();

        if(line == "ON"){
            qInfo() << "Turning the radio on";
            // connecting each station with the radio
            for(size_t i=0; i<3; i++){
                QObject::connect(channels[i], &Station::send, &boombox, &Radio::listen);
            }
            qInfo() << "Radio is ON";
        }
        if(line == "OFF"){
            qInfo() << "Turning the radio off";
            // disconnecting each station with the radio
            for(size_t i=0; i<3; i++){
                QObject::disconnect(channels[i], &Station::send, &boombox, &Radio::listen);
            }
            qInfo() << "Radio is OFF";
        }
        if(line == "TEST"){
            qInfo() << "Testing...";
            // disconnecting each station with the radio
            for(size_t i=0; i<3; i++){
                channels[i]->broadcast("Broadcasting Live!");
            }
            qInfo() << "Test COMPLETE";
        }
        if(line == "QUIT"){
            qInfo() << "Quiting the radio...";
            emit boombox.quit();
            break;
        }
        qInfo("----------------------------------------");

    }while(true);

    return a.exec();
}
