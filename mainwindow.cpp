#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
     ui(new Ui::MainWindow) // Initializes the UI pointer
{
    ui->setupUi(this);    // Sets up the actual widgets defined in the .ui file
}

MainWindow::~MainWindow()
{
    delete ui;            // Important: Clean up the memory allocated in the constructor
}



