#include<iostream>
#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void name_print();
void Smile_emoji();
void DDA_Algorithm();
void bresenhum_algorithm();
void mid_circle();
void Walking_Stickman();
void Happy_Birthday_Cake();
int main()
{

    int ch;

    cout<< "\tWelcome to my project\n-------------------------------------------";
    cout<< "\nMenu\n------------\n\n1.Name print\n2.Smile emoji print\n3.DDA Algorithm\n4.Bresenham Line Drawing Algorithm\n";
    cout<< "5.MId Point Circle A lgorithm\n6.Walking Stickman\n7.Happy birthday cake\n0.Exit\n";


    while(true)
    {
        cout << "\nEnter your choice No: ";
        cin>> ch;


        switch(ch)
        {

        case 1:
        {

            name_print();


        }
        case 2:
        {

            Smile_emoji();
        }
        case 3:
        {

            DDA_Algorithm();
        }
        case 4:
        {

            bresenhum_algorithm();
        }
        case 5:
        {
            mid_circle();

        }
        case 6:
        {
           Walking_Stickman();


        }
        case 7:
        {
            Happy_Birthday_Cake();

        }
        case 0:
        {
            exit(0);


        }
        default:

            cout<< "Invalid choice. Please try again.\n";

        }

    }

    return 0;
}
void name_print()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    initwindow(2000,2000);

    line(100,100,200,100);
    line(100,100,100,200);
    line(100,200,200,200);
    line(200,200,200,300);
    line(200,300,100,300);
    line(300,100,300,200);
    line(400,100,400,200);
    line(300,150,400,150);
    line(500,100,500,200);
    line(600,100,600,200);
    line(500,100,600,100);
    line(500,200,600,200);
    line(700,100,650,200);
    line(700,100,750,200);
    line(675,150,725,150);


    getch();
    closegraph();



}

void Smile_emoji()
{

   int gd= DETECT, gm;
initgraph(&gd, &gm, "");
initwindow(1200, 1200, "Smile Emoji");

setcolor(RED);
line(345, 350, 455, 350);
ellipse(400, 350, 180, 360, 55, 50);
setfillstyle(3,YELLOW);
floodfill(346, 351, RED);

setcolor(RED);
circle(400, 310, 150);
setfillstyle(1,RED);
floodfill(430, 315, RED);

setcolor(WHITE);

circle(350, 260, 30);
setfillstyle(1,YELLOW);
floodfill(351, 261, WHITE);

setcolor(BLACK);
circle(350, 260, 10);
setfillstyle(1,BLACK);
floodfill(351, 261, BLACK);

setcolor(WHITE);
circle(450, 260, 30);
setfillstyle(1,YELLOW);
floodfill(450, 260, WHITE);

setcolor(BLACK);
circle(450, 260, 10);
setfillstyle(1,BLACK);
floodfill(451, 261, BLACK);

setcolor(WHITE);
line(400, 310, 420, 330);
line(400, 310, 380, 330);

line(380, 330, 420, 330);
setfillstyle(1,YELLOW);
floodfill(400, 315, WHITE);

getch();

closegraph();
}

void DDA_Algorithm()
{
    float x1,x2,y1,y2,step;
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");
    cout<<("Enter the value x1 & y1:");
    cin >>x1>>y1;
    cout<<("Enter the value x2 & y2:");
    cin >>x2>>y2;
    int dx=abs(x2-x1);
    int dy=abs(y2-y1);
    cout << dx <<" " << dy << endl;
    if(dx>dy)
    {
        step=dx;
    }
    else
    {
        step = dy;
    }
    cout << "Step :" << step << endl;
    float xin,yin;
    xin=dx/step;
    yin=dy/step;
    cout << xin <<" " << yin << endl;
    int x=x1;
    int y=y1;
    for(int i=0; i<step; i++)
    {
        putpixel(x,y,RED);
        x=x+xin;
        y=y+yin;
        cout << x <<" " << y << endl;
        delay(150);
    }
    getch();
    closegraph();

}

