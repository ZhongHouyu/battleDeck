#include "window_my_deck.h"
#include "ui_window_my_deck.h"
#include <QList>

Window_my_deck::Window_my_deck(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::window_my_deck)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog);
    this->setFixedSize(this->parentWidget()->width(),this->parentWidget()->height());
    ui->label_player_profile->setPixmap(QPixmap(":/system/sources/pics/player1.jpg"));
    ui->label_player_profile->setFixedSize(60,60);
    ui->label_player_profile->move(10,10);
    ui->label_player_profile->setStyleSheet("QLabel{border:1px solid rgb(0, 0, 0);}");

    ui->lable_player_name->move(ui->label_player_profile->pos().x(),ui->label_player_profile->pos().y()+ui->label_player_profile->height());
    ui->lable_player_name->setFixedSize(60,20);
    ui->lable_player_name->setAlignment(Qt::AlignCenter);
    ui->lable_player_name->setText("Mr.Qiao");
    ui->lable_player_name->setStyleSheet("QLabel{border:1px solid rgb(0, 0, 0);}");

    ui->lable_player_level->move(ui->lable_player_name->pos().x(),ui->lable_player_name->pos().y()+ui->lable_player_name->height());
    ui->lable_player_level->setFixedSize(60,20);
    ui->lable_player_level->setText("level 1");
    ui->lable_player_level->setAlignment(Qt::AlignCenter);
    ui->lable_player_level->setStyleSheet("QLabel{border:1px solid rgb(0, 0, 0);}");
    player = new Player();
    show_deck(this);
}
void Window_my_deck::show_deck(QWidget *parent){

    QList<Card*>::iterator i;
    int width = 150;
    int height = -180;
    int cnt = 0;
    if(nullptr==player){
        return;
    }
    for (i = player->deck->my_deck.begin(); i != player->deck->my_deck.end(); ++i) {
        if((*i)==nullptr){
            continue;
        }
        if(cnt%10==0){
            height = height + CARD_HEIGHT+30;
            cnt=0;
        }
        Card_UI *cui = new Card_UI(parent);
        cui->card_name->setText((*i)->card_name);
        cui->card_health->setText(QString(QString::number((*i)->health)));
        cui->card_attack->setText(QString(QString::number((*i)->attack)));
        if(basic ==(*i)->card_type){    // 基础牌不显示攻击生命值
            cui->card_health->hide();
            cui->card_attack->hide();
        }
         // 饱满填充
        cui->card_pic->setPixmap((*i)->card_pix_path.scaled(CARD_WIDTH-20, CARD_HEIGHT-60, Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
        cui->card_health->setText(QString((*i)->health));
        cui->card_attack->setText(QString((*i)->attack));
        cui->card_bottom_surface->setFixedSize(CARD_WIDTH,CARD_HEIGHT);
        cui->card_name->setFixedSize(CARD_WIDTH,30);
        cui->card_health->setFixedSize(40,30);
        cui->card_attack->setFixedSize(40,30);
        cui->card_bottom_surface->setStyleSheet("QLabel{border:1px solid rgb(0, 0, 0);}");
        cui->card_pic->setStyleSheet("QLabel{border:1px solid rgb(255, 255, 255);}");
        cui->card_name->setStyleSheet("QLabel{border:1px solid rgb(0, 0, 0);}");
        cui->card_health->setStyleSheet("QLabel{border:1px solid rgb(0, 0, 0);}");
        cui->card_attack->setStyleSheet("QLabel{border:1px solid rgb(0, 0, 0);}");
        QFont font ( "Microsoft YaHei", 8, 50);
         cui->card_name->setFont(font);
        int _width =width + cnt*(CARD_WIDTH);
        cui->card_bottom_surface->move(_width,height);
        cui->card_name->move(cui->card_bottom_surface->pos().x(),cui->card_bottom_surface->pos().y());
        cui->card_pic->move(cui->card_name->pos().x()+10,cui->card_name->pos().y()+30);
        cui->card_health->move(cui->card_pic->pos().x()-10,cui->card_pic->pos().y()+CARD_HEIGHT-60);
        cui->card_attack->move(cui->card_pic->pos().x()+CARD_WIDTH-50,cui->card_pic->pos().y()+CARD_HEIGHT-60);

        card_ui_list.append(cui);
        cnt++;
    }
}
Window_my_deck::~Window_my_deck()
{
    qDeleteAll(card_ui_list.begin(),card_ui_list.end());
    card_ui_list.clear();
    delete ui;
}
void Window_my_deck::closeEvent(QCloseEvent *){
    emit ExitWin();
}
