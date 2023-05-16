#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QFile>
#include <QUrl>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QNetworkAccessManager networkManager;
    QNetworkReply *reply;
    QFile *downloadedFile;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void do_finished();
    void do_readyRead();
    void do_downloadProgress(qint64 bytesRead,qint64 totalBytes);

    void on_btnDefaultPath_clicked();

    void on_btnDownload_clicked();

    void on_editURL_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
