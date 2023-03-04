#include<keyscan.h>
#include<mywidget.h>
#include<QDebug>
using namespace std;
void MyWidget::Timer_dock()
{
    show_time->setText(QDateTime::currentDateTime().toString("hh:mm:ss"));
    show_time->show();
    show_key1->show();
    show_key2->show();
    show_key3->show();
}
MyWidget::MyWidget(QWidget *parent)
    :QWidget(parent)
{
    keyScan * btnCheck = new keyScan(this);
    connect(btnCheck,&keyScan::sig_keyPressed,this,[=](unsigned char c){
        if ((c==50)or(c==62))
        {
            on_shift=true;
        }
        if (c==66)
        {
            on_capslock=not on_capslock;
        }
        if (c==77)
        {
            on_numlock=not on_numlock;
        }
        if ((on_capslock==false)and(on_shift==false)and(on_numlock==true)){
            key_list1={{9,"Esc"},{67,"F1"},{68,"F2"},{69,"F3"},{70,"F4"},{71,"F5"},{72,"F6"},{73,"F7"},{74,"F8"},{75,"F9"},{76,"F10"},{95,"F11"},{96,"F12"},{107,"PrintScreen"},{78,"ScroolLock"},{127,"PauseBreak"},{49,"`"},{10,"1"},{11,"2"},{12,"3"},{13,"4"},{14,"5"},{15,"6"},{16,"7"},{17,"8"},{18,"9"},{19,"0"},{20,"-"},{21,"="},{22,"Backspace"},{118,"Insert"},{110,"Home"},{112,"PageUp"},{77,"NumLock"},{106,"/"},{63,"*"},{82,"-"},{23,"Tab"},{24,"q"},{25,"w"},{26,"e"},{27,"r"},{28,"t"},{29,"y"},{30,"u"},{31,"i"},{32,"o"},{33,"p"},{34,"["},{35,"]"},{36,"Enter"},{119,"Delete"},{115,"End"},{117,"PageDown"},{79,"7"},{80,"8"},{81,"9"},{86,"+"},{66,"CapsLock"},{38,"a"},{39,"s"},{40,"d"},{41,"f"},{42,"g"},{43,"h"},{44,"j"},{45,"k"},{46,"l"},{47,";"},{48,"’"},{51,"、"},{83,"4"},{84,"5"},{85,"6"},{50,"Shift"},{52,"z"},{53,"x"},{54,"c"},{55,"v"},{56,"b"},{57,"n"},{58,"m"},{59,","},{60,"."},{61,"/"},{62,"Shift"},{111,"↑"},{87,"1"},{88,"2"},{89,"3"},{104,"Enter"},{37,"Ctrl"},{133,"Launcher"},{64,"Alt"},{65,"Space"},{108,"Alt"},{134,"Launcher"},{135,"Appl"},{105,"Ctrl"},{113,"←"},{116,"↓"},{114,"→"},{90,"0"},{91,"."}};
        }
        if (on_capslock==true){
            key_list1={{9,"Esc"},{67,"F1"},{68,"F2"},{69,"F3"},{70,"F4"},{71,"F5"},{72,"F6"},{73,"F7"},{74,"F8"},{75,"F9"},{76,"F10"},{95,"F11"},{96,"F12"},{107,"PrintScreen"},{78,"ScroolLock"},{127,"PauseBreak"},{49,"`"},{10,"1"},{11,"2"},{12,"3"},{13,"4"},{14,"5"},{15,"6"},{16,"7"},{17,"8"},{18,"9"},{19,"0"},{20,"-"},{21,"="},{22,"Backspace"},{118,"Insert"},{110,"Home"},{112,"PageUp"},{77,"NumLock"},{106,"/"},{63,"*"},{82,"-"},{23,"Tab"},{24,"Q"},{25,"W"},{26,"E"},{27,"R"},{28,"T"},{29,"Y"},{30,"U"},{31,"I"},{32,"O"},{33,"P"},{34,"["},{35,"]"},{36,"Enter"},{119,"Delete"},{115,"End"},{117,"PageDown"},{79,"7"},{80,"8"},{81,"9"},{86,"+"},{66,"CapsLock"},{38,"A"},{39,"S"},{40,"D"},{41,"F"},{42,"G"},{43,"H"},{44,"J"},{45,"K"},{46,"L"},{47,";"},{48,"’"},{51,"、"},{83,"4"},{84,"5"},{85,"6"},{50,"Shift"},{52,"Z"},{53,"X"},{54,"C"},{55,"V"},{56,"B"},{57,"N"},{58,"M"},{59,","},{60,"."},{61,"/"},{62,"Shift"},{111,"↑"},{87,"1"},{88,"2"},{89,"3"},{104,"Enter"},{37,"Ctrl"},{133,"Launcher"},{64,"Alt"},{65,"Space"},{108,"Alt"},{134,"Launcher"},{135,"Appl"},{105,"Ctrl"},{113,"←"},{116,"↓"},{114,"→"},{90,"0"},{91,"."}};
        }
        if (on_numlock==false){
            key_list1={{9,"Esc"},{67,"F1"},{68,"F2"},{69,"F3"},{70,"F4"},{71,"F5"},{72,"F6"},{73,"F7"},{74,"F8"},{75,"F9"},{76,"F10"},{95,"F11"},{96,"F12"},{107,"PrintScreen"},{78,"ScroolLock"},{127,"PauseBreak"},{49,"`"},{10,"1"},{11,"2"},{12,"3"},{13,"4"},{14,"5"},{15,"6"},{16,"7"},{17,"8"},{18,"9"},{19,"0"},{20,"-"},{21,"="},{22,"Backspace"},{118,"Insert"},{110,"Home"},{112,"PageUp"},{77,"NumLock"},{106,"/"},{63,"*"},{82,"-"},{23,"Tab"},{24,"q"},{25,"w"},{26,"e"},{27,"r"},{28,"t"},{29,"y"},{30,"u"},{31,"i"},{32,"o"},{33,"p"},{34,"["},{35,"]"},{36,"Enter"},{119,"Delete"},{115,"End"},{117,"PageDown"},{79,"Home"},{80,"↑"},{81,"PgUp"},{86,"+"},{66,"CapsLock"},{38,"a"},{39,"s"},{40,"d"},{41,"f"},{42,"g"},{43,"h"},{44,"j"},{45,"k"},{46,"l"},{47,";"},{48,"’"},{51,"、"},{83,"←"},{84," "},{85,"→"},{50,"Shift"},{52,"z"},{53,"x"},{54,"c"},{55,"v"},{56,"b"},{57,"n"},{58,"m"},{59,","},{60,"."},{61,"/"},{62,"Shift"},{111,"↑"},{87,"End"},{88,"↓"},{89,"PgDn"},{104,"Enter"},{37,"Ctrl"},{133,"Launcher"},{64,"Alt"},{65,"Space"},{108,"Alt"},{134,"Launcher"},{135,"Appl"},{105,"Ctrl"},{113,"←"},{116,"↓"},{114,"→"},{90,"Ins"},{91,"Del"}};
        }
        if (on_shift==true){
            key_list1={{9,"Esc"},{67,"F1"},{68,"F2"},{69,"F3"},{70,"F4"},{71,"F5"},{72,"F6"},{73,"F7"},{74,"F8"},{75,"F9"},{76,"F10"},{95,"F11"},{96,"F12"},{107,"PrintScreen"},{78,"ScroolLock"},{127,"PauseBreak"},{49,"~"},{10,"!"},{11,"@"},{12,"#"},{13,"$"},{14,"%"},{15,"^"},{16,"&"},{17,"*"},{18,"("},{19,")"},{20,"_"},{21,"+"},{22,"Backspace"},{118,"Insert"},{110,"Home"},{112,"PageUp"},{77,"NumLock"},{106,"/"},{63,"*"},{82,"-"},{23,"Tab"},{24,"Q"},{25,"W"},{26,"E"},{27,"R"},{28,"T"},{29,"Y"},{30,"U"},{31,"I"},{32,"O"},{33,"P"},{34,"{"},{35,"}"},{36,"Enter"},{119,"Delete"},{115,"End"},{117,"PageDown"},{79,"Home"},{80,"↑"},{81,"PgUp"},{86,"+"},{66,"CapsLock"},{38,"A"},{39,"S"},{40,"D"},{41,"F"},{42,"G"},{43,"H"},{44,"J"},{45,"K"},{46,"L"},{47,":"},{48,"”"},{51,"|"},{83,"←"},{84," "},{85,"→"},{50,"Shift"},{52,"Z"},{53,"X"},{54,"C"},{55,"V"},{56,"B"},{57,"N"},{58,"M"},{59,"<"},{60,">"},{61,"?"},{62,"Shift"},{111,"↑"},{87,"End"},{88,"↓"},{89,"PgDn"},{104,"Enter"},{37,"Ctrl"},{133,"Launcher"},{64,"Alt"},{65,"Space"},{108,"Alt"},{134,"Launcher"},{135,"Appl"},{105,"Ctrl"},{113,"←"},{116,"↓"},{114,"→"},{90,"Ins"},{91,"Del"}};
        }
        if ((on_capslock==true)and(on_numlock==false)){
            key_list1={{9,"Esc"},{67,"F1"},{68,"F2"},{69,"F3"},{70,"F4"},{71,"F5"},{72,"F6"},{73,"F7"},{74,"F8"},{75,"F9"},{76,"F10"},{95,"F11"},{96,"F12"},{107,"PrintScreen"},{78,"ScroolLock"},{127,"PauseBreak"},{49,"`"},{10,"1"},{11,"2"},{12,"3"},{13,"4"},{14,"5"},{15,"6"},{16,"7"},{17,"8"},{18,"9"},{19,"0"},{20,"-"},{21,"="},{22,"Backspace"},{118,"Insert"},{110,"Home"},{112,"PageUp"},{77,"NumLock"},{106,"/"},{63,"*"},{82,"-"},{23,"Tab"},{24,"Q"},{25,"W"},{26,"E"},{27,"R"},{28,"T"},{29,"Y"},{30,"U"},{31,"I"},{32,"O"},{33,"P"},{34,"["},{35,"]"},{36,"Enter"},{119,"Delete"},{115,"End"},{117,"PageDown"},{79,"Home"},{80,"↑"},{81,"PgUp"},{86,"+"},{66,"CapsLock"},{38,"A"},{39,"S"},{40,"D"},{41,"F"},{42,"G"},{43,"H"},{44,"J"},{45,"K"},{46,"L"},{47,";"},{48,"‘"},{51,"、"},{83,"←"},{84," "},{85,"→"},{50,"Shift"},{52,"Z"},{53,"X"},{54,"C"},{55,"V"},{56,"B"},{57,"N"},{58,"M"},{59,","},{60,"."},{61,"/"},{62,"Shift"},{111,"↑"},{87,"End"},{88,"↓"},{89,"PgDn"},{104,"Enter"},{37,"Ctrl"},{133,"Launcher"},{64,"Alt"},{65,"Space"},{108,"Alt"},{134,"Launcher"},{135,"Appl"},{105,"Ctrl"},{113,"←"},{116,"↓"},{114,"→"},{90,"Ins"},{91,"Del"}};
        }
        auto Find=key_list1.find(int(c))->second;
        if ((key1==false)and(start_doing==false))
        {
            start_doing=true;
            show_key1->setText(QString::fromStdString(Find));
            key1=true;
        }
        if ((key1==true)and(key2==false)and(start_doing==false))
        {
            start_doing=true;
            show_key2->setText(QString::fromStdString(Find));
            key2=true;
        }
        if ((key1==true)and(key2==true)and(key3==false)and(start_doing==false))
        {
            start_doing=true;
            show_key3->setText(QString::fromStdString(Find));
            key3=true;
        }
        if ((key1==true)and(key2==true)and(key3==true)and(start_doing==false))
        {
            start_doing=true;
            show_key1->setText(show_key2->text());
            show_key2->setText(show_key3->text());
            show_key3->setText(QString::fromStdString(Find));
        }
        key_list1.clear();
        start_doing=false;
    });
    connect(btnCheck,&keyScan::sig_keyRelease,this,[=](unsigned char c){
        if ((c==50)or(c==62))
        {
            on_shift=false;
        }
    });
    connect(btnCheck,&keyScan::sig_buttonPressed,this,[=](unsigned char c){
        if (c==3)
        {
            if ((key1==false)and(start_doing==false))
            {
                start_doing=true;
                show_key1->setText("RightButton");
                key1=true;
            }
            if ((key1==true)and(key2==false)and(start_doing==false))
            {
                start_doing=true;
                show_key2->setText("RightButton");
                key2=true;
            }
            if ((key1==true)and(key2==true)and(key3==false)and(start_doing==false))
            {
                start_doing=true;
                show_key3->setText("RightButton");
                key3=true;
            }
            if ((key1==true)and(key2==true)and(key3==true)and(start_doing==false))
            {
                start_doing=true;
                show_key1->setText(show_key2->text());
                show_key2->setText(show_key3->text());
                show_key3->setText("RightButton");
            }
        }
        if (c==2)
        {
            if ((key1==false)and(start_doing==false))
            {
                start_doing=true;
                show_key1->setText("MiddleButton");
                key1=true;
            }
            if ((key1==true)and(key2==false)and(start_doing==false))
            {
                start_doing=true;
                show_key2->setText("MiddleButton");
                key2=true;
            }
            if ((key1==true)and(key2==true)and(key3==false)and(start_doing==false))
            {
                start_doing=true;
                show_key3->setText("MiddleButton");
                key3=true;
            }
            if ((key1==true)and(key2==true)and(key3==true)and(start_doing==false))
            {
                start_doing=true;
                show_key1->setText(show_key2->text());
                show_key2->setText(show_key3->text());
                show_key3->setText("MiddleButton");
            }
        }
        if (c==1)
        {
            if ((key1==false)and(start_doing==false))
            {
                start_doing=true;
                show_key1->setText("LeftButton");
                key1=true;
            }
            if ((key1==true)and(key2==false)and(start_doing==false))
            {
                start_doing=true;
                show_key2->setText("LeftButton");
                key2=true;
            }
            if ((key1==true)and(key2==true)and(key3==false)and(start_doing==false))
            {
                start_doing=true;
                show_key3->setText("LeftButton");
                key3=true;
            }
            if ((key1==true)and(key2==true)and(key3==true)and(start_doing==false))
            {
                start_doing=true;
                show_key1->setText(show_key2->text());
                show_key2->setText(show_key3->text());
                show_key3->setText("LeftButton");
            }
        }
        start_doing=false;
    });
    btnCheck->start();
    ifstream load_data;
    load_data.open("files/data/data.txt",ios::in);
    string s;
    while(load_data>>s)
    {
        load_data>>the_show_way>>lock_way>>s;
    }
    load_data.close();
    on_top->setIcon(QIcon("files/image/this.svg"));
    on_under->setIcon(QIcon("files/image/this.svg"));
    lock_unlock->setIcon(QIcon("files/image/this.svg"));
    show_way->addAction(on_top);
    show_way->addAction(on_under);
    menu->addMenu(show_way);
    menu->addAction(lock_unlock);
    menu->addAction(exit_main);
    timer->setInterval(10);
    connect(timer,SIGNAL(timeout()),this,SLOT(Timer_dock()));
    show_gif->setMovie(main_gif);
    setWindowFlags(Qt::Tool|Qt::FramelessWindowHint|Qt::Popup);
    setAttribute(Qt::WA_TranslucentBackground, true);
    setAutoFillBackground(false);
    main_gif->setScaledSize(QSize(200,142));
    QDateTime time1 = QDateTime::currentDateTime();
    QString time2 = time1.toString("ss");
    while ((QDateTime::currentDateTime().toString("ss"))!=time2)
    {
        ;
    }
    timer->start();
    main_gif->start();
    show_gif->resize(200,142);
    show_time->move(50,150);
    show_key1->move(0,0);
    show_key2->move(66,0);
    show_key3->move(132,0);
    show_key1->resize(66,30);
    show_key2->resize(66,30);
    show_key3->resize(66,30);
    show_gif->move(0,30);
    show_time->resize(100,50);
    resize(200,200);
    show_time->setStyleSheet("font-size:20px;");
    show_key1->setStyleSheet("font-size:10px;");
    show_key2->setStyleSheet("font-size:10px;");
    show_key3->setStyleSheet("font-size:10px;");
    show_gif->show();
    MyWidget::move(QApplication::desktop()->width()-200,QApplication::desktop()->height()/2);
    if (lock_way == char(0))
    {
        lock_unlock->setIconVisibleInMenu(false);
    }
    else
    {
        lock_unlock->setIconVisibleInMenu(true);
    }
    if (the_show_way == char(0))
    {
        on_top->setIconVisibleInMenu(true);
        on_under->setIconVisibleInMenu(false);
        setAttribute(Qt::WA_X11NetWmWindowTypeDock, true);
        setWindowFlags(windowFlags()&~Qt::WindowStaysOnBottomHint);
    }
    else
    {
        on_top->setIconVisibleInMenu(false);
        on_under->setIconVisibleInMenu(true);
        setAttribute(Qt::WA_X11NetWmWindowTypeDock, true);
        setWindowFlags(windowFlags()|Qt::WindowStaysOnBottomHint);
    }
}
void MyWidget::contextMenuEvent(QContextMenuEvent *event)
{
    QAction *know_what=menu->exec(mapToGlobal(event->pos()));
    if (know_what == exit_main)
    {
        fstream f;
        f.open("files/data/data.txt",ios::out);
        f<<"//data"<<"\n"<<char(the_show_way)<<"\n"<<char(lock_way)<<endl;
        f.close();
        MyWidget::close();
        QApplication::exit();
    }
    if (know_what == lock_unlock)
    {
        if (lock_way == char(1))
        {
            lock_way = 0;
            lock_unlock->setIconVisibleInMenu(false);
        }
        else
        {
            lock_way = 1;
            lock_unlock->setIconVisibleInMenu(true);
        }
    }
    if (know_what == on_top)
    {
        the_show_way = 0;
        on_top->setIconVisibleInMenu(true);
        on_under->setIconVisibleInMenu(false);
        setWindowFlags(windowFlags()&~Qt::WindowStaysOnBottomHint);
        setAttribute(Qt::WA_X11NetWmWindowTypeDock, true);
        show();
    }
    if (know_what == on_under)
    {
        the_show_way = 1;
        on_top->setIconVisibleInMenu(false);
        on_under->setIconVisibleInMenu(true);
        setAttribute(Qt::WA_X11NetWmWindowTypeDock, false);
        setWindowFlags(windowFlags()|Qt::WindowStaysOnBottomHint);
        show();
    }
}
void MyWidget::mousePressEvent(QMouseEvent *event)
{
    if (lock_way==0)
    {
        if(event->buttons() == Qt::LeftButton)
        {
            left_mouse = true;
        }
        else
        {
            left_mouse = false;
        }
        mouse_pos_x = event->globalPos().x()-pos().x();
        mouse_pos_y = event->globalPos().y()-pos().y();
        event->accept();
    }
}
void MyWidget::mouseReleaseEvent(QMouseEvent *event)
{
    setCursor(QCursor(Qt::ArrowCursor));
}
void MyWidget::mouseMoveEvent(QMouseEvent *event)
{
    if ((Qt::LeftButton)and(left_mouse)and(lock_way==0))
    {
        setCursor(QCursor(Qt::OpenHandCursor));
        move(event->globalPos().x()-mouse_pos_x,event->globalPos().y()-mouse_pos_y);
        event->accept();
    }
}
