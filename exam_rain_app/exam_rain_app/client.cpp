#include "client.h"

#include <QThread>

Client::Client(QObject *parent) : QObject{parent} {
  QThread *t{new QThread};
  StationThread *st{new StationThread(/*passing parameters*/)};

  st->moveToThread(t);

  connect(t, &QThread::started, st, &StationThread::doSearch);
  connect(st, &StationThread::foundStation, this, &Client::handleFound);
  connect(t, &QThread::finished, st, &StationThread::deleteLater);

  t->start();
}

void Client::handleFound() {}
