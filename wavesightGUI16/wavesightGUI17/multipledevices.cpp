#include "multipledevices.h"
#include "ui_multipledevices.h"

MultipleDevices::MultipleDevices(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MultipleDevices)
{
    ui->setupUi(this);
    setFixedSize(800,800);
    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget->setTabText(0,"General Settings");
    ui->tabWidget->setTabText(1,"LAN Settings");
    ui->tabWidget->setTabText(2,"WLAN Settings");
    ui->tabWidget->setTabText(3,"Remote Settings");
//    ui->tabWidget->insertTab(2,new QTabWidget,"WLAN Settings");
//    ui->tabWidget->insertTab(3,new QTabWidget,"Remote Settings");
    ui->groupBox->setTitle("General Settings");
//    ui->groupBox_2->setTitle("Time Settings");
//    ui->groupBox_3->setTitle("Log Settings");
//    ui->pushButton->setText("Reboot");
//    ui->pushButton_2->setText("Apply");




   tabLANSettings();
}

void MultipleDevices::tabLANSettings()
{
    ui->groupBox_lan->setTitle("LAN Settings");
    ui->label_gtw->setText("Gateway");
    ui->label_dns->setText("DNS");

    ui->groupBox_dhcp->setTitle("DHCP Settings");
    ui->label_enabledhcp->setText("Enable DHCP Server");
    ui->label_startingip->setText("Staring IP Address");
    ui->label_endingip->setText("Ending IP Address");
    ui->label_netmask->setText("Net Mask");
    ui->label_gateway->setText("Gateway");
    ui->label_primaryDNSip->setText("Primary DNS IP Address");
    ui->label_secondaryDNSip->setText("Secondary DNS IP Address");
    ui->label_leasetime->setText("Lease Time");

    ui->groupBox_MACSettings->setTitle("MAC Client Settings");
    ui->label_indexofinterface->setText("Index of Interface");
    ui->label_enableMACaddresslist->setText("Enable MAC Address List");
    ui->label_MACaddresslist->setText("MAC Address List");

    ui->pushButton_apply->setText("Apply");
}

//void MultipleDevices::tabWLANSettings()
//{
//    ui->groupBox_wlansettings->setTitle("WLAN Settings");
//    ui->label_enablefirstwirelesscard->setText("Enable First Wireless Card");
//    ui->label_enablesecondwirelesscard->setText("Enable Second Wireless Card");

//    ui->label_deviceoperationmode->setText("Device Operartion Mode");
//    QStringList list=(QStringList()<<"sarbani"<<"red"<<"yellow");
//    ui->comboBox_deviceoperationmode->addItems(list);

//    ui->label_wirelessoperatingmode->setText("Wireless Operating Mode");
//    ui->label_ssid->setText("SSID");
//    ui->label_countrycode->setText("Country Code");
//    ui->label_channel->setText("Channel");
//    ui->label_datarate->setText("Data Rate");
//    ui->label_wirelessmulti->setText("Support Wireless Multimedia");
//    ui->label_beaconinterval->setText("Beacon Interval");
//    ui->label_RTSthreshold->setText("RTS Threshold");
//    ui->label_fragmentationthreshold->setText("Fragmentation Threshold");
//    ui->label_dtim->setText("DTIM Period");
//    ui->label_guardinterval->setText("Guard Interval");
//    ui->label_hidessid->setText("Hide SSID");
//    ui->label_gateway_2->setText("Gateway");
//    ui->label_dns_2->setText("DNS");

//}

MultipleDevices::~MultipleDevices()
{
    delete ui;
}
