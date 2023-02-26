#ifndef MYWEIGHT_H
#define MYWEIGHT_H
#include<QApplication>
#include<QtWidgets>
#include<iostream>
#include<fstream>
#include<list>
using namespace std;
class MyWidget:public QWidget
{
    Q_OBJECT
public slots:
    void Timer_dock();
public:
    bool on_shift=false;
    bool on_capslock=false;
    bool on_numlock=true;
    map<int,string>key_list1={{9,"Esc"},{67,"F1"},{68,"F2"},{69,"F3"},{70,"F4"},{71,"F5"},{72,"F6"},{73,"F7"},{74,"F8"},{75,"F9"},{76,"F10"},{95,"F11"},{96,"F12"},{107,"PrintScreen"},{78,"ScroolLock"},{127,"PauseBreak"},{49,"`"},{10,"1"},{11,"2"},{12,"3"},{13,"4"},{14,"5"},{15,"6"},{16,"7"},{17,"8"},{18,"9"},{19,"0"},{20,"-"},{21,"="},{22,"Backspace"},{118,"Insert"},{110,"Home"},{112,"PageUp"},{77,"NumLock"},{106,"/"},{63,"*"},{82,"-"},{23,"Tab"},{24,"q"},{25,"w"},{26,"e"},{27,"r"},{28,"t"},{29,"y"},{30,"u"},{31,"i"},{32,"o"},{33,"p"},{34,"["},{35,"]"},{36,"Enter"},{119,"Delete"},{115,"End"},{117,"PageDown"},{79,"7"},{80,"8"},{81,"9"},{86,"+"},{66,"CapsLock"},{38,"a"},{39,"s"},{40,"d"},{41,"f"},{42,"g"},{43,"h"},{44,"j"},{45,"k"},{46,"l"},{47,";"},{48,"’"},{51,"、"},{83,"4"},{84,"5"},{85,"6"},{50,"Shift"},{52,"z"},{53,"x"},{54,"c"},{55,"v"},{56,"b"},{57,"n"},{58,"m"},{59,","},{60,"."},{61,"/"},{62,"Shift"},{111,"↑"},{87,"1"},{88,"2"},{89,"3"},{104,"Enter"},{37,"Ctrl"},{133,"Launcher"},{64,"Alt"},{65,"Space"},{108,"Alt"},{134,"Launcher"},{135,"Appl"},{105,"Ctrl"},{113,"←"},{116,"↓"},{114,"→"},{90,"0"},{91,"."}};
    int mouse_pos_x;
    int mouse_pos_y;
    char the_show_way;
    char lock_way;
    bool left_mouse;
    bool key1=false;
    bool key2=false;
    bool key3=false;
    bool start_doing=false;
    QTimer* timer=new QTimer();
    explicit MyWidget(QWidget *parent = nullptr);
    void contextMenuEvent(QContextMenuEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    QMovie *main_gif = new QMovie("files/image/github_timer.gif");
    QLabel *show_gif = new QLabel(this);
    QLabel *show_time = new QLabel(this);
    QLabel *show_key1 = new QLabel(this);
    QLabel *show_key2 = new QLabel(this);
    QLabel *show_key3 = new QLabel(this);
    QMenu *menu=new QMenu(this);
    QMenu *show_way=new QMenu(tr("显示方法"),this);
    QAction *on_top=new QAction(tr("顶部"),this);
    QAction *on_under=new QAction(tr("正常窗口"),this);
    QAction *lock_unlock=new QAction(tr("lock"),this);
    QAction *exit_main=new QAction(tr("退出"),this);
};
#endif // MYWEIGHT_H