void bresenhum_algorithm()
{
    int gd=DETECT, gm, error, x0, y0, x1, y1,dx, dy, p, x, y;
    initgraph(&gd, &gm, "");
    initwindow(700,700, "Bresenhum");
    cout<<"Enter co-ordinates of first point: ";
    cin>>x0>>y0;

    cout<<"Enter co-ordinates of second point: ";
    cin>>x1>>y1;


    dx=x1-x0;
    dy=y1-y0;

    x=x0;
    y=y0;

    p=2*dy-dx;

    while(x<x1)
    {
        if(p>=0)
        {
            putpixel(x,y,7);
            y=y+1;
            p=p+2*dy-2*dx;
        }
        else
        {
            putpixel(x,y,7);
            p=p+2*dy;
        }
        x=x+1;
    }
    getch();
    closegraph();

}


void mid_circle()
{
    int gd=DETECT,gm;

    initwindow(800,700,"Circle Algorithm");

    outtextxy(150,50,"Name:Mymona Akter Shoa");

    int x,y,r;
    cout << "Enter the value of x, y & r: ";
    cin >> x >> y >> r;

    int x1=0;
    int y1=r;
    int p0=1-r;
    putpixel(x,y,7);

    while(x1<y1)
    {
        if(p0<0)
        {
            x1=x1+1;
            p0=p0+2*x1+1;
        }
        else
        {
            x1=x1+1;
            y1=y1-1;
            p0=p0+2*x1+1-2*y1;
        }
        cout << "(" << x1  <<"," << y1 <<")"<<endl;
        putpixel(x+x1,y+y1,7);
        putpixel(x+x1,y-y1,7);
        putpixel(x-x1,y+y1,7);
        putpixel(x-x1,y-y1,7);
        putpixel(x+y1,y+x1,7);
        putpixel(x+y1,y-x1,7);
        putpixel(x-y1,y+x1,7);
        putpixel(x-y1,y-x1,7);
        delay(70);

    }

    getch();
    closegraph();

}

void Walking_Stickman()



{
	initwindow(700,500,"Walking Man",150,50);
	int i=0;
	int page=0;
	int n=1;
	POINT cursor;
	while(1)
	{
	//road
	setcolor(WHITE);
	GetCursorPos(&cursor);
	setactivepage(page);
	setvisualpage(1-page);
	cleardevice();
	line(0,350,700,350);

	//keys
	setcolor(CYAN);
	rectangle(250,400,300,450);
	outtextxy(265,415,"<--");
	rectangle(400,400,450,450);
	outtextxy(420,415,"-->");

	// STICKMAN
	   setcolor(YELLOW);
	   //head
	circle(50+i,260,15);

	   //body
	line(50+i,275,50+i,310);


	  //hand



	line(50+i,290,20+i,280);
	line(50+i,290,80+i,280);



	   //legs
	   if(n%2==0)
	   {
	    line(50+i,310,50+i,350);

    	line(50+i,310,50+i,350);

	   }
	   else
	   {
	   line(50+i,310,35+i,350);

	   line(50+i,310,65+i,350);

	   }


		if(GetAsyncKeyState(VK_LEFT))
		{

	    	i=i-5;
			n++;
		}

	if(GetAsyncKeyState(VK_RIGHT))
	{
		i=i+5;
			n++;
	}
	delay(100);
	page=1-page;


   }

	getch();
	closegraph();
}

void Happy_Birthday_Cake()
{
   initwindow(600,500,"Happy Birthday",150,50);

	// Third layer
	for(int i=0;i<=300;i++)
	{
		setcolor(LIGHTMAGENTA);
	line(150+i,370,150+i,430);
	delay(10);

    }
    // Second layer
    for(int i=260;i>=0;i--)
    {
    	setcolor(YELLOW);
    	line(170+i,310,170+i,370-2);
    	delay(10);
	}


    // first layer
    for(int i=0;i<=220;i++)
    {
    	setcolor(WHITE);
    	line(190+i,250,190+i,310-2);
    	delay(10);
	}

	// candles
	for(int i=0;i<=70;i++)
	{
		setcolor(LIGHTRED);
		line(210+25,250-2-i,210+25+10,250-2-i);
		line(210+85,250-2-i,210+85+10,250-2-i);
		line(210+145,250-2-i,210+145+10,250-2-i);

		delay(10);
	}
	 setcolor(LIGHTGREEN);
     settextstyle(1,HORIZ_DIR,3);
     outtextxy(140,50,"Happy Birthday Shoa ");





	getch();
	closegraph();
}



