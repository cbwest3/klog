/***************************************************************************
                          dataproxy.cpp  -  description
                             -------------------
    begin                : sept 2014
    copyright            : (C) 2014 by Jaime Robles
    email                : jaime@robles.es
 ***************************************************************************/

/*****************************************************************************
 * This file is part of KLog.                                             *
 *                                                                           *
 *    KLog is free software: you can redistribute it and/or modify         *
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

#include <QDebug>
#include "dataproxy.h"


DataProxy::DataProxy()
{
    //qDebug() << "DataProxy::DataProxy"  << endl;
}

DataProxy::~DataProxy()
{
}

QString DataProxy::getSoftVersion()
{
    return QString();
}
bool DataProxy::reconnectDB()
{
    return false;
}

QString DataProxy::getDBVersion()
{
    return QString();
}

void DataProxy::createLogModel(){}
void DataProxy::createLogPanel(){}
bool DataProxy::haveAtLeastOneLog(){return true;}
//QStringList DataProxy::getColumnNamesFromTable(const QString _tableName){return QStringList();}
QStringList DataProxy::getColumnNamesFromTableLog(){return QStringList();}

bool DataProxy::setDXCCAwardStatus(const int _qsoId){return false;}

bool DataProxy::setWAZAwardStatus(const int _qsoId){return false;}

int DataProxy::getIdFromModeName(const QString& _modeName)
{
    return -1;
}

int DataProxy::getIdFromBandName(const QString& _bandName)
{
    return -1;
}

int DataProxy::getSubModeIdFromSubMode(const QString _subModeName)
{
    return -1;
}

int DataProxy::getModeIdFromSubModeId(const int _sm)
{
    return -1;
}


bool DataProxy::isModeDeprecated (const QString _sm)
{
    return false;
}

QString DataProxy::getNameFromBandId (const int _id)
{
    return "";
}

QString DataProxy::getNameFromModeId (const int _id)
{
    return "";
}

QString DataProxy::getNameFromSubModeId (const int _id)
{
    return "";
}

QString DataProxy::getSubModeFromId (const int _id)
{
    return QString();
}

QString DataProxy::getNameFromSubMode (const QString _sm)
{
    return "";
}


QString DataProxy::getFreqFromBandId(const int _id)
{
    return "";
}

int DataProxy::getBandIdFromFreq(const double _n)
{
    return -1;
}

QString DataProxy::getBandNameFromFreq(const double _n)
{
    return QString();
}


double DataProxy::getLowLimitBandFromBandName(const QString _sm)
{
    return -1.0;
}

double DataProxy::getLowLimitBandFromBandId(const QString _sm)
{
    return -1.0;
}

bool DataProxy::isThisFreqInBand(const QString b, const QString fr)
{
    return false;
}

QStringList DataProxy::getBands()
{
    return QStringList();
}

QStringList DataProxy::getModes()
{
    return QStringList();
}

QStringList DataProxy::sortBandNamesBottonUp(const QStringList _qs)
{
    return QStringList();
}

QStringList DataProxy::sortBandIdBottonUp(const QStringList _qs)
{
    return QStringList();
}


QStringList DataProxy::getBandIDs()
{
    return QStringList();
}

QStringList DataProxy::getModesIDs()
{
    return QStringList();
}

QStringList DataProxy::getBandsInLog(const int _log)
{
    return QStringList();
}

QStringList DataProxy::getModesInLog(const int _log)
{
    return QStringList();
}

int DataProxy::getMostUsedBand(const int _log)
{
    return -1;
}

int DataProxy::getMostUsedMode(const int _log)
{
    return -1;
}


int DataProxy::getLastQSOid()
{
    return -1;

}

bool DataProxy::clearLog()
{
   return false;

}

bool DataProxy::qslSentViaDirect(const int _qsoId, const QString _updateDate)
{
    return false;
}


bool DataProxy::qslSentViaBureau(const int _qsoId, const QString _updateDate)
{
    return false;
}

bool DataProxy::qslRecViaBureau(const int _qsoId, const QString _updateDate)
{
    return false;
}

bool DataProxy::qslRecViaBureau(const int _qsoId, const QString _updateDate, const bool _queueSentQSL)
{
    return false;
}

bool DataProxy::qslRecViaDirect(const int _qsoId, const QString _updateDate, const bool _queueSentQSL)
{
    return false;
}

bool DataProxy::qslRecViaDirect(const int _qsoId, const QString _updateDate)
{
    return false;
}

bool DataProxy::qslSentAsRequested(const int _qsoId, const QString _updateDate)
{
    return false;
}

bool DataProxy::qslRecAsRequested(const int _qsoId, const QString _updateDate)
{
    return false;
}

bool DataProxy::setClubLogSent(const int _qsoId, const QString _st, const QString _updateDate)
{
    return false;
}

bool DataProxy::isQSLReceived(const int _qsoId)
{
    return false;
}

bool DataProxy::isQSLSent(const int _qsoId)
{
    return false;
}

int DataProxy::getBandFromId(const int _qsoId)
{
    return -1;
}

int DataProxy::getModeFromId(const int _qsoId)
{
    return -1;
}

int DataProxy::getDXCCFromId(const int _qsoId)
{
    return -1;
}

int DataProxy::getCQZFromId(const int _qsoId)
{
    return -1;
}

QString DataProxy::getCallFromId(const int _qsoId)
{
    return "";
}

QStringList DataProxy::getClubLogRealTimeFromId(const int _qsoId)
{
    return QStringList();
}

QString DataProxy::getNameFromQRZ(const QString _call)
{
    return QString();
}

QString DataProxy::getQTHFromQRZ(const QString _call)
{
    return QString();
}

QString DataProxy::getLocatorFromQRZ(const QString _call)
{
    return QString();
}

QString DataProxy::getIOTAFromQRZ(const QString _call)
{
    return QString();
}

QString DataProxy::getQSLViaFromQRZ(const QString _call)
{
    return QString();
}

bool DataProxy::updateAwardDXCC()
{
    return false;
}

bool DataProxy::updateAwardWAZ()
{
    return false;
}

bool DataProxy::addQSOFromWSJTX(const QString _dxcall, const double _freq, const QString _mode,
                                const QString _dx_grid, const QString _time_off, const QString _report_sent, const QString _report_rec,
                                const QString _tx_power, const QString _comments, const QString _name, const QString _time_on,
                                const int _dxcc, const QString _opQrz, const QString _stQrz, const QString _myLoc, const int _logN)
{
    return false;
}


bool DataProxy::deleteQSO(const int _qsoId)
{
    return false;
}

int DataProxy::isWorkedB4(const QString _qrz, const int _currentLog)
{
    return -1;
}

bool DataProxy::isThisQSODuplicated(const QString _qrz, const QString _date, const QString _time, const int _band, const int _mode)
{
    return false;
}


int DataProxy::getDuplicatedQSOId(const QString _qrz, const QString _date, const QString _time, const int _band, const int _mode)
{
    return -1;
}

bool DataProxy::isDXCCConfirmed(const int _dxcc, const int _currentLog)
{
    return false;
}

bool DataProxy::isHF(const int _band)
{
    return false;
}

bool DataProxy::isWARC(const int _band)
{
    return false;
}

bool DataProxy::isVHF(const int _band)
{
    return false;
}

bool DataProxy::isUHF(const int _band)
{
    return false;
}


QStringList DataProxy::getOperatingYears(const int _currentLog)
{
    return QStringList();
}

void DataProxy::compressDB()
{

}

bool DataProxy::unMarkAllQSO()
{
    return false;
}

bool DataProxy::lotwSentQueue(const QString _updateDate, const int _currentLog)
{// Mark LOTW QSL SENT as Q (Queued)
    return false;
}

bool DataProxy::lotwSentYes(const QString _updateDate, const int _currentLog, const QString _station)
{
    return false;
}

int DataProxy::getQSOonYear(const int _year, const int _logNumber)
{
    return -1;
}

int DataProxy::getDXCConYear(const int _year, const int _logNumber)
{
    return -1;
}

int DataProxy::getCQzonYear(const int _year, const int _logNumber)
{
    return -1;
}

int DataProxy::getQSOsWithDXCC(const int _dxcc, const int _logNumber)
{
    return -1;
}

int DataProxy::getQSOsAtHour(const int _hour, const int _log)
{
    return -1;
}

int DataProxy::getQSOsOnMonth(const int _month, const int _log)
{
    return -1;
}


bool DataProxy::newDXMarathon(const int _dxcc, const int _cq, const int _year, const int _logNumber)
{
    return false;
}

QStringList DataProxy::getContestNames()
{
    return QStringList();
}

QStringList DataProxy::getContestCat(const int _catn){
    return QStringList();
}

QStringList DataProxy::getContestOverlays()
{
    return QStringList();
}

QStringList DataProxy::getBandNames(){
    return QStringList();
}

QStringList DataProxy::getPropModeList()
{
    return QStringList();
}

bool DataProxy::clearSatList()
{
    return false;
}

bool DataProxy::addSatellite(const QString _arrlId, const QString _name, const QString _downLink, const QString _upLink, const QString _mode, int id)
{
    return false;
}

int DataProxy::getDBSatId(const QString _arrlId)
{
    return -1;
}

QStringList DataProxy::getSatellitesList()
{
    return QStringList();
}

QString DataProxy::getSatelliteUplink(const QString _sat)
{
    return QString();
}

QString DataProxy::getSatelliteDownlink(const QString _sat)
{
    return QString();
}

QString DataProxy::getSatelliteMode(const QString _sat)
{
    return QString();
}

QString DataProxy::getSatelliteFullUplink(const QString _sat)
{
    return QString();
}

QString DataProxy::getSatelliteFullDownlink(const QString _sat)
{
    return QString();
}

QString DataProxy::getSatelliteFullMode(const QString _sat)
{
    return QString();
}

QString DataProxy::getSatelliteName(const QString _sat)
{
    return QString();
}

QString DataProxy::getSateliteArrlIdFromId(const int _id)
{
    return QString();
}

QStringList DataProxy::getQSLRcvdList()
{
    return QStringList();
}

QStringList DataProxy::getQSLSentList()
{
    return QStringList();
}

QStringList DataProxy::getClubLogStatusList()
{
    return QStringList();
}

QStringList DataProxy::getQSLViaList()
{
    return QStringList();
}

QStringList DataProxy::getValidCatOptions(const int _currentCat, const int _lowerCa)
{
    return QStringList();
}

int DataProxy::getNumberOfManagedLogs()
{
    return -1;
}
int DataProxy::getMaxLogNumber()
{
    return -1;
}
QStringList DataProxy::getListOfManagedLogs()
{
    return QStringList();
}

QString DataProxy::getStationCallSignFromLog(const int _log)
{
    return QString();
}

QStringList DataProxy::getStationCallSignsFromLog(const int _log)
{
    return QStringList();
}

QString DataProxy::getOperatorsFromLog(const int _log)
{
    return QString();
}

QString DataProxy::getCommentsFromLog(const int _log)
{
    return QString();
}

QString DataProxy::getLogDateFromLog(const int _log)
{
    return QString();
}

QString DataProxy::getLogTypeNFromLog(const int _log)
{
    return QString();
}


int DataProxy::getContestTypeN(const int _co, const int _catop, const int _catas, const int _catpo, const int _catba, const int _catov, const int _catmo)
{
    return -1;
}
QStringList DataProxy::getDataFromContestType(const int _n)
{
    return QStringList();
}

int DataProxy::getLogTypeNumber(const QString _logType)
{
    return -1;
}

QString DataProxy::getLogTypeName(const int _logType)
{
    return QString();
}

QString DataProxy::getLogTypeOfUserLog(const int _logN)
{
    return QString();
}

int DataProxy::getLogNumberFromQSOId(const int _qsoId)
{
    return -1;
}

bool DataProxy::fillEmptyDXCCInTheLog()
{
    return false;
}

int DataProxy::getHowManyQSOInLog(const int _log)
{
    return 0;
}

int DataProxy::getHowManyConfirmedQSLInLog(const int _log)
{
    return 0;
}
int DataProxy::getHowManyQSLSentInLog(const int _log)
{
    return 0;
}

int DataProxy::getQSOsWithContinent(const QString _cont, const int _logNumber)
{
    return 0;
}

int DataProxy::getQSOsInBand(const QString _band, const int _log)
{
    return 0;
}

int DataProxy::getQSOsInMode(const QString _mode, const int _log)
{
    return 0;
}

bool DataProxy::addNewLog (const QStringList _qs)
{
    return false;
}

bool DataProxy::doesThisLogExist(const int _log)
{
    return false;
}

int DataProxy::getContinentIdFromContinentShortName(const QString _n)
{
    return -1;
}

QString DataProxy::getContinentShortNameFromEntity(const int _n)
{
    return QString();
}

int DataProxy::getContinentIdFromEntity(const int _n)
{
    return -1;
}

QStringList DataProxy::getContinentShortNames()
{
    return QStringList();
}

bool DataProxy::isValidContinentShortName(const QString _n)
{
    return false;
}

int DataProxy::getCQzFromPrefix(const QString _p)
{
    return -1;
}

int DataProxy::getITUzFromPrefix(const QString _p)
{
    return -1;
}

int DataProxy::getCQzFromEntity(const int _n)
{
    return -1;
}

int DataProxy::getITUzFromEntity(const int _n)
{
    return -1;
}

QString DataProxy::getEntityNameFromId(const int _n)
{
    return QString();
}

QString DataProxy::getEntityMainPrefix(const int _entityN)
{
    return QString();
}

int DataProxy::getDXCCFromPrefix(const QString _p)
{
    return -1;
}

bool DataProxy::isNewCQz(int _c)
{
    return false;
}

bool DataProxy::isNewEntity(int _e)
{
    return false;
}

double DataProxy::getLongitudeFromEntity(const int _e)
{
    return 0.0;
}

double DataProxy::getLatitudeFromEntity(const int _e)
{
    return 0.0;
}

QString DataProxy::getEntityPrefixes(const int _enti)
{
    return QString();
}

QStringList DataProxy::getEntitiesNames()
{
    return QStringList();
}

QStringList DataProxy::getEntitiesIds()
{
    return QStringList();
}

int DataProxy::getHowManyEntities()
{
    return -1;
}

int DataProxy::getMaxEntityID(bool limit)
{
    return -1;
}

bool DataProxy::updateISONames()
{
    return false;
}

QString DataProxy::getISOName(const int _n)
{
    return QString();
}

void DataProxy::getFoundInLog(const QString _txt, const int _log)
{
    //return false;
}
/*
bool DataProxy::queryPrepare(const QString _query)
{
    return false;
}

bool DataProxy::queryBind(const QString _field, const QString value)
{
    return false;
}


 bool DataProxy::queryExec()
{
    return false;
}
*/
