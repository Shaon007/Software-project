#include<stdio.h>
#include<graphics.h>
#include<winbgim.h>

char opt,ch[10];
int i,mx,my,cm=0,r=0,g=1,y=0,loop=0;

void signal(int r,int y,int g )
{
    rectangle(900,120,980,300);
    circle(940,155,20);
    circle(940,210,20);
    circle(940,260,20);

    if(r==1)
    {
        setcolor(RED);
        for(i=1; i<=19; i++)
            circle(940,155,i);
    }

    if(y==1)
    {
        setcolor(YELLOW);
        for(i=1; i<=19; i++)
            circle(940,210,i);
    }

    if(g==1)
    {
        setcolor(GREEN);
        for(i=1; i<=19; i++)
            circle(940,260,i);
    }

    setcolor(WHITE);
    rectangle(930,300,950,550);


    line(0,550,1200,550);

    line(10,605,150,605);

    line(220,605,340,605);
    line(410,605,550,605);
    line(610,605,75…
          line(610,605,750,605);
    line(810,605,950,605);

    line(965,560,1105,560);
    line(970,565,1110,565);
    line(975,570,1115,570);
    line(980,575,1120,575);
    line(985,580,1125,580);
    line(990,585,1130,585);
    line(995,590,1135,590);
    line(1000,595,1140,595);
    line(1005,600,1145,600);

    line(1010,605,1150,605);
    line(1015,610,1155,610);
    line(1020,615,1160,615);
    line(1025,620,1165,620);
    line(1030,625,1170,625);
    line(1035,630,1175,630);

    line(1040,635,1180,635);
    line(1045,640,1185,640);
    line(1050,645,1190,645);
    line(1055,650,1195,650);
for(i=1;i<=20;i++){
       setcolor(YELLOW);
    circle(700,30,i);
    line(730,28,780,18);
    line(720,10,721,5);
    line(700,100,700,5);
    line(780,100,730,50);
    line(650,100,680,50);
    line(620,50,670,25);}
    //man design
    for(i=1;i<=19;i++){
            setcolor(YELLOW);
    circle(1010,390,i);
    line(995,430,1025,430);
    line(995,430,995,520);
    line(1025,430,1025,520);
    line(995,520,1025,520);
    line(997,520,997,545);
    line(1023,520,1023,545);
    line(1010,390,1010,430);
    line(955,444,995,435);
    line(1025,435,1065,444);
    }


}

void car(int px,int py)
{
    setcolor(WHITE);
    line(px,py,px-130,py);
    line(px-130,py,px-180,py-60);
    line(px-180,py-60,px-400,py-60);
    line(px-400,py-60,px-450,py);
    line(px-450,py,px-530,py);
    line(px-530,py,px-530,py+60);

    line(px-530,py+60,px-480,py+60);
    line(px-400,py+60,px-150,py+60);
    line(px-70,py+60,px,py+60);
    line(px,py,px,py+60);

for(i=1;i<=35;i++){
        setcolor(YELLOW);

    circle(px-440,py+60,i);
    circle(px-110,py+60,i);
}
for(i=1;i<=3;i++){
    setcolor(GREEN);
    circle(px-440,py+60,i);
    circle(px-110,py+60,i);
}
setcolor(GREEN);
    line(px-150,py,px-185,py-45);
    line(px-150,py,px-270,py);
    line(px-270,py,px-270,py-45);
    line(px-185,py-45,px-270,py-45);

    line(px-280,py,px-430,py);
    line(px-280,py,px-280,py-45);
    line(px-280,py-45,px-390,py-45);
    line(px-430,py, px-390,py-45  );

}


int main()
{
    initwindow(1200,660);
    i=0;
    while(true)
    {
        if(kbhit())
        {
            opt=getch();
            if(opt=='r' || opt=='R')
            {
                r=1;
                g=0;
                y=0;
            }
            else if(opt=='y' || opt=='Y')
            {
                r=0;
                y=1;
                g=0;
            }
        }

        if(y==1)
        {
            loop++;
            if(loop==30)
            {
                r=0;
                y=0;
                g=1;
                loop=0;
            }
        }
        signal(r,y,g);

        if(r==1 || y==1){
            if(cm!=900)
                cm+=10;
        }
        else if(g==1){
            cm+=30;
        }

        if(cm>=2000)
        {
            cm=0;
        }
        car(cm,500);
        delay(50);
        cleardevice();
    }
    getch();
    return 0;
}
