    #include<iostream.h>
    #include<graphics.h>
    #include<conio.h>
    #include<stdio.h>
    #include<stdlib.h>
    #include<windows.h>
    #include<math.h>
    main()
{
      initwindow(1350,680,"IMAGE 1",0,0);
      float cx,cy,z1x=0,z1y=0,zdum,z;
      int k;
      for(int i=1;i<1350;i++)
      {
      for(int j=1;j<680;j++)
      {
           cx=i*.0002-1.9;
           cy=j*.0002-0.1;
           z1x=0;z1y=0;
           z=sqrt(pow(z1x,2)+pow(z1y,2));
           for(k=1;k<100&&z<6;k++)
            {
                zdum=pow(z1x,2)-pow(z1y,2)+cx;
                z1y=2*fabs(z1x)*fabs(z1y)+cy;
                z1x=zdum;             
                z=sqrt(pow(z1x,2)+pow(z1y,2));
            }
           if(k<9) 
           {putpixel(i,j,COLOR(20,20,k*1.7));} 
           else if(k<19) 
           {putpixel(i,j,COLOR(20,20,k*30));}             
           else if(k<40) 
           {putpixel(i,j,COLOR(180-k*20,180-k*20,20));}
           else if(k<90)
           {putpixel(i,j,COLOR(180-k*10,20,20));}
           else
           putpixel(i,j,COLOR(0,0,0));
           
      }
      }
 writeimagefile("Mandelbrot.jpeg",0,0,1350,680);
     getch();
      
}
