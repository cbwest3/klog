#ifndef SETUPPAGEDXCLUSTER_H
#define SETUPPAGEDXCLUSTER_H

/***************************************************************************
                          setuppagedxcluster.h  -  description
                             -------------------
    begin                : nov 2011
    copyright            : (C) 2011 by Jaime Robles
    email                : jaime@robles.es
 ***************************************************************************/

/*****************************************************************************
 * This file is part of KLog.                                             *
 *                                                                           *
 *    KLog is free software: you can redistribute it and/or modify        *
 *    it under the terms of the GNU General Public License as published by   *
 *    the Free Software Foundation, either version 3 of the License, or      *
 *    (at your option) any later version.                                    *
 *                                                                           *
 *    KLog is distributed in the hope that it will be useful,             *
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
 *    GNU General Public License for more details.                           *
 *                                                                           *
 *    You should have received a copy of the GNU General Public License      *
 *    along with KLog.  If not, see <http://www.gnu.org/licenses/>.       *
 *                                                                           *
 *****************************************************************************/

//#include <QtWidgets>
//#include <QSqlQuery>
//#include <QStringList>
//#include <QListWidget>
#include <QtWidgets>


class SetupPageDxCluster : public QWidget {
    Q_OBJECT

public:
    SetupPageDxCluster(QWidget *parent=0);
    ~SetupPageDxCluster();

    QStringList getDxclusterServersComboBox();
    void setDxclusterServersComboBox(const QStringList t);
    QString getSelectedDxClusterServer();
    void setSelectedDxClusterServer(const QString t);

    QString getShowHFRadiobutton();
    QString getShowVHFRadiobutton();
    QString getShowWARCRadiobutton();
    QString getShowWorkedRadiobutton();
    QString getShowConfirmedRadiobutton();
    QString getShowANNRadiobutton();
    QString getShowWWVRadiobutton();
    QString getShowWCYRadiobutton();

    void setShowHFRadiobutton(const QString t);
    void setShowVHFRadiobutton(const QString t);
    void setShowWARCRadiobutton(const QString t);
    void setShowWorkedRadiobutton(const QString t);
    void setShowConfirmedRadiobutton(const QString t);
    void setShowANNRadiobutton(const QString t);
    void setShowWWVRadiobutton(const QString t);
    void setShowWCYRadiobutton(const QString t);

private slots:
    void slotAddButtonClicked();
    void slotDeleteButtonClicked();

private:

    void createActions();
    bool checkIfValidDXCluster (const QString &tdxcluster);
    bool checkIfNewDXCluster (const QString &tdxcluster);


    QComboBox *dxclusterServersComboBox;
    QPushButton *addClusterButton;
    QPushButton *deleteClusterButton;

    QRadioButton *showHFRadiobutton;
    QRadioButton *showVHFRadiobutton;
    QRadioButton *showWARCRadiobutton;
    QRadioButton *showWorkedRadiobutton;
    QRadioButton *showConfirmedRadiobutton;
    QRadioButton *showANNRadiobutton;
    QRadioButton *showWWVRadiobutton;
    QRadioButton *showWCYRadiobutton;

    QRadioButton *saveAllDXClusterDataRadiobutton;

    //QStringList dxClusterServers;

};

#endif // SETUPPAGEDXCLUSTER_H

