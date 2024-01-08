#ifndef STATIONTHREAD_H
#define STATIONTHREAD_H

#include <QObject>

class StationThread : public QObject {
  Q_OBJECT
public:
  StationThread(/*all data,*/ QString stn);

public slots:
  void doSearch();

signals:
  QString foundStation(QString data, QString mm);

private:
  /*all data type*/ *record;
  QString station;
};

#endif // STATIONTHREAD_H
