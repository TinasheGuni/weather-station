#include "stationthread.h"

StationThread::StationThread(QString stn) {}

void StationThread::doSearch() {
  foreach (/*rain record in the data*/) {
    // get the station, date, and mm as strings
    if (/*this station in the data*/ == station)
      emit foundStation(/*date as string*/, /*mm as string*/);
  }
}

QString StationThread::foundStation(QString data, QString mm) {}
