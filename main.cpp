#include<mywidget.h>
using namespace std;
int main(int argc,char* argv[])
{
    QApplication app(argc,argv);
    app.setApplicationName("github_timer");
    QWidget *app_main=new MyWidget();
    app_main->show();
    return app.exec();
}
