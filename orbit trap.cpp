#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>
#include<math.h>




main()
{
      double d = 0.003;
      double centrex = -2.2, centrey = -.9;
      double cx, cy, ix, iy, temp, dist = 0;
      int col, x, y;
      initwindow(1024, 750, "MandleBrot");
      for(y = 2; y < 750; y++)
      {
                        iy = y*d + centrey;
                        for(x = 2; x < 1024; x++)
                        {
                                          ix = x*d + centrex;
                                          int i;
                                          cx = cy = dist = 0;
                                          for(i = 0; i < 500 && dist < 2; i++)
                                              {
                                              temp = ix + ((cx*cx) - (cy*cy));
                                              cy = iy + 2*cx*cy;
                                              cx = temp;
                                              dist = pow(cx+.5,2) + pow(cy+.15,2);
                                              }
                                          putpixel(x, y, dist*671088630);
                                          /*if(i+dist*5<10)
                                          col=COLOR(200-(i-4)*20,0,0);
                                          else if(i+dist*5<15)
                                          col=COLOR(200-(i-10)*20,200-(i-10)*20,0);
                                          else if(i+dist*5<18)
                                          col=COLOR(0,200-(i-15)*20,0);
                                          else if(i+dist*5<20)
                                          col=COLOR(0,0,200-(i-18)*20);
                                          else if(i+dist*5<25)
                                          col=COLOR(0,200-(i-20)*20,200);
                                          else if(i+dist*5<75)
                                          col=COLOR(0,50-(i-25)*0.2,175-(i-25)*2);
                                          else if(i+dist*5<125)
                                          col=COLOR(20,75-(i-25)*0.25,190-(i-75)*2);
                                          else if(i+dist*5<200)
                                          col=COLOR(30,90,210);
                                          else if(i+dist*5<300)
                                          col=COLOR(40,112,230);
                                          else if(i+dist*5<400)
                                          col=COLOR(80,15,240);
                                          else
                                          col=COLOR(60,175,250);
                                          putpixel(x,y,col);*/
                                          }
                                   
                        }
                        writeimagefile("Mandlebrot orbit trap.jpg",0,0,1024,780);
                      getch();
        }
                                          
