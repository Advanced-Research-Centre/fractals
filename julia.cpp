#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>
#include<math.h>
#define Cx -.0321
#define Cy -.8831


int iteration(double x, double y, double cx, double cy)
{
    double temp;
    int i;
     	
         for (i=1;i<1000&&(x*x+y*y)<10; ++i)
		{
			temp = (x*x - y*y) - 2*x*y - cx;
			y = 2*x*y - cy;
			x = temp;

			}
			return i;
}
/* alternative values x0 = 0.3, y0 = 0.55, Side 0.1, 0.01 */
main()
{
	int p, q, n, w, col, input=1;
	double x, y, d=0.0083, cx = -0.0321, cy = -.8831;
	initwindow(300,350,"Julia Zoom",450,250);
	
    for(;input!=27;)
    {
                    if(input == 80)
                    cy = cy + 0.101;
                    if(input == 72)
                    cy = cy - 0.101;
                    if(input == 78)
                    cx = cx + 0.101;
                    if(input == 75)
                    cx = cx - 0.101;
	for (p = 1; p <= 350; p++)
	{

	for (q = 1; q <= 350; q++)
	{
		x = p*d - 1.2;
    	y = q*d - 1.2;		
		w = iteration(x, y, cx, cy);

                                          /*class 1 iteration*/
                                          if(w < 20)
                                          col = COLOR(w*5, w*1.5*2.5, w*.75*2.5);
                                          else if(w < 25)
                                          col=COLOR(0, 50-(w-25)*0.2, 175-w*1.5);
                                          else if(w < 150)
                                          col=COLOR(75-(w-25)*0.25, 190-(w-75)*2, 20);
                                          else if(w < 400)
                                          col=COLOR(40, 300-w, w);
                                          else
                                          col=COLOR(50, 125, 240-w);
                                          /*class 1 iteration ends*/
                                          
                                          /* class 2 iteration*/
                                          /*if(w<20)
                                          col=COLOR(200-(w-4)*20,0,200-(w-4)*20);
                                          else if(w<23)
                                          col=COLOR(250,250,0);
                                          else if(w<26)
                                          col=COLOR(7,225,7);
                                          else if(w<30)
                                          col=COLOR(0,0,200-(w-18)*20);
                                          else if(w<45)
                                          col=COLOR(0,200-(w-20)*20,200);
                                          else if(w<50)
                                          col=COLOR(0,50-(w-25)*0.2,175-(w-125)*2);
                                          else if(w<250)
                                          col=COLOR(20,75-(w-25)*0.25,190-(w-75)*2);
                                          else if(w<275)
                                          col=COLOR(30,90,210);
                                          else if(w<400)
                                          col=COLOR(40,112,230);
                                          else
                                          col=COLOR(0,0,0);*/
                                          /* class 2 iteration ends*/
                                          
                                          putpixel(p,q,col);
                                          }
                                   
                        }
                        writeimagefile("julia.jpg",0,0,300,350);
                        input=getch();
                        cleardevice();                        
                        }
                      getch();
        }
                                          
