#include "saisieQT_main.h"

int saisieAppuisInitQT_main(QApplication &app, int argc, char *argv[])
{
    app.setApplicationName("SaisieAppuisInitQT");

    if ((argc>0)&&(std::string(argv[0]).find("SaisieQT")!= std::string::npos))
    {
        argv++;
        argc = argc -1;
    }

    Pt2di aSzW(800,800);
    Pt2di aNbFen(1,1);
    std::string aFullName, aDir, aName, aNamePt,anOri,anOut, aNameAuto, aPrefix2Add;
    aNameAuto = "NONE";
    aPrefix2Add = "";
    bool aForceGray = false;

    SaisieAppuisInit(argc, argv, aSzW, aNbFen, aFullName, aDir, aName, aNamePt, anOri, anOut, aNameAuto, aPrefix2Add, aForceGray);

    MainWindow w;

    w.setNbFen(QPoint(aNbFen.x, aNbFen.y));
    w.setSzFen(QPoint(aSzW.x, aSzW.y));

    w.resize( aSzW.x*aNbFen.x, aSzW.y*aNbFen.y );

    w.show();

   /*
        w.addFiles(aName);

    w.checkForLoadedData();*/

    return app.exec();
}